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
#include "include/IfcObjectPlacement.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcPositiveLengthMeasure.h"
#include "include/IfcProductRepresentation.h"
#include "include/IfcRelAssigns.h"
#include "include/IfcRelAssignsToProduct.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelConnectsElements.h"
#include "include/IfcRelConnectsPortToElement.h"
#include "include/IfcRelConnectsStructuralElement.h"
#include "include/IfcRelConnectsWithRealizingElements.h"
#include "include/IfcRelContainedInSpatialStructure.h"
#include "include/IfcRelCoversBldgElements.h"
#include "include/IfcRelDecomposes.h"
#include "include/IfcRelDefines.h"
#include "include/IfcRelFillsElement.h"
#include "include/IfcRelProjectsElement.h"
#include "include/IfcRelReferencedInSpatialStructure.h"
#include "include/IfcRelSpaceBoundary.h"
#include "include/IfcRelVoidsElement.h"
#include "include/IfcRoundedEdgeFeature.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcRoundedEdgeFeature 
		IfcRoundedEdgeFeature::IfcRoundedEdgeFeature() { m_entity_enum = IFCROUNDEDEDGEFEATURE; }
		IfcRoundedEdgeFeature::IfcRoundedEdgeFeature( int id ) { m_id = id; m_entity_enum = IFCROUNDEDEDGEFEATURE; }
		IfcRoundedEdgeFeature::~IfcRoundedEdgeFeature() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRoundedEdgeFeature::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcRoundedEdgeFeature> other = dynamic_pointer_cast<IfcRoundedEdgeFeature>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_ObjectType = other->m_ObjectType;
			m_ObjectPlacement = other->m_ObjectPlacement;
			m_Representation = other->m_Representation;
			m_Tag = other->m_Tag;
			m_FeatureLength = other->m_FeatureLength;
			m_Radius = other->m_Radius;
		}
		void IfcRoundedEdgeFeature::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCROUNDEDEDGEFEATURE" << "(";
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
			if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Representation ) { stream << "#" << m_Representation->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Tag ) { m_Tag->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_FeatureLength ) { m_FeatureLength->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Radius ) { m_Radius->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcRoundedEdgeFeature::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRoundedEdgeFeature::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<10 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRoundedEdgeFeature, expecting 10, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>10 ){ std::cout << "Wrong parameter count for entity IfcRoundedEdgeFeature, expecting 10, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_ObjectType = IfcLabel::readStepData( args[4] );
			readEntityReference( args[5], m_ObjectPlacement, map );
			readEntityReference( args[6], m_Representation, map );
			m_Tag = IfcIdentifier::readStepData( args[7] );
			m_FeatureLength = IfcPositiveLengthMeasure::readStepData( args[8] );
			m_Radius = IfcPositiveLengthMeasure::readStepData( args[9] );
		}
		void IfcRoundedEdgeFeature::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcEdgeFeature::setInverseCounterparts( ptr_self_entity );
		}
		void IfcRoundedEdgeFeature::unlinkSelf()
		{
			IfcEdgeFeature::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
