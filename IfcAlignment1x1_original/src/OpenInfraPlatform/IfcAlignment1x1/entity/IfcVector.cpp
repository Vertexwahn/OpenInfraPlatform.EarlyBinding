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
#include "IfcVector.h"
#include "IfcDirection.h"
#include "IfcLengthMeasure.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcVector
			IfcVector::IfcVector() { m_entity_enum = IFCVECTOR;}
			IfcVector::IfcVector( int id ) { m_id = id; m_entity_enum = IFCVECTOR;}
			IfcVector::~IfcVector() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcVector::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcVector> other = std::dynamic_pointer_cast<IfcVector>(other_entity);
				if( !other) { return; }
				m_Orientation = other->m_Orientation;
				m_Magnitude = other->m_Magnitude;
			}
			void IfcVector::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCVECTOR" << "(";
				if( m_Orientation) { stream << "#" << m_Orientation->getId(); } else { stream << "$"; }
				stream << ",";
				if( m_Magnitude) { m_Magnitude->getStepParameter( stream ); } else { stream << "$"; }
				stream << ");";
			}
			void IfcVector::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcVector::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<2 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcVector, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<2 ){ std::cout << "Wrong parameter count for entity IfcVector, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				readEntityReference( args[0], m_Orientation, map);
				m_Magnitude = IfcLengthMeasure::readStepData( args[1] );
			}
			void IfcVector::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcGeometricRepresentationItem::setInverseCounterparts(ptr_self_entity);
			}
			void IfcVector::unlinkSelf()
			{
				IfcGeometricRepresentationItem::unlinkSelf();
			}
	}
}
