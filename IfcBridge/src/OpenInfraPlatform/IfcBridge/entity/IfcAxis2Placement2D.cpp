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

#include "model/IfcBridgeException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcBridgeEntityEnums.h"
#include "include/IfcAxis2Placement2D.h"
#include "include/IfcCartesianPoint.h"
#include "include/IfcDirection.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcAxis2Placement2D 
		IfcAxis2Placement2D::IfcAxis2Placement2D() { m_entity_enum = IFCAXIS2PLACEMENT2D; }
		IfcAxis2Placement2D::IfcAxis2Placement2D( int id ) { m_id = id; m_entity_enum = IFCAXIS2PLACEMENT2D; }
		IfcAxis2Placement2D::~IfcAxis2Placement2D() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcAxis2Placement2D::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcAxis2Placement2D> other = dynamic_pointer_cast<IfcAxis2Placement2D>(other_entity);
			if( !other) { return; }
			m_Location = other->m_Location;
			m_RefDirection = other->m_RefDirection;
		}
		void IfcAxis2Placement2D::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCAXIS2PLACEMENT2D" << "(";
			if( m_Location ) { stream << "#" << m_Location->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_RefDirection ) { stream << "#" << m_RefDirection->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcAxis2Placement2D::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcAxis2Placement2D::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<2 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcAxis2Placement2D, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>2 ){ std::cout << "Wrong parameter count for entity IfcAxis2Placement2D, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_Location, map );
			readEntityReference( args[1], m_RefDirection, map );
		}
		void IfcAxis2Placement2D::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			IfcPlacement::setInverseCounterparts( ptr_self_entity );
		}
		void IfcAxis2Placement2D::unlinkSelf()
		{
			IfcPlacement::unlinkSelf();
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
