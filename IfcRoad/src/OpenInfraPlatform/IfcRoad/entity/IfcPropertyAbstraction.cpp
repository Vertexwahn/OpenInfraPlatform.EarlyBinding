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

#include "OpenInfraPlatform/IfcRoad/model/IfcRoadException.h"
#include "OpenInfraPlatform/IfcRoad/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcRoad/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcRoad/IfcRoadEntityEnums.h"
#include "include/IfcExternalReferenceRelationship.h"
#include "include/IfcPropertyAbstraction.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcPropertyAbstraction 
		IfcPropertyAbstraction::IfcPropertyAbstraction() { m_entity_enum = IFCPROPERTYABSTRACTION; }
		IfcPropertyAbstraction::IfcPropertyAbstraction( int id ) { m_id = id; m_entity_enum = IFCPROPERTYABSTRACTION; }
		IfcPropertyAbstraction::~IfcPropertyAbstraction() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcPropertyAbstraction::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcPropertyAbstraction> other = dynamic_pointer_cast<IfcPropertyAbstraction>(other_entity);
			if( !other) { return; }
		}
		void IfcPropertyAbstraction::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCPROPERTYABSTRACTION" << "(";
			stream << ");";
		}
		void IfcPropertyAbstraction::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcPropertyAbstraction::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
		}
		void IfcPropertyAbstraction::setInverseCounterparts( shared_ptr<IfcRoadEntity> )
		{
		}
		void IfcPropertyAbstraction::unlinkSelf()
		{
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
