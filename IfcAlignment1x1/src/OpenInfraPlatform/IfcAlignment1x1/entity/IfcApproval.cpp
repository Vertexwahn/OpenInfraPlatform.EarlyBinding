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
#include "IfcApproval.h"
#include "IfcIdentifier.h"
#include "IfcLabel.h"
#include "IfcText.h"
#include "IfcDateTime.h"
#include "IfcLabel.h"
#include "IfcLabel.h"
#include "IfcText.h"
#include "IfcActorSelect.h"
#include "IfcActorSelect.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcApproval
			IfcApproval::IfcApproval() { m_entity_enum = IFCAPPROVAL;}
			IfcApproval::IfcApproval( int id ) { m_id = id; m_entity_enum = IFCAPPROVAL;}
			IfcApproval::~IfcApproval() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcApproval::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcApproval> other = std::dynamic_pointer_cast<IfcApproval>(other_entity);
				if( !other) { return; }
				m_Identifier = other->m_Identifier;
				m_Name = other->m_Name;
				m_Description = other->m_Description;
				m_TimeOfApproval = other->m_TimeOfApproval;
				m_Status = other->m_Status;
				m_Level = other->m_Level;
				m_Qualifier = other->m_Qualifier;
				m_RequestingApproval = other->m_RequestingApproval;
				m_GivingApproval = other->m_GivingApproval;
			}
			void IfcApproval::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCAPPROVAL" << "(";
				if( m_Identifier) { m_Identifier->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Name) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Description) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_TimeOfApproval) { m_TimeOfApproval->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Status) { m_Status->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Level) { m_Level->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Qualifier) { m_Qualifier->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_RequestingApproval) { m_RequestingApproval->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_GivingApproval) { m_GivingApproval->getStepParameter( stream ); } else { stream << "$"; }
				stream << ");";
			}
			void IfcApproval::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcApproval::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<9 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcApproval, expecting 9, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<9 ){ std::cout << "Wrong parameter count for entity IfcApproval, expecting 9, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_Identifier = IfcIdentifier::readStepData( args[0] );
				m_Name = IfcLabel::readStepData( args[1] );
				m_Description = IfcText::readStepData( args[2] );
				m_TimeOfApproval = IfcDateTime::readStepData( args[3] );
				m_Status = IfcLabel::readStepData( args[4] );
				m_Level = IfcLabel::readStepData( args[5] );
				m_Qualifier = IfcText::readStepData( args[6] );
				m_RequestingApproval = IfcActorSelect::readStepData( args[7], map );
				m_GivingApproval = IfcActorSelect::readStepData( args[8], map );
			}
			void IfcApproval::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
			}
			void IfcApproval::unlinkSelf()
			{
			}
	}
}
