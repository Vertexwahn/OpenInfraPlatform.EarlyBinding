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
#include "OpenInfraPlatform/IfcAlignment1x1/model/Exception.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/IfcAlignment1x1EntityEnums.h"
#include "IfcOffsetCurve2D.h"
#include "IfcCurve.h"
#include "IfcLengthMeasure.h"
#include "IfcLogical.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcOffsetCurve2D
			IfcOffsetCurve2D::IfcOffsetCurve2D() { m_entity_enum = IFCOFFSETCURVE2D;}
			IfcOffsetCurve2D::IfcOffsetCurve2D( int id ) { m_id = id; m_entity_enum = IFCOFFSETCURVE2D;}
			IfcOffsetCurve2D::~IfcOffsetCurve2D() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcOffsetCurve2D::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcOffsetCurve2D> other = std::dynamic_pointer_cast<IfcOffsetCurve2D>(other_entity);
				if( !other) { return; }
				m_BasisCurve = other->m_BasisCurve;
				m_Distance = other->m_Distance;
				m_SelfIntersect = other->m_SelfIntersect;
			}
			void IfcOffsetCurve2D::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCOFFSETCURVE2D" << "(";
				if( m_BasisCurve) { stream << "#" << m_BasisCurve->getId(); } else { stream << "$"; }
				stream << ",";
				if( m_Distance) { m_Distance->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_SelfIntersect) { m_SelfIntersect->getStepParameter( stream ); } else { stream << "$"; }
				stream << ");";
			}
			void IfcOffsetCurve2D::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcOffsetCurve2D::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcOffsetCurve2D, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<3 ){ std::cout << "Wrong parameter count for entity IfcOffsetCurve2D, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				readEntityReference( args[0], m_BasisCurve, map);
				m_Distance = IfcLengthMeasure::readStepData( args[1] );
				m_SelfIntersect = IfcLogical::readStepData( args[2] );
			}
			void IfcOffsetCurve2D::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcOffsetCurve::setInverseCounterparts(ptr_self_entity);
			}
			void IfcOffsetCurve2D::unlinkSelf()
			{
				IfcOffsetCurve::unlinkSelf();
			}
	}
}
