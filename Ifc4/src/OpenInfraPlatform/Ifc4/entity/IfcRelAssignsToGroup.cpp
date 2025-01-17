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
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcGroup.h"
#include "include/IfcLabel.h"
#include "include/IfcObjectDefinition.h"
#include "include/IfcObjectTypeEnum.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelAssignsToGroup.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcRelAssignsToGroup 
		IfcRelAssignsToGroup::IfcRelAssignsToGroup() { m_entity_enum = IFCRELASSIGNSTOGROUP; }
		IfcRelAssignsToGroup::IfcRelAssignsToGroup( int id ) { m_id = id; m_entity_enum = IFCRELASSIGNSTOGROUP; }
		IfcRelAssignsToGroup::~IfcRelAssignsToGroup() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelAssignsToGroup::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcRelAssignsToGroup> other = dynamic_pointer_cast<IfcRelAssignsToGroup>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatedObjects = other->m_RelatedObjects;
			m_RelatedObjectsType = other->m_RelatedObjectsType;
			m_RelatingGroup = other->m_RelatingGroup;
		}
		void IfcRelAssignsToGroup::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELASSIGNSTOGROUP" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_RelatedObjects );
			stream << ",";
			if( m_RelatedObjectsType ) { m_RelatedObjectsType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_RelatingGroup ) { stream << "#" << m_RelatingGroup->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRelAssignsToGroup::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelAssignsToGroup::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<7 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelAssignsToGroup, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>7 ){ std::cout << "Wrong parameter count for entity IfcRelAssignsToGroup, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReferenceList( args[4], m_RelatedObjects, map );
			m_RelatedObjectsType = IfcObjectTypeEnum::readStepData( args[5] );
			readEntityReference( args[6], m_RelatingGroup, map );
		}
		void IfcRelAssignsToGroup::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcRelAssigns::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelAssignsToGroup> ptr_self = dynamic_pointer_cast<IfcRelAssignsToGroup>( ptr_self_entity );
			if( !ptr_self ) { throw Ifc4Exception( "IfcRelAssignsToGroup::setInverseCounterparts: type mismatch" ); }
			if( m_RelatingGroup )
			{
				m_RelatingGroup->m_IsGroupedBy_inverse.push_back( ptr_self );
			}
		}
		void IfcRelAssignsToGroup::unlinkSelf()
		{
			IfcRelAssigns::unlinkSelf();
			if( m_RelatingGroup )
			{
				std::vector<weak_ptr<IfcRelAssignsToGroup> >& IsGroupedBy_inverse = m_RelatingGroup->m_IsGroupedBy_inverse;
				std::vector<weak_ptr<IfcRelAssignsToGroup> >::iterator it_IsGroupedBy_inverse;
				for( it_IsGroupedBy_inverse = IsGroupedBy_inverse.begin(); it_IsGroupedBy_inverse != IsGroupedBy_inverse.end(); ++it_IsGroupedBy_inverse)
				{
					shared_ptr<IfcRelAssignsToGroup> self_candidate( *it_IsGroupedBy_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						IsGroupedBy_inverse.erase( it_IsGroupedBy_inverse );
						break;
					}
				}
			}
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
