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
#include "include/IfcExternalReferenceRelationship.h"
#include "include/IfcMaterialDefinition.h"
#include "include/IfcMaterialProperties.h"
#include "include/IfcRelAssociatesMaterial.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcMaterialDefinition 
		IfcMaterialDefinition::IfcMaterialDefinition() { m_entity_enum = IFCMATERIALDEFINITION; }
		IfcMaterialDefinition::IfcMaterialDefinition( int id ) { m_id = id; m_entity_enum = IFCMATERIALDEFINITION; }
		IfcMaterialDefinition::~IfcMaterialDefinition() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcMaterialDefinition::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcMaterialDefinition> other = dynamic_pointer_cast<IfcMaterialDefinition>(other_entity);
			if( !other) { return; }
		}
		void IfcMaterialDefinition::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCMATERIALDEFINITION" << "(";
			stream << ");";
		}
		void IfcMaterialDefinition::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcMaterialDefinition::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
		}
		void IfcMaterialDefinition::setInverseCounterparts( shared_ptr<Ifc4Entity> )
		{
		}
		void IfcMaterialDefinition::unlinkSelf()
		{
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
