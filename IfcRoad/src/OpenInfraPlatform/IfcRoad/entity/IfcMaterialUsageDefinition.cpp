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
#include "include/IfcMaterialUsageDefinition.h"
#include "include/IfcRelAssociatesMaterial.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcMaterialUsageDefinition 
		IfcMaterialUsageDefinition::IfcMaterialUsageDefinition() { m_entity_enum = IFCMATERIALUSAGEDEFINITION; }
		IfcMaterialUsageDefinition::IfcMaterialUsageDefinition( int id ) { m_id = id; m_entity_enum = IFCMATERIALUSAGEDEFINITION; }
		IfcMaterialUsageDefinition::~IfcMaterialUsageDefinition() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcMaterialUsageDefinition::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcMaterialUsageDefinition> other = dynamic_pointer_cast<IfcMaterialUsageDefinition>(other_entity);
			if( !other) { return; }
		}
		void IfcMaterialUsageDefinition::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCMATERIALUSAGEDEFINITION" << "(";
			stream << ");";
		}
		void IfcMaterialUsageDefinition::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcMaterialUsageDefinition::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
		}
		void IfcMaterialUsageDefinition::setInverseCounterparts( shared_ptr<IfcRoadEntity> )
		{
		}
		void IfcMaterialUsageDefinition::unlinkSelf()
		{
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
