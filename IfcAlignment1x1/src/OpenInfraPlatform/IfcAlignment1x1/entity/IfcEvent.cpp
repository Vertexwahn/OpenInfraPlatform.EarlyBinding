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
#include "IfcEvent.h"
#include "IfcGloballyUniqueId.h"
#include "IfcOwnerHistory.h"
#include "IfcLabel.h"
#include "IfcText.h"
#include "IfcLabel.h"
#include "IfcIdentifier.h"
#include "IfcText.h"
#include "IfcEventTypeEnum.h"
#include "IfcEventTriggerTypeEnum.h"
#include "IfcLabel.h"
#include "IfcEventTime.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcEvent
			IfcEvent::IfcEvent() { m_entity_enum = IFCEVENT;}
			IfcEvent::IfcEvent( int id ) { m_id = id; m_entity_enum = IFCEVENT;}
			IfcEvent::~IfcEvent() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcEvent::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcEvent> other = std::dynamic_pointer_cast<IfcEvent>(other_entity);
				if( !other) { return; }
				m_GlobalId = other->m_GlobalId;
				m_OwnerHistory = other->m_OwnerHistory;
				m_Name = other->m_Name;
				m_Description = other->m_Description;
				m_ObjectType = other->m_ObjectType;
				m_Identification = other->m_Identification;
				m_LongDescription = other->m_LongDescription;
				m_PredefinedType = other->m_PredefinedType;
				m_EventTriggerType = other->m_EventTriggerType;
				m_UserDefinedEventTriggerType = other->m_UserDefinedEventTriggerType;
				m_EventOccurenceTime = other->m_EventOccurenceTime;
			}
			void IfcEvent::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCEVENT" << "(";
				if( m_GlobalId) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_OwnerHistory) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
				stream << ",";
				if( m_Name) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Description) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_ObjectType) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Identification) { m_Identification->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_LongDescription) { m_LongDescription->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_PredefinedType) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_EventTriggerType) { m_EventTriggerType->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_UserDefinedEventTriggerType) { m_UserDefinedEventTriggerType->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_EventOccurenceTime) { stream << "#" << m_EventOccurenceTime->getId(); } else { stream << "$"; }
				stream << ");";
			}
			void IfcEvent::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcEvent::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<11 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcEvent, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<11 ){ std::cout << "Wrong parameter count for entity IfcEvent, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
				readEntityReference( args[1], m_OwnerHistory, map);
				m_Name = IfcLabel::readStepData( args[2] );
				m_Description = IfcText::readStepData( args[3] );
				m_ObjectType = IfcLabel::readStepData( args[4] );
				m_Identification = IfcIdentifier::readStepData( args[5] );
				m_LongDescription = IfcText::readStepData( args[6] );
				m_PredefinedType = IfcEventTypeEnum::readStepData( args[7] );
				m_EventTriggerType = IfcEventTriggerTypeEnum::readStepData( args[8] );
				m_UserDefinedEventTriggerType = IfcLabel::readStepData( args[9] );
				readEntityReference( args[10], m_EventOccurenceTime, map);
			}
			void IfcEvent::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcProcess::setInverseCounterparts(ptr_self_entity);
			}
			void IfcEvent::unlinkSelf()
			{
				IfcProcess::unlinkSelf();
			}
	}
}
