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
#include "include/IfcAdvancedBrepWithVoids.h"
#include "include/IfcClosedShell.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcAdvancedBrepWithVoids 
		IfcAdvancedBrepWithVoids::IfcAdvancedBrepWithVoids() { m_entity_enum = IFCADVANCEDBREPWITHVOIDS; }
		IfcAdvancedBrepWithVoids::IfcAdvancedBrepWithVoids( int id ) { m_id = id; m_entity_enum = IFCADVANCEDBREPWITHVOIDS; }
		IfcAdvancedBrepWithVoids::~IfcAdvancedBrepWithVoids() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcAdvancedBrepWithVoids::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcAdvancedBrepWithVoids> other = dynamic_pointer_cast<IfcAdvancedBrepWithVoids>(other_entity);
			if( !other) { return; }
			m_Outer = other->m_Outer;
			m_Voids = other->m_Voids;
		}
		void IfcAdvancedBrepWithVoids::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCADVANCEDBREPWITHVOIDS" << "(";
			if( m_Outer ) { stream << "#" << m_Outer->getId(); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_Voids );
			stream << ");";
		}
		void IfcAdvancedBrepWithVoids::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcAdvancedBrepWithVoids::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<2 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcAdvancedBrepWithVoids, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>2 ){ std::cout << "Wrong parameter count for entity IfcAdvancedBrepWithVoids, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_Outer, map );
			readEntityReferenceList( args[1], m_Voids, map );
		}
		void IfcAdvancedBrepWithVoids::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			IfcAdvancedBrep::setInverseCounterparts( ptr_self_entity );
		}
		void IfcAdvancedBrepWithVoids::unlinkSelf()
		{
			IfcAdvancedBrep::unlinkSelf();
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
