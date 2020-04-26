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

#include "IfcInventoryTypeEnum.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		IfcInventoryTypeEnum::IfcInventoryTypeEnum() {}
		IfcInventoryTypeEnum::IfcInventoryTypeEnum(IfcInventoryTypeEnum::IfcInventoryTypeEnumEnum value) { m_enum = value; }
		IfcInventoryTypeEnum::~IfcInventoryTypeEnum() {}
		void IfcInventoryTypeEnum::getStepParameter(std::stringstream& stream, bool is_select_type) const
			{
				if ( m_enum == IfcInventoryTypeEnumEnum::ENUM_ASSETINVENTORY)
				{
					stream << ".ASSETINVENTORY.";
				}
				else if ( m_enum == IfcInventoryTypeEnumEnum::ENUM_SPACEINVENTORY)
				{
					stream << ".SPACEINVENTORY.";
				}
				else if ( m_enum == IfcInventoryTypeEnumEnum::ENUM_FURNITUREINVENTORY)
				{
					stream << ".FURNITUREINVENTORY.";
				}
				else if ( m_enum == IfcInventoryTypeEnumEnum::ENUM_USERDEFINED)
				{
					stream << ".USERDEFINED.";
				}
				else if ( m_enum == IfcInventoryTypeEnumEnum::ENUM_NOTDEFINED)
				{
					stream << ".NOTDEFINED.";
				}
				if (is_select_type) { stream << ")"; }
			}
			std::shared_ptr<IfcInventoryTypeEnum> IfcInventoryTypeEnum::readStepData(const std::string& arg)
			{
				if( arg.compare( "$" ) == 0 ) { return std::shared_ptr<IfcInventoryTypeEnum>(); }
				std::shared_ptr<IfcInventoryTypeEnum> type_object(new IfcInventoryTypeEnum() );
				if ( _stricmp( arg.c_str(), ".ASSETINVENTORY.") == 0)
				{
					type_object->m_enum = IfcInventoryTypeEnum::IfcInventoryTypeEnumEnum::ENUM_ASSETINVENTORY;
				}
				else if ( _stricmp( arg.c_str(), ".SPACEINVENTORY.") == 0)
				{
					type_object->m_enum = IfcInventoryTypeEnum::IfcInventoryTypeEnumEnum::ENUM_SPACEINVENTORY;
				}
				else if ( _stricmp( arg.c_str(), ".FURNITUREINVENTORY.") == 0)
				{
					type_object->m_enum = IfcInventoryTypeEnum::IfcInventoryTypeEnumEnum::ENUM_FURNITUREINVENTORY;
				}
				else if ( _stricmp( arg.c_str(), ".USERDEFINED.") == 0)
				{
					type_object->m_enum = IfcInventoryTypeEnum::IfcInventoryTypeEnumEnum::ENUM_USERDEFINED;
				}
				else if ( _stricmp( arg.c_str(), ".NOTDEFINED.") == 0)
				{
					type_object->m_enum = IfcInventoryTypeEnum::IfcInventoryTypeEnumEnum::ENUM_NOTDEFINED;
				}
				return type_object;
			}
	} // end namespace IfcAlignment1x1
} // end namespace OpenInfraPlatform
