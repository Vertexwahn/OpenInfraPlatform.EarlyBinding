#
#    Copyright (c) 2018 Technical University of Munich
#    Chair of Computational Modeling and Simulation.
#
#    TUM Open Infra Platform is free software; you can redistribute it and/or modify
#    it under the terms of the GNU General Public License Version 3
#    as published by the Free Software Foundation.
#
#    TUM Open Infra Platform is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program. If not, see <http://www.gnu.org/licenses/>.
#

cmake_minimum_required(VERSION 3.10)
cmake_policy(SET CMP0020 NEW)
cmake_policy(SET CMP0048 NEW)

project(OpenInfraPlatform.EarlyBinding VERSION "1.0.0.0")

# Set to export all symbols into DLLs
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

#------------------------------------------------------------------------------
# Check for Microsoft VisualStudio version and processor architecture.
# Some checks to ensure that the prerequisites are ok
#------------------------------------------------------------------------------

if(MSVC_VERSION EQUAL 1900)
	set(MSVC_VERSION_STRING "vs2015")
	set(MSVC_VERSION_YEAR "2015")
elseif(MSVC_VERSION GREATER_EQUAL 1910 AND MSVC_VERSION LESS_EQUAL 1919)
	set(MSVC_VERSION_STRING "vs2017")
	set(MSVC_VERSION_YEAR "2017")
else()
	message("Please switch to Visual Studio 14 2015 or Visual Studio 15 2017.")
	return()
endif()

