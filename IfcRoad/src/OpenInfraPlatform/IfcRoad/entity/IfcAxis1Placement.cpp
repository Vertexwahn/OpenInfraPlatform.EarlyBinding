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
#include "include/IfcAxis1Placement.h"
#include "include/IfcCartesianPoint.h"
#include "include/IfcDirection.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcAxis1Placement 
		IfcAxis1Placement::IfcAxis1Placement() { m_entity_enum = IFCAXIS1PLACEMENT; }
		IfcAxis1Placement::IfcAxis1Placement( int id ) { m_id = id; m_entity_enum = IFCAXIS1PLACEMENT; }
		IfcAxis1Placement::~IfcAxis1Placement() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcAxis1Placement::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcAxis1Placement> other = dynamic_pointer_cast<IfcAxis1Placement>(other_entity);
			if( !other) { return; }
			m_Location = other->m_Location;
			m_Axis = other->m_Axis;
		}
		void IfcAxis1Placement::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCAXIS1PLACEMENT" << "(";
			if( m_Location ) { stream << "#" << m_Location->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Axis ) { stream << "#" << m_Axis->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcAxis1Placement::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcAxis1Placement::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<2 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcAxis1Placement, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>2 ){ std::cout << "Wrong parameter count for entity IfcAxis1Placement, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_Location, map );
			readEntityReference( args[1], m_Axis, map );
		}
		void IfcAxis1Placement::setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self_entity )
		{
			IfcPlacement::setInverseCounterparts( ptr_self_entity );
		}
		void IfcAxis1Placement::unlinkSelf()
		{
			IfcPlacement::unlinkSelf();
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
