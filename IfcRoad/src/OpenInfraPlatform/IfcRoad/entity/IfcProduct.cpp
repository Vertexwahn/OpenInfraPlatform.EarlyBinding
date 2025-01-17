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
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcObjectPlacement.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcProduct.h"
#include "include/IfcProductDefinitionShape.h"
#include "include/IfcProductRepresentation.h"
#include "include/IfcRelAggregates.h"
#include "include/IfcRelAssigns.h"
#include "include/IfcRelAssignsToProduct.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelDeclares.h"
#include "include/IfcRelDefinesByObject.h"
#include "include/IfcRelDefinesByProperties.h"
#include "include/IfcRelDefinesByType.h"
#include "include/IfcRelNests.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcProduct 
		IfcProduct::IfcProduct() { m_entity_enum = IFCPRODUCT; }
		IfcProduct::IfcProduct( int id ) { m_id = id; m_entity_enum = IFCPRODUCT; }
		IfcProduct::~IfcProduct() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcProduct::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcProduct> other = dynamic_pointer_cast<IfcProduct>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_ObjectType = other->m_ObjectType;
			m_ObjectPlacement = other->m_ObjectPlacement;
			m_Representation = other->m_Representation;
		}
		void IfcProduct::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCPRODUCT" << "(";
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
			stream << ");";
		}
		void IfcProduct::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcProduct::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<7 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcProduct, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>7 ){ std::cout << "Wrong parameter count for entity IfcProduct, expecting 7, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_ObjectType = IfcLabel::readStepData( args[4] );
			readEntityReference( args[5], m_ObjectPlacement, map );
			readEntityReference( args[6], m_Representation, map );
		}
		void IfcProduct::setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self_entity )
		{
			IfcObject::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcProduct> ptr_self = dynamic_pointer_cast<IfcProduct>( ptr_self_entity );
			if( !ptr_self ) { throw IfcRoadException( "IfcProduct::setInverseCounterparts: type mismatch" ); }
			if( m_ObjectPlacement )
			{
				m_ObjectPlacement->m_PlacesObject_inverse.push_back( ptr_self );
			}
			shared_ptr<IfcProductDefinitionShape>  Representation_IfcProductDefinitionShape = dynamic_pointer_cast<IfcProductDefinitionShape>( m_Representation );
			if( Representation_IfcProductDefinitionShape )
			{
				Representation_IfcProductDefinitionShape->m_ShapeOfProduct_inverse.push_back( ptr_self );
			}
		}
		void IfcProduct::unlinkSelf()
		{
			IfcObject::unlinkSelf();
			if( m_ObjectPlacement )
			{
				std::vector<weak_ptr<IfcProduct> >& PlacesObject_inverse = m_ObjectPlacement->m_PlacesObject_inverse;
				std::vector<weak_ptr<IfcProduct> >::iterator it_PlacesObject_inverse;
				for( it_PlacesObject_inverse = PlacesObject_inverse.begin(); it_PlacesObject_inverse != PlacesObject_inverse.end(); ++it_PlacesObject_inverse)
				{
					shared_ptr<IfcProduct> self_candidate( *it_PlacesObject_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						PlacesObject_inverse.erase( it_PlacesObject_inverse );
						break;
					}
				}
			}
			shared_ptr<IfcProductDefinitionShape>  Representation_IfcProductDefinitionShape = dynamic_pointer_cast<IfcProductDefinitionShape>( m_Representation );
			if( Representation_IfcProductDefinitionShape )
			{
				std::vector<weak_ptr<IfcProduct> >& ShapeOfProduct_inverse = Representation_IfcProductDefinitionShape->m_ShapeOfProduct_inverse;
				std::vector<weak_ptr<IfcProduct> >::iterator it_ShapeOfProduct_inverse;
				for( it_ShapeOfProduct_inverse = ShapeOfProduct_inverse.begin(); it_ShapeOfProduct_inverse != ShapeOfProduct_inverse.end(); ++it_ShapeOfProduct_inverse)
				{
					shared_ptr<IfcProduct> self_candidate( *it_ShapeOfProduct_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						ShapeOfProduct_inverse.erase( it_ShapeOfProduct_inverse );
						break;
					}
				}
			}
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
