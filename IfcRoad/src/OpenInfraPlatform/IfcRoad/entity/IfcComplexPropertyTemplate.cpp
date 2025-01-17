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
#include "include/IfcComplexPropertyTemplate.h"
#include "include/IfcComplexPropertyTemplateTypeEnum.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcPropertySetTemplate.h"
#include "include/IfcPropertyTemplate.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelDeclares.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcComplexPropertyTemplate 
		IfcComplexPropertyTemplate::IfcComplexPropertyTemplate() { m_entity_enum = IFCCOMPLEXPROPERTYTEMPLATE; }
		IfcComplexPropertyTemplate::IfcComplexPropertyTemplate( int id ) { m_id = id; m_entity_enum = IFCCOMPLEXPROPERTYTEMPLATE; }
		IfcComplexPropertyTemplate::~IfcComplexPropertyTemplate() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcComplexPropertyTemplate::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcComplexPropertyTemplate> other = dynamic_pointer_cast<IfcComplexPropertyTemplate>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_UsageName = other->m_UsageName;
			m_TemplateType = other->m_TemplateType;
			m_HasPropertyTemplates = other->m_HasPropertyTemplates;
		}
		void IfcComplexPropertyTemplate::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCOMPLEXPROPERTYTEMPLATE" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_UsageName ) { m_UsageName->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_TemplateType ) { m_TemplateType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_HasPropertyTemplates );
			stream << ");";
		}
		void IfcComplexPropertyTemplate::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcComplexPropertyTemplate::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<7 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcComplexPropertyTemplate, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>7 ){ std::cout << "Wrong parameter count for entity IfcComplexPropertyTemplate, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_UsageName = IfcLabel::readStepData( args[4] );
			m_TemplateType = IfcComplexPropertyTemplateTypeEnum::readStepData( args[5] );
			readEntityReferenceList( args[6], m_HasPropertyTemplates, map );
		}
		void IfcComplexPropertyTemplate::setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self_entity )
		{
			IfcPropertyTemplate::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcComplexPropertyTemplate> ptr_self = dynamic_pointer_cast<IfcComplexPropertyTemplate>( ptr_self_entity );
			if( !ptr_self ) { throw IfcRoadException( "IfcComplexPropertyTemplate::setInverseCounterparts: type mismatch" ); }
			for( int i=0; i<m_HasPropertyTemplates.size(); ++i )
			{
				if( m_HasPropertyTemplates[i] )
				{
					m_HasPropertyTemplates[i]->m_PartOfComplexTemplate_inverse.push_back( ptr_self );
				}
			}
		}
		void IfcComplexPropertyTemplate::unlinkSelf()
		{
			IfcPropertyTemplate::unlinkSelf();
			for( int i=0; i<m_HasPropertyTemplates.size(); ++i )
			{
				if( m_HasPropertyTemplates[i] )
				{
					std::vector<weak_ptr<IfcComplexPropertyTemplate> >& PartOfComplexTemplate_inverse = m_HasPropertyTemplates[i]->m_PartOfComplexTemplate_inverse;
					std::vector<weak_ptr<IfcComplexPropertyTemplate> >::iterator it_PartOfComplexTemplate_inverse;
					for( it_PartOfComplexTemplate_inverse = PartOfComplexTemplate_inverse.begin(); it_PartOfComplexTemplate_inverse != PartOfComplexTemplate_inverse.end(); ++it_PartOfComplexTemplate_inverse)
					{
						shared_ptr<IfcComplexPropertyTemplate> self_candidate( *it_PartOfComplexTemplate_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							PartOfComplexTemplate_inverse.erase( it_PartOfComplexTemplate_inverse );
							break;
						}
					}
				}
			}
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
