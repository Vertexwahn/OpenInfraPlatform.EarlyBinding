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
#include <memory>
#include <sstream>
#include <string>
#include <visit_struct/visit_struct.hpp>
#include "OpenInfraPlatform/IfcAlignment1x1/model/Object.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		// TYPE IfcWindowTypePartitioningEnum = ENUMERATION OF(SINGLE_PANELDOUBLE_PANEL_VERTICALDOUBLE_PANEL_HORIZONTALTRIPLE_PANEL_VERTICALTRIPLE_PANEL_BOTTOMTRIPLE_PANEL_TOPTRIPLE_PANEL_LEFTTRIPLE_PANEL_RIGHTTRIPLE_PANEL_HORIZONTALUSERDEFINEDNOTDEFINED;
		class IfcWindowTypePartitioningEnum : public IfcAlignment1x1Type, public IfcAlignment1x1AbstractEnum
		{
		public:
			enum IfcWindowTypePartitioningEnumEnum
			{
				 ENUM_SINGLE_PANEL,
				 ENUM_DOUBLE_PANEL_VERTICAL,
				 ENUM_DOUBLE_PANEL_HORIZONTAL,
				 ENUM_TRIPLE_PANEL_VERTICAL,
				 ENUM_TRIPLE_PANEL_BOTTOM,
				 ENUM_TRIPLE_PANEL_TOP,
				 ENUM_TRIPLE_PANEL_LEFT,
				 ENUM_TRIPLE_PANEL_RIGHT,
				 ENUM_TRIPLE_PANEL_HORIZONTAL,
				 ENUM_USERDEFINED,
				 ENUM_NOTDEFINED
			};

			IfcWindowTypePartitioningEnum();
			IfcWindowTypePartitioningEnum(IfcWindowTypePartitioningEnumEnum value);
			virtual ~IfcWindowTypePartitioningEnum();
			virtual const char* classname() const { return "IfcWindowTypePartitioningEnum"; }
			virtual void getStepParameter(std::stringstream& stream, bool is_select_type = false) const;
			static std::shared_ptr<IfcWindowTypePartitioningEnum> readStepData(const std::string& arg);
			IfcWindowTypePartitioningEnumEnum m_enum;
		}; // end class IfcWindowTypePartitioningEnum
	} // end namespace IfcAlignment1x1
} // end namespace OpenInfraPlatform

VISITABLE_STRUCT(OpenInfraPlatform::IfcAlignment1x1::IfcWindowTypePartitioningEnum, m_enum);
