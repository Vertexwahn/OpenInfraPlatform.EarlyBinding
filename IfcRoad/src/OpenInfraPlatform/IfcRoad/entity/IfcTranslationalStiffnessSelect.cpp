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
#include "OpenInfraPlatform/IfcRoad/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcRoad/model/IfcRoadException.h"
#include "OpenInfraPlatform/IfcRoad/reader/ReaderUtil.h"
#include "include/IfcBoolean.h"
#include "include/IfcLinearStiffnessMeasure.h"
#include "include/IfcTranslationalStiffnessSelect.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// TYPE IfcTranslationalStiffnessSelect 
		IfcTranslationalStiffnessSelect::IfcTranslationalStiffnessSelect() {}
		IfcTranslationalStiffnessSelect::~IfcTranslationalStiffnessSelect() {}
		shared_ptr<IfcTranslationalStiffnessSelect> IfcTranslationalStiffnessSelect::readStepData( std::string& arg, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			// Read SELECT TYPE
			if( arg.size() == 0 ){ return shared_ptr<IfcTranslationalStiffnessSelect>(); }
			if( arg[0] == '#' )
			{
				int id=atoi( arg.substr(1,arg.length()-1).c_str() );
				std::map<int,shared_ptr<IfcRoadEntity> >::const_iterator it_entity = map.find( id );
				if( it_entity != map.end() )
				{
					shared_ptr<IfcTranslationalStiffnessSelect> type_object = dynamic_pointer_cast<IfcTranslationalStiffnessSelect>(it_entity->second);
					return type_object;
				}
				else
				{
					std::stringstream strs;
					strs << "Object width id " << id << " not found";
					throw IfcRoadException( strs.str() );
				}
			}
			else if( arg.compare("$")==0 )
			{
				return shared_ptr<IfcTranslationalStiffnessSelect>();
			}
			else if( arg.compare("*")==0 )
			{
				return shared_ptr<IfcTranslationalStiffnessSelect>();
			}
			else
			{
				// inline arguments
				std::string keyword;
				std::string inline_arg;
				tokenizeInlineArgument( arg, keyword, inline_arg );
				if( keyword.compare("IFCBOOLEAN")== 0 )
				{
					return IfcBoolean::readStepData( inline_arg );
				}
				else if( keyword.compare("IFCLINEARSTIFFNESSMEASURE")== 0 )
				{
					return IfcLinearStiffnessMeasure::readStepData( inline_arg );
				}
				std::stringstream strs;
				strs << "unhandled inline argument: " << arg << " in function IFC4::IfcTranslationalStiffnessSelect::readStepData" << std::endl;
				throw IfcRoadException( strs.str() );
			}
			return shared_ptr<IfcTranslationalStiffnessSelect>();
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
