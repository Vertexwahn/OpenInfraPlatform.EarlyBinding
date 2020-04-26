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
#include "IfcStructuralAnalysisModel.h"
#include "IfcGloballyUniqueId.h"
#include "IfcOwnerHistory.h"
#include "IfcLabel.h"
#include "IfcText.h"
#include "IfcLabel.h"
#include "IfcAnalysisModelTypeEnum.h"
#include "IfcAxis2Placement3D.h"
#include "IfcStructuralLoadGroup.h"
#include "IfcStructuralResultGroup.h"
#include "IfcObjectPlacement.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcStructuralAnalysisModel
			IfcStructuralAnalysisModel::IfcStructuralAnalysisModel() { m_entity_enum = IFCSTRUCTURALANALYSISMODEL;}
			IfcStructuralAnalysisModel::IfcStructuralAnalysisModel( int id ) { m_id = id; m_entity_enum = IFCSTRUCTURALANALYSISMODEL;}
			IfcStructuralAnalysisModel::~IfcStructuralAnalysisModel() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcStructuralAnalysisModel::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcStructuralAnalysisModel> other = std::dynamic_pointer_cast<IfcStructuralAnalysisModel>(other_entity);
				if( !other) { return; }
				m_GlobalId = other->m_GlobalId;
				m_OwnerHistory = other->m_OwnerHistory;
				m_Name = other->m_Name;
				m_Description = other->m_Description;
				m_ObjectType = other->m_ObjectType;
				m_PredefinedType = other->m_PredefinedType;
				m_OrientationOf2DPlane = other->m_OrientationOf2DPlane;
				m_LoadedBy = other->m_LoadedBy;
				m_HasResults = other->m_HasResults;
				m_SharedPlacement = other->m_SharedPlacement;
			}
			void IfcStructuralAnalysisModel::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCSTRUCTURALANALYSISMODEL" << "(";
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
				if( m_PredefinedType) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_OrientationOf2DPlane) { stream << "#" << m_OrientationOf2DPlane->getId(); } else { stream << "$"; }
				stream << ",";
				writeEntityList( stream, m_LoadedBy );
				stream << ",";
				writeEntityList( stream, m_HasResults );
				stream << ",";
				if( m_SharedPlacement) { stream << "#" << m_SharedPlacement->getId(); } else { stream << "$"; }
				stream << ");";
			}
			void IfcStructuralAnalysisModel::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcStructuralAnalysisModel::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<10 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcStructuralAnalysisModel, expecting 10, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<10 ){ std::cout << "Wrong parameter count for entity IfcStructuralAnalysisModel, expecting 10, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
				readEntityReference( args[1], m_OwnerHistory, map);
				m_Name = IfcLabel::readStepData( args[2] );
				m_Description = IfcText::readStepData( args[3] );
				m_ObjectType = IfcLabel::readStepData( args[4] );
				m_PredefinedType = IfcAnalysisModelTypeEnum::readStepData( args[5] );
				readEntityReference( args[6], m_OrientationOf2DPlane, map);
				readEntityReferenceList( args[7], m_LoadedBy , map);
				readEntityReferenceList( args[8], m_HasResults , map);
				readEntityReference( args[9], m_SharedPlacement, map);
			}
			void IfcStructuralAnalysisModel::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcSystem::setInverseCounterparts(ptr_self_entity);
			}
			void IfcStructuralAnalysisModel::unlinkSelf()
			{
				IfcSystem::unlinkSelf();
			}
	}
}
