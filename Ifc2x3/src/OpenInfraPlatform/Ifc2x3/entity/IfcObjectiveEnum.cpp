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
#include "include/IfcObjectiveEnum.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// TYPE IfcObjectiveEnum 
		IfcObjectiveEnum::IfcObjectiveEnum() {}
		IfcObjectiveEnum::~IfcObjectiveEnum() {}
		void IfcObjectiveEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCOBJECTIVEENUM("; }
			if( m_enum == ENUM_CODECOMPLIANCE )
			{
				stream << ".CODECOMPLIANCE.";
			}
			else if( m_enum == ENUM_DESIGNINTENT )
			{
				stream << ".DESIGNINTENT.";
			}
			else if( m_enum == ENUM_HEALTHANDSAFETY )
			{
				stream << ".HEALTHANDSAFETY.";
			}
			else if( m_enum == ENUM_REQUIREMENT )
			{
				stream << ".REQUIREMENT.";
			}
			else if( m_enum == ENUM_SPECIFICATION )
			{
				stream << ".SPECIFICATION.";
			}
			else if( m_enum == ENUM_TRIGGERCONDITION )
			{
				stream << ".TRIGGERCONDITION.";
			}
			else if( m_enum == ENUM_USERDEFINED )
			{
				stream << ".USERDEFINED.";
			}
			else if( m_enum == ENUM_NOTDEFINED )
			{
				stream << ".NOTDEFINED.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcObjectiveEnum> IfcObjectiveEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcObjectiveEnum>(); }
			shared_ptr<IfcObjectiveEnum> type_object( new IfcObjectiveEnum() );
			if( _stricmp( arg.c_str(), ".CODECOMPLIANCE." ) == 0 )
			{
				type_object->m_enum = IfcObjectiveEnum::ENUM_CODECOMPLIANCE;
			}
			else if( _stricmp( arg.c_str(), ".DESIGNINTENT." ) == 0 )
			{
				type_object->m_enum = IfcObjectiveEnum::ENUM_DESIGNINTENT;
			}
			else if( _stricmp( arg.c_str(), ".HEALTHANDSAFETY." ) == 0 )
			{
				type_object->m_enum = IfcObjectiveEnum::ENUM_HEALTHANDSAFETY;
			}
			else if( _stricmp( arg.c_str(), ".REQUIREMENT." ) == 0 )
			{
				type_object->m_enum = IfcObjectiveEnum::ENUM_REQUIREMENT;
			}
			else if( _stricmp( arg.c_str(), ".SPECIFICATION." ) == 0 )
			{
				type_object->m_enum = IfcObjectiveEnum::ENUM_SPECIFICATION;
			}
			else if( _stricmp( arg.c_str(), ".TRIGGERCONDITION." ) == 0 )
			{
				type_object->m_enum = IfcObjectiveEnum::ENUM_TRIGGERCONDITION;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcObjectiveEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcObjectiveEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
