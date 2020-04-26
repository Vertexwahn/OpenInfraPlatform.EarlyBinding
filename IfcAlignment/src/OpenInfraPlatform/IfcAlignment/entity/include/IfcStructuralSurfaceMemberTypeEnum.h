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
		// TYPE IfcStructuralSurfaceMemberTypeEnum = ENUMERATION OF	(BENDING_ELEMENT	,MEMBRANE_ELEMENT	,SHELL	,USERDEFINED	,NOTDEFINED);
		class IfcStructuralSurfaceMemberTypeEnum : public IfcAlignmentP6AbstractEnum, public IfcAlignmentP6Type
		{
		public:
			enum IfcStructuralSurfaceMemberTypeEnumEnum
			{
				ENUM_BENDING_ELEMENT,
				ENUM_MEMBRANE_ELEMENT,
				ENUM_SHELL,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcStructuralSurfaceMemberTypeEnum();
			IfcStructuralSurfaceMemberTypeEnum( IfcStructuralSurfaceMemberTypeEnumEnum e ) { m_enum = e; }
			~IfcStructuralSurfaceMemberTypeEnum();
			virtual const char* classname() const { return "IfcStructuralSurfaceMemberTypeEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcStructuralSurfaceMemberTypeEnum> readStepData( std::string& arg );
			IfcStructuralSurfaceMemberTypeEnumEnum m_enum;
		};
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
