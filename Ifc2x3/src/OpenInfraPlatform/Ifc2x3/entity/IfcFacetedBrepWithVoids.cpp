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
#include "include/IfcClosedShell.h"
#include "include/IfcFacetedBrepWithVoids.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcFacetedBrepWithVoids 
		IfcFacetedBrepWithVoids::IfcFacetedBrepWithVoids() { m_entity_enum = IFCFACETEDBREPWITHVOIDS; }
		IfcFacetedBrepWithVoids::IfcFacetedBrepWithVoids( int id ) { m_id = id; m_entity_enum = IFCFACETEDBREPWITHVOIDS; }
		IfcFacetedBrepWithVoids::~IfcFacetedBrepWithVoids() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcFacetedBrepWithVoids::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcFacetedBrepWithVoids> other = dynamic_pointer_cast<IfcFacetedBrepWithVoids>(other_entity);
			if( !other) { return; }
			m_Outer = other->m_Outer;
			m_Voids = other->m_Voids;
		}
		void IfcFacetedBrepWithVoids::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCFACETEDBREPWITHVOIDS" << "(";
			if( m_Outer ) { stream << "#" << m_Outer->getId(); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_Voids );
			stream << ");";
		}
		void IfcFacetedBrepWithVoids::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcFacetedBrepWithVoids::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<2 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcFacetedBrepWithVoids, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>2 ){ std::cout << "Wrong parameter count for entity IfcFacetedBrepWithVoids, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_Outer, map );
			readEntityReferenceList( args[1], m_Voids, map );
		}
		void IfcFacetedBrepWithVoids::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcManifoldSolidBrep::setInverseCounterparts( ptr_self_entity );
		}
		void IfcFacetedBrepWithVoids::unlinkSelf()
		{
			IfcManifoldSolidBrep::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
