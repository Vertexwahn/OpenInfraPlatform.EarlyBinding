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
#include "IfcMechanicalFastenerType.h"
#include "IfcGloballyUniqueId.h"
#include "IfcOwnerHistory.h"
#include "IfcLabel.h"
#include "IfcText.h"
#include "IfcIdentifier.h"
#include "IfcPropertySetDefinition.h"
#include "IfcRepresentationMap.h"
#include "IfcLabel.h"
#include "IfcLabel.h"
#include "IfcMechanicalFastenerTypeEnum.h"
#include "IfcPositiveLengthMeasure.h"
#include "IfcPositiveLengthMeasure.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcMechanicalFastenerType
			IfcMechanicalFastenerType::IfcMechanicalFastenerType() { m_entity_enum = IFCMECHANICALFASTENERTYPE;}
			IfcMechanicalFastenerType::IfcMechanicalFastenerType( int id ) { m_id = id; m_entity_enum = IFCMECHANICALFASTENERTYPE;}
			IfcMechanicalFastenerType::~IfcMechanicalFastenerType() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcMechanicalFastenerType::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcMechanicalFastenerType> other = std::dynamic_pointer_cast<IfcMechanicalFastenerType>(other_entity);
				if( !other) { return; }
				m_GlobalId = other->m_GlobalId;
				m_OwnerHistory = other->m_OwnerHistory;
				m_Name = other->m_Name;
				m_Description = other->m_Description;
				m_ApplicableOccurrence = other->m_ApplicableOccurrence;
				m_HasPropertySets = other->m_HasPropertySets;
				m_RepresentationMaps = other->m_RepresentationMaps;
				m_Tag = other->m_Tag;
				m_ElementType = other->m_ElementType;
				m_PredefinedType = other->m_PredefinedType;
				m_NominalDiameter = other->m_NominalDiameter;
				m_NominalLength = other->m_NominalLength;
			}
			void IfcMechanicalFastenerType::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCMECHANICALFASTENERTYPE" << "(";
				if( m_GlobalId) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_OwnerHistory) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
				stream << ",";
				if( m_Name) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Description) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_ApplicableOccurrence) { m_ApplicableOccurrence->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				writeEntityList( stream, m_HasPropertySets );
				stream << ",";
				writeEntityList( stream, m_RepresentationMaps );
				stream << ",";
				if( m_Tag) { m_Tag->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_ElementType) { m_ElementType->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_PredefinedType) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_NominalDiameter) { m_NominalDiameter->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_NominalLength) { m_NominalLength->getStepParameter( stream ); } else { stream << "$"; }
				stream << ");";
			}
			void IfcMechanicalFastenerType::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcMechanicalFastenerType::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<12 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcMechanicalFastenerType, expecting 12, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<12 ){ std::cout << "Wrong parameter count for entity IfcMechanicalFastenerType, expecting 12, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
				readEntityReference( args[1], m_OwnerHistory, map);
				m_Name = IfcLabel::readStepData( args[2] );
				m_Description = IfcText::readStepData( args[3] );
				m_ApplicableOccurrence = IfcIdentifier::readStepData( args[4] );
				readEntityReferenceList( args[5], m_HasPropertySets , map);
				readEntityReferenceList( args[6], m_RepresentationMaps , map);
				m_Tag = IfcLabel::readStepData( args[7] );
				m_ElementType = IfcLabel::readStepData( args[8] );
				m_PredefinedType = IfcMechanicalFastenerTypeEnum::readStepData( args[9] );
				m_NominalDiameter = IfcPositiveLengthMeasure::readStepData( args[10] );
				m_NominalLength = IfcPositiveLengthMeasure::readStepData( args[11] );
			}
			void IfcMechanicalFastenerType::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcElementComponentType::setInverseCounterparts(ptr_self_entity);
			}
			void IfcMechanicalFastenerType::unlinkSelf()
			{
				IfcElementComponentType::unlinkSelf();
			}
	}
}
