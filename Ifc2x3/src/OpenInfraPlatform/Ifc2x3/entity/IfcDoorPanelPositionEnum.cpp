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

#include <sstream>
#include <limits>
#include <map>
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "../model/shared_ptr.h"
#include "../model/Ifc2x3Exception.h"
#include "include/IfcDoorPanelPositionEnum.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// TYPE IfcDoorPanelPositionEnum 
		IfcDoorPanelPositionEnum::IfcDoorPanelPositionEnum() {}
		IfcDoorPanelPositionEnum::~IfcDoorPanelPositionEnum() {}
		void IfcDoorPanelPositionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCDOORPANELPOSITIONENUM("; }
			if( m_enum == ENUM_LEFT )
			{
				stream << ".LEFT.";
			}
			else if( m_enum == ENUM_MIDDLE )
			{
				stream << ".MIDDLE.";
			}
			else if( m_enum == ENUM_RIGHT )
			{
				stream << ".RIGHT.";
			}
			else if( m_enum == ENUM_NOTDEFINED )
			{
				stream << ".NOTDEFINED.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcDoorPanelPositionEnum> IfcDoorPanelPositionEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcDoorPanelPositionEnum>(); }
			shared_ptr<IfcDoorPanelPositionEnum> type_object( new IfcDoorPanelPositionEnum() );
			if( _stricmp( arg.c_str(), ".LEFT." ) == 0 )
			{
				type_object->m_enum = IfcDoorPanelPositionEnum::ENUM_LEFT;
			}
			else if( _stricmp( arg.c_str(), ".MIDDLE." ) == 0 )
			{
				type_object->m_enum = IfcDoorPanelPositionEnum::ENUM_MIDDLE;
			}
			else if( _stricmp( arg.c_str(), ".RIGHT." ) == 0 )
			{
				type_object->m_enum = IfcDoorPanelPositionEnum::ENUM_RIGHT;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcDoorPanelPositionEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
