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

#include "model/Ifc2x3Exception.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "Ifc2x3EntityEnums.h"
#include "include/IfcParameterValue.h"
#include "include/IfcPointOnSurface.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"
#include "include/IfcSurface.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcPointOnSurface 
		IfcPointOnSurface::IfcPointOnSurface() { m_entity_enum = IFCPOINTONSURFACE; }
		IfcPointOnSurface::IfcPointOnSurface( int id ) { m_id = id; m_entity_enum = IFCPOINTONSURFACE; }
		IfcPointOnSurface::~IfcPointOnSurface() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcPointOnSurface::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcPointOnSurface> other = dynamic_pointer_cast<IfcPointOnSurface>(other_entity);
			if( !other) { return; }
			m_BasisSurface = other->m_BasisSurface;
			m_PointParameterU = other->m_PointParameterU;
			m_PointParameterV = other->m_PointParameterV;
		}
		void IfcPointOnSurface::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCPOINTONSURFACE" << "(";
			if( m_BasisSurface ) { stream << "#" << m_BasisSurface->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_PointParameterU ) { m_PointParameterU->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_PointParameterV ) { m_PointParameterV->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcPointOnSurface::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcPointOnSurface::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcPointOnSurface, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcPointOnSurface, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_BasisSurface, map );
			m_PointParameterU = IfcParameterValue::readStepData( args[1] );
			m_PointParameterV = IfcParameterValue::readStepData( args[2] );
		}
		void IfcPointOnSurface::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcPoint::setInverseCounterparts( ptr_self_entity );
		}
		void IfcPointOnSurface::unlinkSelf()
		{
			IfcPoint::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
