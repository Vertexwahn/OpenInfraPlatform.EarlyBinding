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
#include "../../model/shared_ptr.h"
#include "../../model/IfcTunnelObject.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// TYPE IfcSensorTypeEnum = ENUMERATION OF	(CONDUCTANCESENSOR	,CONTACTSENSOR	,FIRESENSOR	,FLOWSENSOR	,GASSENSOR	,HEATSENSOR	,HUMIDITYSENSOR	,IONCONCENTRATIONSENSOR	,LEVELSENSOR	,LIGHTSENSOR	,MOISTURESENSOR	,MOVEMENTSENSOR	,PHSENSOR	,PRESSURESENSOR	,RADIATIONSENSOR	,RADIOACTIVITYSENSOR	,SMOKESENSOR	,SOUNDSENSOR	,TEMPERATURESENSOR	,WINDSENSOR	,USERDEFINED	,NOTDEFINED);
		class IfcSensorTypeEnum : public IfcTunnelAbstractEnum, public IfcTunnelType
		{
		public:
			enum IfcSensorTypeEnumEnum
			{
				ENUM_CONDUCTANCESENSOR,
				ENUM_CONTACTSENSOR,
				ENUM_FIRESENSOR,
				ENUM_FLOWSENSOR,
				ENUM_GASSENSOR,
				ENUM_HEATSENSOR,
				ENUM_HUMIDITYSENSOR,
				ENUM_IONCONCENTRATIONSENSOR,
				ENUM_LEVELSENSOR,
				ENUM_LIGHTSENSOR,
				ENUM_MOISTURESENSOR,
				ENUM_MOVEMENTSENSOR,
				ENUM_PHSENSOR,
				ENUM_PRESSURESENSOR,
				ENUM_RADIATIONSENSOR,
				ENUM_RADIOACTIVITYSENSOR,
				ENUM_SMOKESENSOR,
				ENUM_SOUNDSENSOR,
				ENUM_TEMPERATURESENSOR,
				ENUM_WINDSENSOR,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcSensorTypeEnum();
			IfcSensorTypeEnum( IfcSensorTypeEnumEnum e ) { m_enum = e; }
			~IfcSensorTypeEnum();
			virtual const char* classname() const { return "IfcSensorTypeEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcSensorTypeEnum> readStepData( std::string& arg );
			IfcSensorTypeEnumEnum m_enum;
		};
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform

