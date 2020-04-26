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

#include <map>
#include "OpenInfraPlatform/IfcAlignment/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Exception.h"
#include "OpenInfraPlatform/IfcAlignment/reader/ReaderUtil.h"
#include "include/IfcArcIndex.h"
#include "include/IfcLineIndex.h"
#include "include/IfcSegmentIndexSelect.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// TYPE IfcSegmentIndexSelect 
		IfcSegmentIndexSelect::IfcSegmentIndexSelect() {}
		IfcSegmentIndexSelect::~IfcSegmentIndexSelect() {}
		shared_ptr<IfcSegmentIndexSelect> IfcSegmentIndexSelect::readStepData( std::string& arg, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map )
		{
			// Read SELECT TYPE
			if( arg.size() == 0 ){ return shared_ptr<IfcSegmentIndexSelect>(); }
			if( arg[0] == '#' )
			{
				int id=atoi( arg.substr(1,arg.length()-1).c_str() );
				std::map<int,shared_ptr<IfcAlignmentP6Entity> >::const_iterator it_entity = map.find( id );
				if( it_entity != map.end() )
				{
					shared_ptr<IfcSegmentIndexSelect> type_object = dynamic_pointer_cast<IfcSegmentIndexSelect>(it_entity->second);
					return type_object;
				}
				else
				{
					std::stringstream strs;
					strs << "Object width id " << id << " not found";
					throw IfcAlignmentP6Exception( strs.str() );
				}
			}
			else if( arg.compare("$")==0 )
			{
				return shared_ptr<IfcSegmentIndexSelect>();
			}
			else if( arg.compare("*")==0 )
			{
				return shared_ptr<IfcSegmentIndexSelect>();
			}
			else
			{
				// inline arguments
				std::string keyword;
				std::string inline_arg;
				tokenizeInlineArgument( arg, keyword, inline_arg );
				if( keyword.compare("IFCARCINDEX")== 0 )
				{
					return IfcArcIndex::readStepData( inline_arg );
				}
				else if( keyword.compare("IFCLINEINDEX")== 0 )
				{
					return IfcLineIndex::readStepData( inline_arg );
				}
				std::stringstream strs;
				strs << "unhandled inline argument: " << arg << " in function IFC4::IfcSegmentIndexSelect::readStepData" << std::endl;
				throw IfcAlignmentP6Exception( strs.str() );
			}
			return shared_ptr<IfcSegmentIndexSelect>();
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
