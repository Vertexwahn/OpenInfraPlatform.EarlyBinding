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
#include "OpenInfraPlatform/Ifc4/model/shared_ptr.h"
#include "OpenInfraPlatform/Ifc4/model/Ifc4Object.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// TYPE IfcAirTerminalTypeEnum = ENUMERATION OF	(DIFFUSER	,GRILLE	,LOUVRE	,REGISTER	,USERDEFINED	,NOTDEFINED);
		class IfcAirTerminalTypeEnum : public Ifc4AbstractEnum, public Ifc4Type
		{
		public:
			enum IfcAirTerminalTypeEnumEnum
			{
				ENUM_DIFFUSER,
				ENUM_GRILLE,
				ENUM_LOUVRE,
				ENUM_REGISTER,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcAirTerminalTypeEnum();
			IfcAirTerminalTypeEnum( IfcAirTerminalTypeEnumEnum e ) { m_enum = e; }
			~IfcAirTerminalTypeEnum();
			virtual const char* classname() const { return "IfcAirTerminalTypeEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcAirTerminalTypeEnum> readStepData( std::string& arg );
			IfcAirTerminalTypeEnumEnum m_enum;
		};
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform

