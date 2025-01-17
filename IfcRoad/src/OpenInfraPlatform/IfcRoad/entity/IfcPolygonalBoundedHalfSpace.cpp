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
#include "include/IfcAxis2Placement3D.h"
#include "include/IfcBoolean.h"
#include "include/IfcBoundedCurve.h"
#include "include/IfcPolygonalBoundedHalfSpace.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"
#include "include/IfcSurface.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcPolygonalBoundedHalfSpace 
		IfcPolygonalBoundedHalfSpace::IfcPolygonalBoundedHalfSpace() { m_entity_enum = IFCPOLYGONALBOUNDEDHALFSPACE; }
		IfcPolygonalBoundedHalfSpace::IfcPolygonalBoundedHalfSpace( int id ) { m_id = id; m_entity_enum = IFCPOLYGONALBOUNDEDHALFSPACE; }
		IfcPolygonalBoundedHalfSpace::~IfcPolygonalBoundedHalfSpace() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcPolygonalBoundedHalfSpace::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcPolygonalBoundedHalfSpace> other = dynamic_pointer_cast<IfcPolygonalBoundedHalfSpace>(other_entity);
			if( !other) { return; }
			m_BaseSurface = other->m_BaseSurface;
			m_AgreementFlag = other->m_AgreementFlag;
			m_Position = other->m_Position;
			m_PolygonalBoundary = other->m_PolygonalBoundary;
		}
		void IfcPolygonalBoundedHalfSpace::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCPOLYGONALBOUNDEDHALFSPACE" << "(";
			if( m_BaseSurface ) { stream << "#" << m_BaseSurface->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_AgreementFlag ) { m_AgreementFlag->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Position ) { stream << "#" << m_Position->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_PolygonalBoundary ) { stream << "#" << m_PolygonalBoundary->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcPolygonalBoundedHalfSpace::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcPolygonalBoundedHalfSpace::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcPolygonalBoundedHalfSpace, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>4 ){ std::cout << "Wrong parameter count for entity IfcPolygonalBoundedHalfSpace, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_BaseSurface, map );
			m_AgreementFlag = IfcBoolean::readStepData( args[1] );
			readEntityReference( args[2], m_Position, map );
			readEntityReference( args[3], m_PolygonalBoundary, map );
		}
		void IfcPolygonalBoundedHalfSpace::setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self_entity )
		{
			IfcHalfSpaceSolid::setInverseCounterparts( ptr_self_entity );
		}
		void IfcPolygonalBoundedHalfSpace::unlinkSelf()
		{
			IfcHalfSpaceSolid::unlinkSelf();
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
