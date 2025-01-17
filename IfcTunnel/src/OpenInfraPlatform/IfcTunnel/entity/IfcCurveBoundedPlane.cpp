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

#include "model/IfcTunnelException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcTunnelEntityEnums.h"
#include "include/IfcCurve.h"
#include "include/IfcCurveBoundedPlane.h"
#include "include/IfcPlane.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// ENTITY IfcCurveBoundedPlane 
		IfcCurveBoundedPlane::IfcCurveBoundedPlane() { m_entity_enum = IFCCURVEBOUNDEDPLANE; }
		IfcCurveBoundedPlane::IfcCurveBoundedPlane( int id ) { m_id = id; m_entity_enum = IFCCURVEBOUNDEDPLANE; }
		IfcCurveBoundedPlane::~IfcCurveBoundedPlane() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcCurveBoundedPlane::setEntity( shared_ptr<IfcTunnelEntity> other_entity )
		{
			shared_ptr<IfcCurveBoundedPlane> other = dynamic_pointer_cast<IfcCurveBoundedPlane>(other_entity);
			if( !other) { return; }
			m_BasisSurface = other->m_BasisSurface;
			m_OuterBoundary = other->m_OuterBoundary;
			m_InnerBoundaries = other->m_InnerBoundaries;
		}
		void IfcCurveBoundedPlane::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCURVEBOUNDEDPLANE" << "(";
			if( m_BasisSurface ) { stream << "#" << m_BasisSurface->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_OuterBoundary ) { stream << "#" << m_OuterBoundary->getId(); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_InnerBoundaries );
			stream << ");";
		}
		void IfcCurveBoundedPlane::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcCurveBoundedPlane::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcCurveBoundedPlane, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcTunnelException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcCurveBoundedPlane, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_BasisSurface, map );
			readEntityReference( args[1], m_OuterBoundary, map );
			readEntityReferenceList( args[2], m_InnerBoundaries, map );
		}
		void IfcCurveBoundedPlane::setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self_entity )
		{
			IfcBoundedSurface::setInverseCounterparts( ptr_self_entity );
		}
		void IfcCurveBoundedPlane::unlinkSelf()
		{
			IfcBoundedSurface::unlinkSelf();
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
