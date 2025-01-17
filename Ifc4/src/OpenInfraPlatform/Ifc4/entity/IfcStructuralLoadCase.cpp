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
#include "include/IfcActionSourceTypeEnum.h"
#include "include/IfcActionTypeEnum.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcLoadGroupTypeEnum.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRatioMeasure.h"
#include "include/IfcRelAggregates.h"
#include "include/IfcRelAssigns.h"
#include "include/IfcRelAssignsToGroup.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelDeclares.h"
#include "include/IfcRelDefinesByObject.h"
#include "include/IfcRelDefinesByProperties.h"
#include "include/IfcRelDefinesByType.h"
#include "include/IfcRelNests.h"
#include "include/IfcStructuralAnalysisModel.h"
#include "include/IfcStructuralLoadCase.h"
#include "include/IfcStructuralResultGroup.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcStructuralLoadCase 
		IfcStructuralLoadCase::IfcStructuralLoadCase() { m_entity_enum = IFCSTRUCTURALLOADCASE; }
		IfcStructuralLoadCase::IfcStructuralLoadCase( int id ) { m_id = id; m_entity_enum = IFCSTRUCTURALLOADCASE; }
		IfcStructuralLoadCase::~IfcStructuralLoadCase() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcStructuralLoadCase::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcStructuralLoadCase> other = dynamic_pointer_cast<IfcStructuralLoadCase>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_ObjectType = other->m_ObjectType;
			m_PredefinedType = other->m_PredefinedType;
			m_ActionType = other->m_ActionType;
			m_ActionSource = other->m_ActionSource;
			m_Coefficient = other->m_Coefficient;
			m_Purpose = other->m_Purpose;
			m_SelfWeightCoefficients = other->m_SelfWeightCoefficients;
		}
		void IfcStructuralLoadCase::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCSTRUCTURALLOADCASE" << "(";
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
			if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ActionType ) { m_ActionType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ActionSource ) { m_ActionSource->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Coefficient ) { m_Coefficient->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Purpose ) { m_Purpose->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeTypeOfRealList( stream, m_SelfWeightCoefficients );
			stream << ");";
		}
		void IfcStructuralLoadCase::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcStructuralLoadCase::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<11 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcStructuralLoadCase, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>11 ){ std::cout << "Wrong parameter count for entity IfcStructuralLoadCase, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_ObjectType = IfcLabel::readStepData( args[4] );
			m_PredefinedType = IfcLoadGroupTypeEnum::readStepData( args[5] );
			m_ActionType = IfcActionTypeEnum::readStepData( args[6] );
			m_ActionSource = IfcActionSourceTypeEnum::readStepData( args[7] );
			m_Coefficient = IfcRatioMeasure::readStepData( args[8] );
			m_Purpose = IfcLabel::readStepData( args[9] );
			readTypeOfRealList( args[10], m_SelfWeightCoefficients );
		}
		void IfcStructuralLoadCase::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcStructuralLoadGroup::setInverseCounterparts( ptr_self_entity );
		}
		void IfcStructuralLoadCase::unlinkSelf()
		{
			IfcStructuralLoadGroup::unlinkSelf();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
