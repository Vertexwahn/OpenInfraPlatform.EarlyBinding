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

#include "model/IfcTunnelException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcTunnelEntityEnums.h"
#include "include/IfcSurfaceStyleWithTextures.h"
#include "include/IfcSurfaceTexture.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// ENTITY IfcSurfaceStyleWithTextures 
		IfcSurfaceStyleWithTextures::IfcSurfaceStyleWithTextures() { m_entity_enum = IFCSURFACESTYLEWITHTEXTURES; }
		IfcSurfaceStyleWithTextures::IfcSurfaceStyleWithTextures( int id ) { m_id = id; m_entity_enum = IFCSURFACESTYLEWITHTEXTURES; }
		IfcSurfaceStyleWithTextures::~IfcSurfaceStyleWithTextures() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcSurfaceStyleWithTextures::setEntity( shared_ptr<IfcTunnelEntity> other_entity )
		{
			shared_ptr<IfcSurfaceStyleWithTextures> other = dynamic_pointer_cast<IfcSurfaceStyleWithTextures>(other_entity);
			if( !other) { return; }
			m_Textures = other->m_Textures;
		}
		void IfcSurfaceStyleWithTextures::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCSURFACESTYLEWITHTEXTURES" << "(";
			writeEntityList( stream, m_Textures );
			stream << ");";
		}
		void IfcSurfaceStyleWithTextures::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcSurfaceStyleWithTextures::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<1 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcSurfaceStyleWithTextures, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcTunnelException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>1 ){ std::cout << "Wrong parameter count for entity IfcSurfaceStyleWithTextures, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReferenceList( args[0], m_Textures, map );
		}
		void IfcSurfaceStyleWithTextures::setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self_entity )
		{
			IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
			shared_ptr<IfcSurfaceStyleWithTextures> ptr_self = dynamic_pointer_cast<IfcSurfaceStyleWithTextures>( ptr_self_entity );
			if( !ptr_self ) { throw IfcTunnelException( "IfcSurfaceStyleWithTextures::setInverseCounterparts: type mismatch" ); }
			for( int i=0; i<m_Textures.size(); ++i )
			{
				if( m_Textures[i] )
				{
					m_Textures[i]->m_UsedInStyles_inverse.push_back( ptr_self );
				}
			}
		}
		void IfcSurfaceStyleWithTextures::unlinkSelf()
		{
			IfcPresentationItem::unlinkSelf();
			for( int i=0; i<m_Textures.size(); ++i )
			{
				if( m_Textures[i] )
				{
					std::vector<weak_ptr<IfcSurfaceStyleWithTextures> >& UsedInStyles_inverse = m_Textures[i]->m_UsedInStyles_inverse;
					std::vector<weak_ptr<IfcSurfaceStyleWithTextures> >::iterator it_UsedInStyles_inverse;
					for( it_UsedInStyles_inverse = UsedInStyles_inverse.begin(); it_UsedInStyles_inverse != UsedInStyles_inverse.end(); ++it_UsedInStyles_inverse)
					{
						shared_ptr<IfcSurfaceStyleWithTextures> self_candidate( *it_UsedInStyles_inverse );
						if( self_candidate->getId() == this->getId() )
						{
							UsedInStyles_inverse.erase( it_UsedInStyles_inverse );
							break;
						}
					}
				}
			}
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
