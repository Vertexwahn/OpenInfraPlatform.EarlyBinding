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

#include "IfcReinforcingBarTypeEnum.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnum() {}
		IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnum(IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum value) { m_enum = value; }
		IfcReinforcingBarTypeEnum::~IfcReinforcingBarTypeEnum() {}
		void IfcReinforcingBarTypeEnum::getStepParameter(std::stringstream& stream, bool is_select_type) const
			{
				if ( m_enum == IfcReinforcingBarTypeEnumEnum::ENUM_ANCHORING)
				{
					stream << ".ANCHORING.";
				}
				else if ( m_enum == IfcReinforcingBarTypeEnumEnum::ENUM_EDGE)
				{
					stream << ".EDGE.";
				}
				else if ( m_enum == IfcReinforcingBarTypeEnumEnum::ENUM_LIGATURE)
				{
					stream << ".LIGATURE.";
				}
				else if ( m_enum == IfcReinforcingBarTypeEnumEnum::ENUM_MAIN)
				{
					stream << ".MAIN.";
				}
				else if ( m_enum == IfcReinforcingBarTypeEnumEnum::ENUM_PUNCHING)
				{
					stream << ".PUNCHING.";
				}
				else if ( m_enum == IfcReinforcingBarTypeEnumEnum::ENUM_RING)
				{
					stream << ".RING.";
				}
				else if ( m_enum == IfcReinforcingBarTypeEnumEnum::ENUM_SHEAR)
				{
					stream << ".SHEAR.";
				}
				else if ( m_enum == IfcReinforcingBarTypeEnumEnum::ENUM_STUD)
				{
					stream << ".STUD.";
				}
				else if ( m_enum == IfcReinforcingBarTypeEnumEnum::ENUM_USERDEFINED)
				{
					stream << ".USERDEFINED.";
				}
				else if ( m_enum == IfcReinforcingBarTypeEnumEnum::ENUM_NOTDEFINED)
				{
					stream << ".NOTDEFINED.";
				}
				if (is_select_type) { stream << ")"; }
			}
			std::shared_ptr<IfcReinforcingBarTypeEnum> IfcReinforcingBarTypeEnum::readStepData(const std::string& arg)
			{
				if( arg.compare( "$" ) == 0 ) { return std::shared_ptr<IfcReinforcingBarTypeEnum>(); }
				std::shared_ptr<IfcReinforcingBarTypeEnum> type_object(new IfcReinforcingBarTypeEnum() );
				if ( _stricmp( arg.c_str(), ".ANCHORING.") == 0)
				{
					type_object->m_enum = IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum::ENUM_ANCHORING;
				}
				else if ( _stricmp( arg.c_str(), ".EDGE.") == 0)
				{
					type_object->m_enum = IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum::ENUM_EDGE;
				}
				else if ( _stricmp( arg.c_str(), ".LIGATURE.") == 0)
				{
					type_object->m_enum = IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum::ENUM_LIGATURE;
				}
				else if ( _stricmp( arg.c_str(), ".MAIN.") == 0)
				{
					type_object->m_enum = IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum::ENUM_MAIN;
				}
				else if ( _stricmp( arg.c_str(), ".PUNCHING.") == 0)
				{
					type_object->m_enum = IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum::ENUM_PUNCHING;
				}
				else if ( _stricmp( arg.c_str(), ".RING.") == 0)
				{
					type_object->m_enum = IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum::ENUM_RING;
				}
				else if ( _stricmp( arg.c_str(), ".SHEAR.") == 0)
				{
					type_object->m_enum = IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum::ENUM_SHEAR;
				}
				else if ( _stricmp( arg.c_str(), ".STUD.") == 0)
				{
					type_object->m_enum = IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum::ENUM_STUD;
				}
				else if ( _stricmp( arg.c_str(), ".USERDEFINED.") == 0)
				{
					type_object->m_enum = IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum::ENUM_USERDEFINED;
				}
				else if ( _stricmp( arg.c_str(), ".NOTDEFINED.") == 0)
				{
					type_object->m_enum = IfcReinforcingBarTypeEnum::IfcReinforcingBarTypeEnumEnum::ENUM_NOTDEFINED;
				}
				return type_object;
			}
	} // end namespace IfcAlignment1x1
} // end namespace OpenInfraPlatform
