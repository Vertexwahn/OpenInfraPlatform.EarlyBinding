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
#include "../../model/IfcBridgeObject.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// TYPE IfcElectricFlowStorageDeviceTypeEnum = ENUMERATION OF	(BATTERY	,CAPACITORBANK	,HARMONICFILTER	,INDUCTORBANK	,UPS	,USERDEFINED	,NOTDEFINED);
		class IfcElectricFlowStorageDeviceTypeEnum : public IfcBridgeAbstractEnum, public IfcBridgeType
		{
		public:
			enum IfcElectricFlowStorageDeviceTypeEnumEnum
			{
				ENUM_BATTERY,
				ENUM_CAPACITORBANK,
				ENUM_HARMONICFILTER,
				ENUM_INDUCTORBANK,
				ENUM_UPS,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcElectricFlowStorageDeviceTypeEnum();
			IfcElectricFlowStorageDeviceTypeEnum( IfcElectricFlowStorageDeviceTypeEnumEnum e ) { m_enum = e; }
			~IfcElectricFlowStorageDeviceTypeEnum();
			virtual const char* classname() const { return "IfcElectricFlowStorageDeviceTypeEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcElectricFlowStorageDeviceTypeEnum> readStepData( std::string& arg );
			IfcElectricFlowStorageDeviceTypeEnumEnum m_enum;
		};
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform

