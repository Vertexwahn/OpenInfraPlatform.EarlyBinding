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
#include "include/IfcBoolean.h"
#include "include/IfcCurve.h"
#include "include/IfcGrid.h"
#include "include/IfcGridAxis.h"
#include "include/IfcLabel.h"
#include "include/IfcVirtualGridIntersection.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcGridAxis 
		IfcGridAxis::IfcGridAxis() { m_entity_enum = IFCGRIDAXIS; }
		IfcGridAxis::IfcGridAxis( int id ) { m_id = id; m_entity_enum = IFCGRIDAXIS; }
		IfcGridAxis::~IfcGridAxis() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcGridAxis::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcGridAxis> other = dynamic_pointer_cast<IfcGridAxis>(other_entity);
			if( !other) { return; }
			m_AxisTag = other->m_AxisTag;
			m_AxisCurve = other->m_AxisCurve;
			m_SameSense = other->m_SameSense;
		}
		void IfcGridAxis::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCGRIDAXIS" << "(";
			if( m_AxisTag ) { m_AxisTag->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_AxisCurve ) { stream << "#" << m_AxisCurve->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_SameSense ) { m_SameSense->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcGridAxis::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcGridAxis::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcGridAxis, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcGridAxis, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_AxisTag = IfcLabel::readStepData( args[0] );
			readEntityReference( args[1], m_AxisCurve, map );
			m_SameSense = IfcBoolean::readStepData( args[2] );
		}
		void IfcGridAxis::setInverseCounterparts( shared_ptr<IfcRoadEntity> )
		{
		}
		void IfcGridAxis::unlinkSelf()
		{
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
