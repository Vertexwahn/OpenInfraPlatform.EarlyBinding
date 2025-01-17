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
#include "IfcRelDefinesByType.h"
#include "IfcGloballyUniqueId.h"
#include "IfcOwnerHistory.h"
#include "IfcLabel.h"
#include "IfcText.h"
#include "IfcObject.h"
#include "IfcTypeObject.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcRelDefinesByType
			IfcRelDefinesByType::IfcRelDefinesByType() { m_entity_enum = IFCRELDEFINESBYTYPE;}
			IfcRelDefinesByType::IfcRelDefinesByType( int id ) { m_id = id; m_entity_enum = IFCRELDEFINESBYTYPE;}
			IfcRelDefinesByType::~IfcRelDefinesByType() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcRelDefinesByType::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcRelDefinesByType> other = std::dynamic_pointer_cast<IfcRelDefinesByType>(other_entity);
				if( !other) { return; }
				m_GlobalId = other->m_GlobalId;
				m_OwnerHistory = other->m_OwnerHistory;
				m_Name = other->m_Name;
				m_Description = other->m_Description;
				m_RelatedObjects = other->m_RelatedObjects;
				m_RelatingType = other->m_RelatingType;
			}
			void IfcRelDefinesByType::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCRELDEFINESBYTYPE" << "(";
				if( m_GlobalId) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_OwnerHistory) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
				stream << ",";
				if( m_Name) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Description) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				writeEntityList( stream, m_RelatedObjects );
				stream << ",";
				if( m_RelatingType) { stream << "#" << m_RelatingType->getId(); } else { stream << "$"; }
				stream << ");";
			}
			void IfcRelDefinesByType::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcRelDefinesByType::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelDefinesByType, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<6 ){ std::cout << "Wrong parameter count for entity IfcRelDefinesByType, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
				readEntityReference( args[1], m_OwnerHistory, map);
				m_Name = IfcLabel::readStepData( args[2] );
				m_Description = IfcText::readStepData( args[3] );
				readEntityReferenceList( args[4], m_RelatedObjects , map);
				readEntityReference( args[5], m_RelatingType, map);
			}
			void IfcRelDefinesByType::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcRelDefines::setInverseCounterparts(ptr_self_entity);
			}
			void IfcRelDefinesByType::unlinkSelf()
			{
				IfcRelDefines::unlinkSelf();
			}
	}
}
