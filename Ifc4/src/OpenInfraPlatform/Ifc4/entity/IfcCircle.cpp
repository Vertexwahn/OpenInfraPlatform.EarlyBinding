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

#include "OpenInfraPlatform/Ifc4/model/Ifc4Exception.h"
#include "OpenInfraPlatform/Ifc4/reader/ReaderUtil.h"
#include "OpenInfraPlatform/Ifc4/writer/WriterUtil.h"
#include "OpenInfraPlatform/Ifc4/Ifc4EntityEnums.h"
#include "include/IfcAxis2Placement.h"
#include "include/IfcCircle.h"
#include "include/IfcPositiveLengthMeasure.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcCircle 
		IfcCircle::IfcCircle() { m_entity_enum = IFCCIRCLE; }
		IfcCircle::IfcCircle( int id ) { m_id = id; m_entity_enum = IFCCIRCLE; }
		IfcCircle::~IfcCircle() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcCircle::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcCircle> other = dynamic_pointer_cast<IfcCircle>(other_entity);
			if( !other) { return; }
			m_Position = other->m_Position;
			m_Radius = other->m_Radius;
		}
		void IfcCircle::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCIRCLE" << "(";
			if( m_Position ) { m_Position->getStepParameter( stream, true ); } else { stream << "$"; }
			stream << ",";
			if( m_Radius ) { m_Radius->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcCircle::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcCircle::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<2 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcCircle, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>2 ){ std::cout << "Wrong parameter count for entity IfcCircle, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Position = IfcAxis2Placement::readStepData( args[0], map );
			m_Radius = IfcPositiveLengthMeasure::readStepData( args[1] );
		}
		void IfcCircle::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcConic::setInverseCounterparts( ptr_self_entity );
		}
		void IfcCircle::unlinkSelf()
		{
			IfcConic::unlinkSelf();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
