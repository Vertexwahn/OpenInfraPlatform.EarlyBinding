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

#include "model/IfcBridgeException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcBridgeEntityEnums.h"
#include "include/IfcLabel.h"
#include "include/IfcProductDefinitionShape.h"
#include "include/IfcShapeAspect.h"
#include "include/IfcShapeModel.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcShapeAspect 
		IfcShapeAspect::IfcShapeAspect() { m_entity_enum = IFCSHAPEASPECT; }
		IfcShapeAspect::IfcShapeAspect( int id ) { m_id = id; m_entity_enum = IFCSHAPEASPECT; }
		IfcShapeAspect::~IfcShapeAspect() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcShapeAspect::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcShapeAspect> other = dynamic_pointer_cast<IfcShapeAspect>(other_entity);
			if( !other) { return; }
			m_ShapeRepresentations = other->m_ShapeRepresentations;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_ProductDefinitional = other->m_ProductDefinitional;
			m_PartOfProductDefinitionShape = other->m_PartOfProductDefinitionShape;
		}
		void IfcShapeAspect::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCSHAPEASPECT" << "(";
			writeEntityList( stream, m_ShapeRepresentations );
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ProductDefinitional == false ) { stream << ".F."; }
			else if( m_ProductDefinitional == true ) { stream << ".T."; }
			stream << ",";
			if( m_PartOfProductDefinitionShape ) { stream << "#" << m_PartOfProductDefinitionShape->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcShapeAspect::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcShapeAspect::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<5 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcShapeAspect, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>5 ){ std::cout << "Wrong parameter count for entity IfcShapeAspect, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReferenceList( args[0], m_ShapeRepresentations, map );
			m_Name = IfcLabel::readStepData( args[1] );
			m_Description = IfcText::readStepData( args[2] );
			if( _stricmp( args[3].c_str(), ".F." ) == 0 ) { m_ProductDefinitional = false; }
			else if( _stricmp( args[3].c_str(), ".T." ) == 0 ) { m_ProductDefinitional = true; }
			readEntityReference( args[4], m_PartOfProductDefinitionShape, map );
		}
		void IfcShapeAspect::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			shared_ptr<IfcShapeAspect> ptr_self = dynamic_pointer_cast<IfcShapeAspect>( ptr_self_entity );
			if( !ptr_self ) { throw IfcBridgeException( "IfcShapeAspect::setInverseCounterparts: type mismatch" ); }
			if( m_PartOfProductDefinitionShape )
			{
				m_PartOfProductDefinitionShape->m_HasShapeAspects_inverse.push_back( ptr_self );
			}
			for( int i=0; i<m_ShapeRepresentations.size(); ++i )
			{
				if( m_ShapeRepresentations[i] )
				{
					m_ShapeRepresentations[i]->m_OfShapeAspect_inverse.push_back( ptr_self );
				}
			}
		}
		void IfcShapeAspect::unlinkSelf()
		{
			if( m_PartOfProductDefinitionShape )
			{
				std::vector<weak_ptr<IfcShapeAspect> >& HasShapeAspects_inverse = m_PartOfProductDefinitionShape->m_HasShapeAspects_inverse;
				std::vector<weak_ptr<IfcShapeAspect> >::iterator it_HasShapeAspects_inverse;
				for( it_HasShapeAspects_inverse = HasShapeAspects_inverse.begin(); it_HasShapeAspects_inverse != HasShapeAspects_inverse.end(); ++it_HasShapeAspects_inverse)
				{
					shared_ptr<IfcShapeAspect> self_candidate( *it_HasShapeAspects_inverse );
					if( self_candidate->getId() == this->getId() )
					{
						HasShapeAspects_inverse.erase( it_HasShapeAspects_inverse );
						break;
					}
				}
			}
			for( int i=0; i<m_ShapeRepresentations.size(); ++i )
			{
				if( m_ShapeRepresentations[i] )
				{
					std::vector<weak_ptr<IfcShapeAspect> >& OfShapeAspect_inverse = m_ShapeRepresentations[i]->m_OfShapeAspect_inverse;
					std::vector<weak_ptr<IfcShapeAspect> >::iterator it_OfShapeAspect_inverse;
					for( it_OfShapeAspect_inverse = OfShapeAspect_inverse.begin(); it_OfShapeAspect_inverse != OfShapeAspect_inverse.end(); ++it_OfShapeAspect_inverse)
					{
						shared_ptr<IfcShapeAspect> self_candidate( *it_OfShapeAspect_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							OfShapeAspect_inverse.erase( it_OfShapeAspect_inverse );
							break;
						}
					}
				}
			}
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
