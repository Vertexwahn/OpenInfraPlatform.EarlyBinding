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
#include "include/IfcObject.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcPropertySetDefinition.h"
#include "include/IfcRelDefinesByProperties.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcRelDefinesByProperties 
		IfcRelDefinesByProperties::IfcRelDefinesByProperties() { m_entity_enum = IFCRELDEFINESBYPROPERTIES; }
		IfcRelDefinesByProperties::IfcRelDefinesByProperties( int id ) { m_id = id; m_entity_enum = IFCRELDEFINESBYPROPERTIES; }
		IfcRelDefinesByProperties::~IfcRelDefinesByProperties() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRelDefinesByProperties::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcRelDefinesByProperties> other = dynamic_pointer_cast<IfcRelDefinesByProperties>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_RelatedObjects = other->m_RelatedObjects;
			m_RelatingPropertyDefinition = other->m_RelatingPropertyDefinition;
		}
		void IfcRelDefinesByProperties::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRELDEFINESBYPROPERTIES" << "(";
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
			if( m_RelatingPropertyDefinition ) { stream << "#" << m_RelatingPropertyDefinition->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRelDefinesByProperties::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRelDefinesByProperties::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelDefinesByProperties, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcRelDefinesByProperties, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			readEntityReferenceList( args[4], m_RelatedObjects, map );
			readEntityReference( args[5], m_RelatingPropertyDefinition, map );
		}
		void IfcRelDefinesByProperties::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcRelDefines::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcRelDefinesByProperties> ptr_self = dynamic_pointer_cast<IfcRelDefinesByProperties>( ptr_self_entity );
			if( !ptr_self ) { throw Ifc2x3Exception( "IfcRelDefinesByProperties::setInverseCounterparts: type mismatch" ); }
			if( m_RelatingPropertyDefinition )
			{
				m_RelatingPropertyDefinition->m_PropertyDefinitionOf_inverse.push_back( ptr_self );
			}
		}
		void IfcRelDefinesByProperties::unlinkSelf()
		{
			IfcRelDefines::unlinkSelf();
			if( m_RelatingPropertyDefinition )
			{
				std::vector<weak_ptr<IfcRelDefinesByProperties> >& PropertyDefinitionOf_inverse = m_RelatingPropertyDefinition->m_PropertyDefinitionOf_inverse;
				std::vector<weak_ptr<IfcRelDefinesByProperties> >::iterator it_PropertyDefinitionOf_inverse;
				for( it_PropertyDefinitionOf_inverse = PropertyDefinitionOf_inverse.begin(); it_PropertyDefinitionOf_inverse != PropertyDefinitionOf_inverse.end(); ++it_PropertyDefinitionOf_inverse)
				{
					shared_ptr<IfcRelDefinesByProperties> self_candidate( *it_PropertyDefinitionOf_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						PropertyDefinitionOf_inverse.erase( it_PropertyDefinitionOf_inverse );
						break;
					}
				}
			}
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
