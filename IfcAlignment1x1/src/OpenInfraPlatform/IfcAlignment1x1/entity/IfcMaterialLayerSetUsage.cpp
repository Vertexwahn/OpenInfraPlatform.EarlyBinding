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
#include "IfcMaterialLayerSetUsage.h"
#include "IfcMaterialLayerSet.h"
#include "IfcLayerSetDirectionEnum.h"
#include "IfcDirectionSenseEnum.h"
#include "IfcLengthMeasure.h"
#include "IfcPositiveLengthMeasure.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcMaterialLayerSetUsage
			IfcMaterialLayerSetUsage::IfcMaterialLayerSetUsage() { m_entity_enum = IFCMATERIALLAYERSETUSAGE;}
			IfcMaterialLayerSetUsage::IfcMaterialLayerSetUsage( int id ) { m_id = id; m_entity_enum = IFCMATERIALLAYERSETUSAGE;}
			IfcMaterialLayerSetUsage::~IfcMaterialLayerSetUsage() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcMaterialLayerSetUsage::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcMaterialLayerSetUsage> other = std::dynamic_pointer_cast<IfcMaterialLayerSetUsage>(other_entity);
				if( !other) { return; }
				m_ForLayerSet = other->m_ForLayerSet;
				m_LayerSetDirection = other->m_LayerSetDirection;
				m_DirectionSense = other->m_DirectionSense;
				m_OffsetFromReferenceLine = other->m_OffsetFromReferenceLine;
				m_ReferenceExtent = other->m_ReferenceExtent;
			}
			void IfcMaterialLayerSetUsage::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCMATERIALLAYERSETUSAGE" << "(";
				if( m_ForLayerSet) { stream << "#" << m_ForLayerSet->getId(); } else { stream << "$"; }
				stream << ",";
				if( m_LayerSetDirection) { m_LayerSetDirection->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_DirectionSense) { m_DirectionSense->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_OffsetFromReferenceLine) { m_OffsetFromReferenceLine->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_ReferenceExtent) { m_ReferenceExtent->getStepParameter( stream ); } else { stream << "$"; }
				stream << ");";
			}
			void IfcMaterialLayerSetUsage::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcMaterialLayerSetUsage::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<5 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcMaterialLayerSetUsage, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<5 ){ std::cout << "Wrong parameter count for entity IfcMaterialLayerSetUsage, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				readEntityReference( args[0], m_ForLayerSet, map);
				m_LayerSetDirection = IfcLayerSetDirectionEnum::readStepData( args[1] );
				m_DirectionSense = IfcDirectionSenseEnum::readStepData( args[2] );
				m_OffsetFromReferenceLine = IfcLengthMeasure::readStepData( args[3] );
				m_ReferenceExtent = IfcPositiveLengthMeasure::readStepData( args[4] );
			}
			void IfcMaterialLayerSetUsage::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcMaterialUsageDefinition::setInverseCounterparts(ptr_self_entity);
			}
			void IfcMaterialLayerSetUsage::unlinkSelf()
			{
				IfcMaterialUsageDefinition::unlinkSelf();
			}
	}
}
