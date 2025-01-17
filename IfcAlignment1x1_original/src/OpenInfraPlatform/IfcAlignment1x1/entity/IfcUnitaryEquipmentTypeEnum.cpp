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

#include "IfcUnitaryEquipmentTypeEnum.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnum() {}
		IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnum(IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnumEnum value) { m_enum = value; }
		IfcUnitaryEquipmentTypeEnum::~IfcUnitaryEquipmentTypeEnum() {}
		void IfcUnitaryEquipmentTypeEnum::getStepParameter(std::stringstream& stream, bool is_select_type) const
			{
				if ( m_enum == IfcUnitaryEquipmentTypeEnumEnum::ENUM_AIRHANDLER)
				{
					stream << ".AIRHANDLER.";
				}
				else if ( m_enum == IfcUnitaryEquipmentTypeEnumEnum::ENUM_AIRCONDITIONINGUNIT)
				{
					stream << ".AIRCONDITIONINGUNIT.";
				}
				else if ( m_enum == IfcUnitaryEquipmentTypeEnumEnum::ENUM_DEHUMIDIFIER)
				{
					stream << ".DEHUMIDIFIER.";
				}
				else if ( m_enum == IfcUnitaryEquipmentTypeEnumEnum::ENUM_SPLITSYSTEM)
				{
					stream << ".SPLITSYSTEM.";
				}
				else if ( m_enum == IfcUnitaryEquipmentTypeEnumEnum::ENUM_ROOFTOPUNIT)
				{
					stream << ".ROOFTOPUNIT.";
				}
				else if ( m_enum == IfcUnitaryEquipmentTypeEnumEnum::ENUM_USERDEFINED)
				{
					stream << ".USERDEFINED.";
				}
				else if ( m_enum == IfcUnitaryEquipmentTypeEnumEnum::ENUM_NOTDEFINED)
				{
					stream << ".NOTDEFINED.";
				}
				if (is_select_type) { stream << ")"; }
			}
			std::shared_ptr<IfcUnitaryEquipmentTypeEnum> IfcUnitaryEquipmentTypeEnum::readStepData(const std::string& arg)
			{
				if( arg.compare( "$" ) == 0 ) { return std::shared_ptr<IfcUnitaryEquipmentTypeEnum>(); }
				std::shared_ptr<IfcUnitaryEquipmentTypeEnum> type_object(new IfcUnitaryEquipmentTypeEnum() );
				if ( _stricmp( arg.c_str(), ".AIRHANDLER.") == 0)
				{
					type_object->m_enum = IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnumEnum::ENUM_AIRHANDLER;
				}
				else if ( _stricmp( arg.c_str(), ".AIRCONDITIONINGUNIT.") == 0)
				{
					type_object->m_enum = IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnumEnum::ENUM_AIRCONDITIONINGUNIT;
				}
				else if ( _stricmp( arg.c_str(), ".DEHUMIDIFIER.") == 0)
				{
					type_object->m_enum = IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnumEnum::ENUM_DEHUMIDIFIER;
				}
				else if ( _stricmp( arg.c_str(), ".SPLITSYSTEM.") == 0)
				{
					type_object->m_enum = IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnumEnum::ENUM_SPLITSYSTEM;
				}
				else if ( _stricmp( arg.c_str(), ".ROOFTOPUNIT.") == 0)
				{
					type_object->m_enum = IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnumEnum::ENUM_ROOFTOPUNIT;
				}
				else if ( _stricmp( arg.c_str(), ".USERDEFINED.") == 0)
				{
					type_object->m_enum = IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnumEnum::ENUM_USERDEFINED;
				}
				else if ( _stricmp( arg.c_str(), ".NOTDEFINED.") == 0)
				{
					type_object->m_enum = IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnumEnum::ENUM_NOTDEFINED;
				}
				return type_object;
			}
	} // end namespace IfcAlignment1x1
} // end namespace OpenInfraPlatform
