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

#include "OpenInfraPlatform/IfcRoad/model/IfcRoadException.h"
#include "OpenInfraPlatform/IfcRoad/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcRoad/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcRoad/IfcRoadEntityEnums.h"
#include "include/IfcAppliedValue.h"
#include "include/IfcCrewResource.h"
#include "include/IfcCrewResourceTypeEnum.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcIdentifier.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcPhysicalQuantity.h"
#include "include/IfcRelAggregates.h"
#include "include/IfcRelAssigns.h"
#include "include/IfcRelAssignsToResource.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelDeclares.h"
#include "include/IfcRelDefinesByObject.h"
#include "include/IfcRelDefinesByProperties.h"
#include "include/IfcRelDefinesByType.h"
#include "include/IfcRelNests.h"
#include "include/IfcResourceTime.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcCrewResource 
		IfcCrewResource::IfcCrewResource() { m_entity_enum = IFCCREWRESOURCE; }
		IfcCrewResource::IfcCrewResource( int id ) { m_id = id; m_entity_enum = IFCCREWRESOURCE; }
		IfcCrewResource::~IfcCrewResource() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcCrewResource::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcCrewResource> other = dynamic_pointer_cast<IfcCrewResource>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_ObjectType = other->m_ObjectType;
			m_Identification = other->m_Identification;
			m_LongDescription = other->m_LongDescription;
			m_Usage = other->m_Usage;
			m_BaseCosts = other->m_BaseCosts;
			m_BaseQuantity = other->m_BaseQuantity;
			m_PredefinedType = other->m_PredefinedType;
		}
		void IfcCrewResource::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCREWRESOURCE" << "(";
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
			if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_LongDescription ) { m_LongDescription->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Usage ) { stream << "#" << m_Usage->getId(); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_BaseCosts );
			stream << ",";
			if( m_BaseQuantity ) { stream << "#" << m_BaseQuantity->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcCrewResource::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcCrewResource::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<11 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcCrewResource, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>11 ){ std::cout << "Wrong parameter count for entity IfcCrewResource, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_ObjectType = IfcLabel::readStepData( args[4] );
			m_Identification = IfcIdentifier::readStepData( args[5] );
			m_LongDescription = IfcText::readStepData( args[6] );
			readEntityReference( args[7], m_Usage, map );
			readEntityReferenceList( args[8], m_BaseCosts, map );
			readEntityReference( args[9], m_BaseQuantity, map );
			m_PredefinedType = IfcCrewResourceTypeEnum::readStepData( args[10] );
		}
		void IfcCrewResource::setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self_entity )
		{
			IfcConstructionResource::setInverseCounterparts( ptr_self_entity );
		}
		void IfcCrewResource::unlinkSelf()
		{
			IfcConstructionResource::unlinkSelf();
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
