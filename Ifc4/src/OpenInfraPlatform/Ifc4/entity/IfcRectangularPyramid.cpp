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
#include "include/IfcAxis2Placement3D.h"
#include "include/IfcPositiveLengthMeasure.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcRectangularPyramid.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcRectangularPyramid 
		IfcRectangularPyramid::IfcRectangularPyramid() { m_entity_enum = IFCRECTANGULARPYRAMID; }
		IfcRectangularPyramid::IfcRectangularPyramid( int id ) { m_id = id; m_entity_enum = IFCRECTANGULARPYRAMID; }
		IfcRectangularPyramid::~IfcRectangularPyramid() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRectangularPyramid::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcRectangularPyramid> other = dynamic_pointer_cast<IfcRectangularPyramid>(other_entity);
			if( !other) { return; }
			m_Position = other->m_Position;
			m_XLength = other->m_XLength;
			m_YLength = other->m_YLength;
			m_Height = other->m_Height;
		}
		void IfcRectangularPyramid::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRECTANGULARPYRAMID" << "(";
			if( m_Position ) { stream << "#" << m_Position->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_XLength ) { m_XLength->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_YLength ) { m_YLength->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Height ) { m_Height->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRectangularPyramid::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRectangularPyramid::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRectangularPyramid, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>4 ){ std::cout << "Wrong parameter count for entity IfcRectangularPyramid, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_Position, map );
			m_XLength = IfcPositiveLengthMeasure::readStepData( args[1] );
			m_YLength = IfcPositiveLengthMeasure::readStepData( args[2] );
			m_Height = IfcPositiveLengthMeasure::readStepData( args[3] );
		}
		void IfcRectangularPyramid::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcCsgPrimitive3D::setInverseCounterparts( ptr_self_entity );
		}
		void IfcRectangularPyramid::unlinkSelf()
		{
			IfcCsgPrimitive3D::unlinkSelf();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
