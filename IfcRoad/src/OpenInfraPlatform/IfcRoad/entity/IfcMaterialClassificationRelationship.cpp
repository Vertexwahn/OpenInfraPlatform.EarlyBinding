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
#include "include/IfcClassificationSelect.h"
#include "include/IfcMaterial.h"
#include "include/IfcMaterialClassificationRelationship.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcMaterialClassificationRelationship 
		IfcMaterialClassificationRelationship::IfcMaterialClassificationRelationship() { m_entity_enum = IFCMATERIALCLASSIFICATIONRELATIONSHIP; }
		IfcMaterialClassificationRelationship::IfcMaterialClassificationRelationship( int id ) { m_id = id; m_entity_enum = IFCMATERIALCLASSIFICATIONRELATIONSHIP; }
		IfcMaterialClassificationRelationship::~IfcMaterialClassificationRelationship() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcMaterialClassificationRelationship::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcMaterialClassificationRelationship> other = dynamic_pointer_cast<IfcMaterialClassificationRelationship>(other_entity);
			if( !other) { return; }
			m_MaterialClassifications = other->m_MaterialClassifications;
			m_ClassifiedMaterial = other->m_ClassifiedMaterial;
		}
		void IfcMaterialClassificationRelationship::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCMATERIALCLASSIFICATIONRELATIONSHIP" << "(";
			writeTypeList( stream, m_MaterialClassifications, true );
			stream << ",";
			if( m_ClassifiedMaterial ) { stream << "#" << m_ClassifiedMaterial->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcMaterialClassificationRelationship::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcMaterialClassificationRelationship::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<2 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcMaterialClassificationRelationship, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>2 ){ std::cout << "Wrong parameter count for entity IfcMaterialClassificationRelationship, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readSelectList( args[0], m_MaterialClassifications, map );
			readEntityReference( args[1], m_ClassifiedMaterial, map );
		}
		void IfcMaterialClassificationRelationship::setInverseCounterparts( shared_ptr<IfcRoadEntity> )
		{
		}
		void IfcMaterialClassificationRelationship::unlinkSelf()
		{
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
