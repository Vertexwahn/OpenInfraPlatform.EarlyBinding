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

#include "IfcActionRequestTypeEnum.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		IfcActionRequestTypeEnum::IfcActionRequestTypeEnum() {}
		IfcActionRequestTypeEnum::IfcActionRequestTypeEnum(IfcActionRequestTypeEnum::IfcActionRequestTypeEnumEnum value) { m_enum = value; }
		IfcActionRequestTypeEnum::~IfcActionRequestTypeEnum() {}
		void IfcActionRequestTypeEnum::getStepParameter(std::stringstream& stream, bool is_select_type) const
			{
				if ( m_enum == IfcActionRequestTypeEnumEnum::ENUM_EMAIL)
				{
					stream << ".EMAIL.";
				}
				else if ( m_enum == IfcActionRequestTypeEnumEnum::ENUM_FAX)
				{
					stream << ".FAX.";
				}
				else if ( m_enum == IfcActionRequestTypeEnumEnum::ENUM_PHONE)
				{
					stream << ".PHONE.";
				}
				else if ( m_enum == IfcActionRequestTypeEnumEnum::ENUM_POST)
				{
					stream << ".POST.";
				}
				else if ( m_enum == IfcActionRequestTypeEnumEnum::ENUM_VERBAL)
				{
					stream << ".VERBAL.";
				}
				else if ( m_enum == IfcActionRequestTypeEnumEnum::ENUM_USERDEFINED)
				{
					stream << ".USERDEFINED.";
				}
				else if ( m_enum == IfcActionRequestTypeEnumEnum::ENUM_NOTDEFINED)
				{
					stream << ".NOTDEFINED.";
				}
				if (is_select_type) { stream << ")"; }
			}
			std::shared_ptr<IfcActionRequestTypeEnum> IfcActionRequestTypeEnum::readStepData(const std::string& arg)
			{
				if( arg.compare( "$" ) == 0 ) { return std::shared_ptr<IfcActionRequestTypeEnum>(); }
				std::shared_ptr<IfcActionRequestTypeEnum> type_object(new IfcActionRequestTypeEnum() );
				if ( _stricmp( arg.c_str(), ".EMAIL.") == 0)
				{
					type_object->m_enum = IfcActionRequestTypeEnum::IfcActionRequestTypeEnumEnum::ENUM_EMAIL;
				}
				else if ( _stricmp( arg.c_str(), ".FAX.") == 0)
				{
					type_object->m_enum = IfcActionRequestTypeEnum::IfcActionRequestTypeEnumEnum::ENUM_FAX;
				}
				else if ( _stricmp( arg.c_str(), ".PHONE.") == 0)
				{
					type_object->m_enum = IfcActionRequestTypeEnum::IfcActionRequestTypeEnumEnum::ENUM_PHONE;
				}
				else if ( _stricmp( arg.c_str(), ".POST.") == 0)
				{
					type_object->m_enum = IfcActionRequestTypeEnum::IfcActionRequestTypeEnumEnum::ENUM_POST;
				}
				else if ( _stricmp( arg.c_str(), ".VERBAL.") == 0)
				{
					type_object->m_enum = IfcActionRequestTypeEnum::IfcActionRequestTypeEnumEnum::ENUM_VERBAL;
				}
				else if ( _stricmp( arg.c_str(), ".USERDEFINED.") == 0)
				{
					type_object->m_enum = IfcActionRequestTypeEnum::IfcActionRequestTypeEnumEnum::ENUM_USERDEFINED;
				}
				else if ( _stricmp( arg.c_str(), ".NOTDEFINED.") == 0)
				{
					type_object->m_enum = IfcActionRequestTypeEnum::IfcActionRequestTypeEnumEnum::ENUM_NOTDEFINED;
				}
				return type_object;
			}
	} // end namespace IfcAlignment1x1
} // end namespace OpenInfraPlatform
