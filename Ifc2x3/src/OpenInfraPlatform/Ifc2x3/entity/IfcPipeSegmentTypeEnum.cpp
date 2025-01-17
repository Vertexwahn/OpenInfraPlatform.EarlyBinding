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
#include "include/IfcPipeSegmentTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// TYPE IfcPipeSegmentTypeEnum 
		IfcPipeSegmentTypeEnum::IfcPipeSegmentTypeEnum() {}
		IfcPipeSegmentTypeEnum::~IfcPipeSegmentTypeEnum() {}
		void IfcPipeSegmentTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCPIPESEGMENTTYPEENUM("; }
			if( m_enum == ENUM_FLEXIBLESEGMENT )
			{
				stream << ".FLEXIBLESEGMENT.";
			}
			else if( m_enum == ENUM_RIGIDSEGMENT )
			{
				stream << ".RIGIDSEGMENT.";
			}
			else if( m_enum == ENUM_GUTTER )
			{
				stream << ".GUTTER.";
			}
			else if( m_enum == ENUM_SPOOL )
			{
				stream << ".SPOOL.";
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
		shared_ptr<IfcPipeSegmentTypeEnum> IfcPipeSegmentTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcPipeSegmentTypeEnum>(); }
			shared_ptr<IfcPipeSegmentTypeEnum> type_object( new IfcPipeSegmentTypeEnum() );
			if( _stricmp( arg.c_str(), ".FLEXIBLESEGMENT." ) == 0 )
			{
				type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_FLEXIBLESEGMENT;
			}
			else if( _stricmp( arg.c_str(), ".RIGIDSEGMENT." ) == 0 )
			{
				type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_RIGIDSEGMENT;
			}
			else if( _stricmp( arg.c_str(), ".GUTTER." ) == 0 )
			{
				type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_GUTTER;
			}
			else if( _stricmp( arg.c_str(), ".SPOOL." ) == 0 )
			{
				type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_SPOOL;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcPipeSegmentTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
