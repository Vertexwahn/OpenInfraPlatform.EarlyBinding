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
#include "include/IfcAxis2Placement3D.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcProfileDef.h"
#include "include/IfcStyledItem.h"
#include "include/IfcSweptSurface.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcSweptSurface 
		IfcSweptSurface::IfcSweptSurface() { m_entity_enum = IFCSWEPTSURFACE; }
		IfcSweptSurface::IfcSweptSurface( int id ) { m_id = id; m_entity_enum = IFCSWEPTSURFACE; }
		IfcSweptSurface::~IfcSweptSurface() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcSweptSurface::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcSweptSurface> other = dynamic_pointer_cast<IfcSweptSurface>(other_entity);
			if( !other) { return; }
			m_SweptCurve = other->m_SweptCurve;
			m_Position = other->m_Position;
		}
		void IfcSweptSurface::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCSWEPTSURFACE" << "(";
			if( m_SweptCurve ) { stream << "#" << m_SweptCurve->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Position ) { stream << "#" << m_Position->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcSweptSurface::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcSweptSurface::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<2 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcSweptSurface, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>2 ){ std::cout << "Wrong parameter count for entity IfcSweptSurface, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_SweptCurve, map );
			readEntityReference( args[1], m_Position, map );
		}
		void IfcSweptSurface::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			IfcSurface::setInverseCounterparts( ptr_self_entity );
		}
		void IfcSweptSurface::unlinkSelf()
		{
			IfcSurface::unlinkSelf();
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
