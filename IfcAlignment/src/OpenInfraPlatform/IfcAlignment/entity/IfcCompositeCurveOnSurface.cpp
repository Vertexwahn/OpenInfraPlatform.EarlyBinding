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

#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Exception.h"
#include "OpenInfraPlatform/IfcAlignment/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment/IfcAlignmentP6EntityEnums.h"
#include "include/IfcCompositeCurveOnSurface.h"
#include "include/IfcCompositeCurveSegment.h"
#include "include/IfcLogical.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// ENTITY IfcCompositeCurveOnSurface 
		IfcCompositeCurveOnSurface::IfcCompositeCurveOnSurface() { m_entity_enum = IFCCOMPOSITECURVEONSURFACE; }
		IfcCompositeCurveOnSurface::IfcCompositeCurveOnSurface( int id ) { m_id = id; m_entity_enum = IFCCOMPOSITECURVEONSURFACE; }
		IfcCompositeCurveOnSurface::~IfcCompositeCurveOnSurface() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcCompositeCurveOnSurface::setEntity( shared_ptr<IfcAlignmentP6Entity> other_entity )
		{
			shared_ptr<IfcCompositeCurveOnSurface> other = dynamic_pointer_cast<IfcCompositeCurveOnSurface>(other_entity);
			if( !other) { return; }
			m_Segments = other->m_Segments;
			m_SelfIntersect = other->m_SelfIntersect;
		}
		void IfcCompositeCurveOnSurface::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCOMPOSITECURVEONSURFACE" << "(";
			writeEntityList( stream, m_Segments );
			stream << ",";
			if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcCompositeCurveOnSurface::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcCompositeCurveOnSurface::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<2 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcCompositeCurveOnSurface, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignmentP6Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>2 ){ std::cout << "Wrong parameter count for entity IfcCompositeCurveOnSurface, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReferenceList( args[0], m_Segments, map );
			m_SelfIntersect = IfcLogical::readStepData( args[1] );
		}
		void IfcCompositeCurveOnSurface::setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self_entity )
		{
			IfcCompositeCurve::setInverseCounterparts( ptr_self_entity );
		}
		void IfcCompositeCurveOnSurface::unlinkSelf()
		{
			IfcCompositeCurve::unlinkSelf();
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
