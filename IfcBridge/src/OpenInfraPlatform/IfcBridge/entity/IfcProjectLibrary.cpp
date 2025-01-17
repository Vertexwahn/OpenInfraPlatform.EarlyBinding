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

#include "model/IfcBridgeException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcBridgeEntityEnums.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcProjectLibrary.h"
#include "include/IfcRelAggregates.h"
#include "include/IfcRelAssigns.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelDeclares.h"
#include "include/IfcRelDefinesByProperties.h"
#include "include/IfcRelNests.h"
#include "include/IfcRepresentationContext.h"
#include "include/IfcText.h"
#include "include/IfcUnitAssignment.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcProjectLibrary 
		IfcProjectLibrary::IfcProjectLibrary() { m_entity_enum = IFCPROJECTLIBRARY; }
		IfcProjectLibrary::IfcProjectLibrary( int id ) { m_id = id; m_entity_enum = IFCPROJECTLIBRARY; }
		IfcProjectLibrary::~IfcProjectLibrary() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcProjectLibrary::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcProjectLibrary> other = dynamic_pointer_cast<IfcProjectLibrary>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_ObjectType = other->m_ObjectType;
			m_LongName = other->m_LongName;
			m_Phase = other->m_Phase;
			m_RepresentationContexts = other->m_RepresentationContexts;
			m_UnitsInContext = other->m_UnitsInContext;
		}
		void IfcProjectLibrary::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCPROJECTLIBRARY" << "(";
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
			if( m_LongName ) { m_LongName->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Phase ) { m_Phase->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_RepresentationContexts );
			stream << ",";
			if( m_UnitsInContext ) { stream << "#" << m_UnitsInContext->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcProjectLibrary::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcProjectLibrary::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<9 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcProjectLibrary, expecting 9, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>9 ){ std::cout << "Wrong parameter count for entity IfcProjectLibrary, expecting 9, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_ObjectType = IfcLabel::readStepData( args[4] );
			m_LongName = IfcLabel::readStepData( args[5] );
			m_Phase = IfcLabel::readStepData( args[6] );
			readEntityReferenceList( args[7], m_RepresentationContexts, map );
			readEntityReference( args[8], m_UnitsInContext, map );
		}
		void IfcProjectLibrary::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			IfcContext::setInverseCounterparts( ptr_self_entity );
		}
		void IfcProjectLibrary::unlinkSelf()
		{
			IfcContext::unlinkSelf();
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
