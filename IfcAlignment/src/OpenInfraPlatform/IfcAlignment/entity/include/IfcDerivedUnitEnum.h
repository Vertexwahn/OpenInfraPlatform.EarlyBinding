// Copied and modified code from "IfcPlusPlus" library.
// This library is available under the OpenSceneGraph Public License. Original copyright notice:

/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and / or modified under
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or
* (at your option) any later version.The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
* OpenSceneGraph Public License for more details.
*/

/* This file has been automatically generated using the TUM Open Infra Platform
Early Binding EXPRESS Generator. Any changes to this file my be lost in the future. */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "OpenInfraPlatform/IfcAlignment/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Object.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// TYPE IfcDerivedUnitEnum = ENUMERATION OF	(ANGULARVELOCITYUNIT	,AREADENSITYUNIT	,COMPOUNDPLANEANGLEUNIT	,DYNAMICVISCOSITYUNIT	,HEATFLUXDENSITYUNIT	,INTEGERCOUNTRATEUNIT	,ISOTHERMALMOISTURECAPACITYUNIT	,KINEMATICVISCOSITYUNIT	,LINEARVELOCITYUNIT	,MASSDENSITYUNIT	,MASSFLOWRATEUNIT	,MOISTUREDIFFUSIVITYUNIT	,MOLECULARWEIGHTUNIT	,SPECIFICHEATCAPACITYUNIT	,THERMALADMITTANCEUNIT	,THERMALCONDUCTANCEUNIT	,THERMALRESISTANCEUNIT	,THERMALTRANSMITTANCEUNIT	,VAPORPERMEABILITYUNIT	,VOLUMETRICFLOWRATEUNIT	,ROTATIONALFREQUENCYUNIT	,TORQUEUNIT	,MOMENTOFINERTIAUNIT	,LINEARMOMENTUNIT	,LINEARFORCEUNIT	,PLANARFORCEUNIT	,MODULUSOFELASTICITYUNIT	,SHEARMODULUSUNIT	,LINEARSTIFFNESSUNIT	,ROTATIONALSTIFFNESSUNIT	,MODULUSOFSUBGRADEREACTIONUNIT	,ACCELERATIONUNIT	,CURVATUREUNIT	,HEATINGVALUEUNIT	,IONCONCENTRATIONUNIT	,LUMINOUSINTENSITYDISTRIBUTIONUNIT	,MASSPERLENGTHUNIT	,MODULUSOFLINEARSUBGRADEREACTIONUNIT	,MODULUSOFROTATIONALSUBGRADEREACTIONUNIT	,PHUNIT	,ROTATIONALMASSUNIT	,SECTIONAREAINTEGRALUNIT	,SECTIONMODULUSUNIT	,SOUNDPOWERLEVELUNIT	,SOUNDPOWERUNIT	,SOUNDPRESSURELEVELUNIT	,SOUNDPRESSUREUNIT	,TEMPERATUREGRADIENTUNIT	,TEMPERATURERATEOFCHANGEUNIT	,THERMALEXPANSIONCOEFFICIENTUNIT	,WARPINGCONSTANTUNIT	,WARPINGMOMENTUNIT	,USERDEFINED);
		class IfcDerivedUnitEnum : public IfcAlignmentP6AbstractEnum, public IfcAlignmentP6Type
		{
		public:
			enum IfcDerivedUnitEnumEnum
			{
				ENUM_ANGULARVELOCITYUNIT,
				ENUM_AREADENSITYUNIT,
				ENUM_COMPOUNDPLANEANGLEUNIT,
				ENUM_DYNAMICVISCOSITYUNIT,
				ENUM_HEATFLUXDENSITYUNIT,
				ENUM_INTEGERCOUNTRATEUNIT,
				ENUM_ISOTHERMALMOISTURECAPACITYUNIT,
				ENUM_KINEMATICVISCOSITYUNIT,
				ENUM_LINEARVELOCITYUNIT,
				ENUM_MASSDENSITYUNIT,
				ENUM_MASSFLOWRATEUNIT,
				ENUM_MOISTUREDIFFUSIVITYUNIT,
				ENUM_MOLECULARWEIGHTUNIT,
				ENUM_SPECIFICHEATCAPACITYUNIT,
				ENUM_THERMALADMITTANCEUNIT,
				ENUM_THERMALCONDUCTANCEUNIT,
				ENUM_THERMALRESISTANCEUNIT,
				ENUM_THERMALTRANSMITTANCEUNIT,
				ENUM_VAPORPERMEABILITYUNIT,
				ENUM_VOLUMETRICFLOWRATEUNIT,
				ENUM_ROTATIONALFREQUENCYUNIT,
				ENUM_TORQUEUNIT,
				ENUM_MOMENTOFINERTIAUNIT,
				ENUM_LINEARMOMENTUNIT,
				ENUM_LINEARFORCEUNIT,
				ENUM_PLANARFORCEUNIT,
				ENUM_MODULUSOFELASTICITYUNIT,
				ENUM_SHEARMODULUSUNIT,
				ENUM_LINEARSTIFFNESSUNIT,
				ENUM_ROTATIONALSTIFFNESSUNIT,
				ENUM_MODULUSOFSUBGRADEREACTIONUNIT,
				ENUM_ACCELERATIONUNIT,
				ENUM_CURVATUREUNIT,
				ENUM_HEATINGVALUEUNIT,
				ENUM_IONCONCENTRATIONUNIT,
				ENUM_LUMINOUSINTENSITYDISTRIBUTIONUNIT,
				ENUM_MASSPERLENGTHUNIT,
				ENUM_MODULUSOFLINEARSUBGRADEREACTIONUNIT,
				ENUM_MODULUSOFROTATIONALSUBGRADEREACTIONUNIT,
				ENUM_PHUNIT,
				ENUM_ROTATIONALMASSUNIT,
				ENUM_SECTIONAREAINTEGRALUNIT,
				ENUM_SECTIONMODULUSUNIT,
				ENUM_SOUNDPOWERLEVELUNIT,
				ENUM_SOUNDPOWERUNIT,
				ENUM_SOUNDPRESSURELEVELUNIT,
				ENUM_SOUNDPRESSUREUNIT,
				ENUM_TEMPERATUREGRADIENTUNIT,
				ENUM_TEMPERATURERATEOFCHANGEUNIT,
				ENUM_THERMALEXPANSIONCOEFFICIENTUNIT,
				ENUM_WARPINGCONSTANTUNIT,
				ENUM_WARPINGMOMENTUNIT,
				ENUM_USERDEFINED
			};

			IfcDerivedUnitEnum();
			IfcDerivedUnitEnum( IfcDerivedUnitEnumEnum e ) { m_enum = e; }
			~IfcDerivedUnitEnum();
			virtual const char* classname() const { return "IfcDerivedUnitEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcDerivedUnitEnum> readStepData( std::string& arg );
			IfcDerivedUnitEnumEnum m_enum;
		};
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform

