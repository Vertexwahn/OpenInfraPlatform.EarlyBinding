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
#include "include/IfcLabel.h"
#include "include/IfcMaterial.h"
#include "include/IfcMaterialProfile.h"
#include "include/IfcMaterialProfileSet.h"
#include "include/IfcMaterialProperties.h"
#include "include/IfcProfileDef.h"
#include "include/IfcRelAssociatesMaterial.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcMaterialProfile 
		IfcMaterialProfile::IfcMaterialProfile() { m_entity_enum = IFCMATERIALPROFILE; }
		IfcMaterialProfile::IfcMaterialProfile( int id ) { m_id = id; m_entity_enum = IFCMATERIALPROFILE; }
		IfcMaterialProfile::~IfcMaterialProfile() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcMaterialProfile::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcMaterialProfile> other = dynamic_pointer_cast<IfcMaterialProfile>(other_entity);
			if( !other) { return; }
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_Material = other->m_Material;
			m_Profile = other->m_Profile;
			m_Priority = other->m_Priority;
			m_Category = other->m_Category;
		}
		void IfcMaterialProfile::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCMATERIALPROFILE" << "(";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Material ) { stream << "#" << m_Material->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Profile ) { stream << "#" << m_Profile->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Priority == m_Priority ){ stream << m_Priority; }
			else { stream << "$"; }
			stream << ",";
			if( m_Category ) { m_Category->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcMaterialProfile::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcMaterialProfile::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcMaterialProfile, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcMaterialProfile, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Name = IfcLabel::readStepData( args[0] );
			m_Description = IfcText::readStepData( args[1] );
			readEntityReference( args[2], m_Material, map );
			readEntityReference( args[3], m_Profile, map );
			readIntValue( args[4], m_Priority );
			m_Category = IfcLabel::readStepData( args[5] );
		}
		void IfcMaterialProfile::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcMaterialDefinition::setInverseCounterparts( ptr_self_entity );
		}
		void IfcMaterialProfile::unlinkSelf()
		{
			IfcMaterialDefinition::unlinkSelf();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
