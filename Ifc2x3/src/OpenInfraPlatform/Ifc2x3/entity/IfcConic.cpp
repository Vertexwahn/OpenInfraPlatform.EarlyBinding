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
#include "include/IfcAxis2Placement.h"
#include "include/IfcConic.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcConic 
		IfcConic::IfcConic() { m_entity_enum = IFCCONIC; }
		IfcConic::IfcConic( int id ) { m_id = id; m_entity_enum = IFCCONIC; }
		IfcConic::~IfcConic() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcConic::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcConic> other = dynamic_pointer_cast<IfcConic>(other_entity);
			if( !other) { return; }
			m_Position = other->m_Position;
		}
		void IfcConic::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCONIC" << "(";
			if( m_Position ) { m_Position->getStepParameter( stream, true ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcConic::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcConic::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<1 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcConic, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>1 ){ std::cout << "Wrong parameter count for entity IfcConic, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Position = IfcAxis2Placement::readStepData( args[0], map );
		}
		void IfcConic::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcCurve::setInverseCounterparts( ptr_self_entity );
		}
		void IfcConic::unlinkSelf()
		{
			IfcCurve::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