# Return if system is not 64-bit based
if(NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message("Please switch to x64 build.")
	return()
endif()

# Compiler settings
if (WIN32)
	# Standard:          /DWIN32 /D_WINDOWS /W3 /Zm1000 /EHsc /GR
	set(CMAKE_CXX_FLAGS "/DWIN32 /D_WINDOWS /W4 /Zi /EHsc /GR /MP /openmp /bigobj")
endif (WIN32)

find_path(visit_struct_INCLUDE_DIR REQUIRED)

include_directories(${visit_struct_INCLUDE_DIR})

macro(add_format format schema)
	set(IFC_FORMATS ${IFC_FORMATS} ${format})
	set(IFC_SCHEMAS ${IFC_SCHEMAS} ${schema})
	set(${format}_SCHEMA ${schema}.exp)
endmacro()

add_format(Ifc2x3 IFC2X3_TC1)
add_format(IFC4 IFC4_ADD1)
add_format(IfcAlignment IFC4_P6_longform_draft5_withMinorSyntaxCorrection)
add_format(IfcAlignment1x1 IFC4x1_RC3)
add_format(IfcBridge IFC2X4_RC3-Bridge)
add_format(IfcRoad IfcRoad)
add_format(IfcTunnel IFC4_ADD1_Tunnel)

option(USE_PREBUILD_SOURCES "Default ON: Use the default sources on which the OpenInfraPlatform is based." ON)

foreach(format ${IFC_FORMATS})
	option(WITH_${format} "Build OpenInfraPlatform.${format} libraries" OFF)
endforeach()

if(NOT USE_PREBUILD_SOURCES)
	find_package(oipExpress REQUIRED)
	if(oipExpress_FOUND)
		foreach(format ${IFC_FORMATS})
			if(WITH_${format})
				if(NOT EXISTS ${CMAKE_BINARY_DIR}/${format}/CMakeLists.txt)
					execute_process(COMMAND "${oipExpress_EXE}" ${PROJECT_SOURCE_DIR}/schemas/${${format}_SCHEMA} -o ${CMAKE_BINARY_DIR})
				endif()
				if(EXISTS ${CMAKE_BINARY_DIR}/${format}/CMakeLists.txt)
					add_subdirectory(${CMAKE_BINARY_DIR}/${format} ${CMAKE_BINARY_DIR}/${format}/build/${MSVC_VERSION_STRING})
				endif()
			endif()
		endforeach()
	endif()
else()
	foreach(format ${IFC_FORMATS})
		if(WITH_${format})
			add_subdirectory(${format} ${CMAKE_BINARY_DIR}/${format}/build/${MSVC_VERSION_STRING})
		endif()
	endforeach()
endif()

#-------------------------------------------------------------------------------------
# Installation
#-------------------------------------------------------------------------------------
file(WRITE ${CMAKE_BINARY_DIR}/${PROJECT_NAME}Config.cmake "set(${PROJECT_NAME}_FOUND 1) \nset(${PROJECT_NAME}_INCLUDE_DIR \${${PROJECT_NAME}_DIR}/include)\n")

foreach(format ${IFC_FORMATS})
	if(WITH_${format})
		file(APPEND ${CMAKE_BINARY_DIR}/${PROJECT_NAME}Config.cmake "set(${PROJECT_NAME}_LIBRARIES \${${PROJECT_NAME}_LIBRARIES} debug \${${PROJECT_NAME}_DIR}/lib/\${MSVC_VERSION_STRING}/x64/Debug/OpenInfraPlatform.${format}d.lib)\n")
		file(APPEND ${CMAKE_BINARY_DIR}/${PROJECT_NAME}Config.cmake "set(${PROJECT_NAME}_LIBRARIES \${${PROJECT_NAME}_LIBRARIES} optimized \${${PROJECT_NAME}_DIR}/lib/\${MSVC_VERSION_STRING}/x64/Release/OpenInfraPlatform.${format}.lib)\n")
	endif()
endforeach()

file(WRITE ${CMAKE_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake "set(PACKAGE_VERSION \"${CPACK_PACKAGE_VERSION}\") \nset(PACKAGE_VERSION_EXACT True) \nset(PACKAGE_VERSION_COMPATIBLE True) \nset(PACKAGE_VERSION_UNSUITABLE False)")

install(FILES ${CMAKE_BINARY_DIR}/${PROJECT_NAME}Config.cmake DESTINATION / COMPONENT cmake)
install(FILES ${CMAKE_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake DESTINATION / COMPONENT cmake)


#-------------------------------------------------------------------------------------
# Deployment
#-------------------------------------------------------------------------------------

add_custom_target(DEPLOY  
  COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target ALL_BUILD --config debug
  COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target ALL_BUILD --config release
  COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target PACKAGE
)


set(CPACK_GENERATOR ZIP)
set(CPACK_WIX_UPGRADE_GUID "14F6C7CD-41DF-46AB-A77F-DB5ACA168318")
set(CPACK_PACKAGE_NAME "${PROJECT_NAME}")
set(CPACK_PACKAGE_VENDOR "https://www.cms.bgu.tum.de/en/")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "${PROJECT_NAME}")
set(CPACK_PACKAGE_VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}.${PROJECT_VERSION_TWEAK}")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_VERSION_TEWAK "${PROJECT_VERSION_TWEAK}}")

set(CPACK_PACKAGE_INSTALL_DIRECTORY "${PROJECT_NAME}")
set(CPACK_WIX_CMAKE_PACKAGE_REGISTRY "${PROJECT_NAME}")

include(CPackComponent)

cpack_add_install_type(default DISPLAY_NAME "Default")

cpack_add_component_group(supported_formats DISPLAY_NAME "File Formats"
  DESCRIPTION "The library files used by the application (*.lib) to support different file formats."
)


foreach(format ${IFC_FORMATS})
	if(WITH_${format})
		cpack_add_component(${format} DISPLAY_NAME "${format}" DESCRIPTION "OpenInfraPlatform.${format} libraries" GROUP supported_formats INSTALL_TYPES default)
		set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} ${format})
	endif()
endforeach()

cpack_add_component(cmake DISPLAY_NAME "CMake Integration" DESCRIPTION "Allow applications to find ${PROJECT_NAME} using 'find_package' command." INSTALL_TYPES default)

set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} cmake)

include(CPack)