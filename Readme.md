# OpenInfraPlatform.EarlyBinding

## Info

OpenInfraPlatform.EarlyBinding is a standalone static C++ library providing C++ bindings for various Ifc formats. Currently the following formats are supported:

* Ifc2x3
* Ifc4
* IfcAlignment1x0: Proposal for extension of Ifc4 with alignment specifications.
* IfcAlignment1x1: Prototype implementation of the Ifc4x1 _RC3 schema now published as Ifc4x1 final.
* IfcRoad: experimental TUM proposal
* IfcTunnel: experimental TUM proposal
* IfcBridge: experimental IAI French & German chapter proposal, not the official buildingSMART IfcBridge specification under development.(Yabuki, Nobuyoshi & Lebegue, Eric & Gual, Jean & Shitani, Tomoaki & Li, Zhantao. (2006). International Collaboration for Developing the Bridge Product Model “IFC-Bridge”. https://www.researchgate.net/publication/229002021_International_Collaboration_for_Developing_the_Bridge_Product_Model_IFC-Bridge)

Additional formats can be added by adding "add_format(<format> <schema file name>)" to the CMakeLists.txt file and adding the corresponding EXPRESS schema file (*.exp) in the schemas folder.

## Building

### Dependencies

* OpenInfraPlatform.ExpressGenerator (https://bitbucket.org/Vertexwahn/oipexpress) (*GNU General Public License Version 3*): The OpenInfraPlatform.ExpressGenerator is required to parse the EXPRESS schemas specifying the IFC file format to generate C++ classes.


* visit_struct (https://github.com/cbeck88/visit_struct) (*Boost Software License*): The visit_struct project is required to provide reflection for the Ifc classes.


### Formats

Which libraries should be build can be controlled using the WITH_<Format> options in the CMake GUI. For all formats listed above there exist previously generated source and header files which are used in the current TUM OpenInfraPlatform. If the USE_PREBUILD_SOURCES option is unchecked and all desired formats are selected, the corresponding .cpp and .h files, as well as files for CMake support are generated in the build directory and included using "add_subdirectory" for solution generation with the EXPRESS Generator.

## Usage

After installing using the INSTALL target or a binary installer, the libraries can be used using CMake's "find_package" command, providing the libraries in the OpenInfraPlatform.EarlyBinding_LIBRARIES variable and the headers under OpenInfraPlatform.EarlyBinding_INCLUDE_DIR.

The files themselves are found at "<OpenInfraPlatform.EarlyBinding installation directory>/include/..." and "<OpenInfraPlatform.EarlyBinding>/lib/...". "OpenInfraPlatform.EarlyBinding" is usually "C:/Program Files/OpenInfraPlatform.EarlyBinding".

All variables are automatically found by directing the OpenInfraPlatform.EarlyBinding_DIR variable in CMake to the folder containing the "OpenInfraPlatform.EarlyBindingConfig.cmake" file.

## License

Copyright (c) 2018 Technical University of Munich
Chair of Computational Modeling and Simulation.

TUM Open Infra Platform is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License Version 3
as published by the Free Software Foundation.

TUM Open Infra Platform is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

## Copyright notes

OpenInfraPlatform.EarlyBinding uses the following software libraries. The corresponding licenses can be found in the Licenses folder distributed with this source code:

* OpenInfraPlatform.ExpressGenerator (https://bitbucket.org/Vertexwahn/oipexpress) (*GNU General Public License Version 3*)
* visit_struct (https://github.com/cbeck88/visit_struct) (*Boost Software License*)
