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
#include "../../model/Ifc2x3Object.h"
#include "IfcPresentationStyleSelect.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// TYPE IfcNullStyle = ENUMERATION OF	(NULL);
		class IfcNullStyle : public IfcPresentationStyleSelect, public Ifc2x3Type
		{
		public:
			enum IfcNullStyleEnum
			{
				ENUM_ENUM_NULL
			};

			IfcNullStyle();
			IfcNullStyle( IfcNullStyleEnum e ) { m_enum = e; }
			~IfcNullStyle();
			virtual const char* classname() const { return "IfcNullStyle"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcNullStyle> readStepData( std::string& arg );
			IfcNullStyleEnum m_enum;
		};
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform

