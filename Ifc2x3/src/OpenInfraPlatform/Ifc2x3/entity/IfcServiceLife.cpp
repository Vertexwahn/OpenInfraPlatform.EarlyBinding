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
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelAssigns.h"
#include "include/IfcRelAssignsToControl.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelDecomposes.h"
#include "include/IfcRelDefines.h"
#include "include/IfcServiceLife.h"
#include "include/IfcServiceLifeTypeEnum.h"
#include "include/IfcText.h"
#include "include/IfcTimeMeasure.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcServiceLife 
		IfcServiceLife::IfcServiceLife() { m_entity_enum = IFCSERVICELIFE; }
		IfcServiceLife::IfcServiceLife( int id ) { m_id = id; m_entity_enum = IFCSERVICELIFE; }
		IfcServiceLife::~IfcServiceLife() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcServiceLife::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcServiceLife> other = dynamic_pointer_cast<IfcServiceLife>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_ObjectType = other->m_ObjectType;
			m_ServiceLifeType = other->m_ServiceLifeType;
			m_ServiceLifeDuration = other->m_ServiceLifeDuration;
		}
		void IfcServiceLife::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCSERVICELIFE" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ServiceLifeType ) { m_ServiceLifeType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ServiceLifeDuration ) { m_ServiceLifeDuration->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcServiceLife::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcServiceLife::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<7 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcServiceLife, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>7 ){ std::cout << "Wrong parameter count for entity IfcServiceLife, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_ObjectType = IfcLabel::readStepData( args[4] );
			m_ServiceLifeType = IfcServiceLifeTypeEnum::readStepData( args[5] );
			m_ServiceLifeDuration = IfcTimeMeasure::readStepData( args[6] );
		}
		void IfcServiceLife::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcControl::setInverseCounterparts( ptr_self_entity );
		}
		void IfcServiceLife::unlinkSelf()
		{
			IfcControl::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
