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
#include "include/IfcIdentifier.h"
#include "include/IfcLabel.h"
#include "include/IfcOrderAction.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelAssigns.h"
#include "include/IfcRelAssignsToProcess.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelDecomposes.h"
#include "include/IfcRelDefines.h"
#include "include/IfcRelSequence.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcOrderAction 
		IfcOrderAction::IfcOrderAction() { m_entity_enum = IFCORDERACTION; }
		IfcOrderAction::IfcOrderAction( int id ) { m_id = id; m_entity_enum = IFCORDERACTION; }
		IfcOrderAction::~IfcOrderAction() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcOrderAction::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcOrderAction> other = dynamic_pointer_cast<IfcOrderAction>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_ObjectType = other->m_ObjectType;
			m_TaskId = other->m_TaskId;
			m_Status = other->m_Status;
			m_WorkMethod = other->m_WorkMethod;
			m_IsMilestone = other->m_IsMilestone;
			m_Priority = other->m_Priority;
			m_ActionID = other->m_ActionID;
		}
		void IfcOrderAction::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCORDERACTION" << "(";
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
			if( m_TaskId ) { m_TaskId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Status ) { m_Status->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_WorkMethod ) { m_WorkMethod->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_IsMilestone == false ) { stream << ".F."; }
			else if( m_IsMilestone == true ) { stream << ".T."; }
			stream << ",";
			if( m_Priority == m_Priority ){ stream << m_Priority; }
			else { stream << "$"; }
			stream << ",";
			if( m_ActionID ) { m_ActionID->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcOrderAction::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcOrderAction::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<11 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcOrderAction, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>11 ){ std::cout << "Wrong parameter count for entity IfcOrderAction, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_ObjectType = IfcLabel::readStepData( args[4] );
			m_TaskId = IfcIdentifier::readStepData( args[5] );
			m_Status = IfcLabel::readStepData( args[6] );
			m_WorkMethod = IfcLabel::readStepData( args[7] );
			if( _stricmp( args[8].c_str(), ".F." ) == 0 ) { m_IsMilestone = false; }
			else if( _stricmp( args[8].c_str(), ".T." ) == 0 ) { m_IsMilestone = true; }
			readIntValue( args[9], m_Priority );
			m_ActionID = IfcIdentifier::readStepData( args[10] );
		}
		void IfcOrderAction::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcTask::setInverseCounterparts( ptr_self_entity );
		}
		void IfcOrderAction::unlinkSelf()
		{
			IfcTask::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
