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
#include "include/IfcBoolean.h"
#include "include/IfcFaceBound.h"
#include "include/IfcFaceSurface.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"
#include "include/IfcSurface.h"
#include "include/IfcTextureMap.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcFaceSurface 
		IfcFaceSurface::IfcFaceSurface() { m_entity_enum = IFCFACESURFACE; }
		IfcFaceSurface::IfcFaceSurface( int id ) { m_id = id; m_entity_enum = IFCFACESURFACE; }
		IfcFaceSurface::~IfcFaceSurface() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcFaceSurface::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcFaceSurface> other = dynamic_pointer_cast<IfcFaceSurface>(other_entity);
			if( !other) { return; }
			m_Bounds = other->m_Bounds;
			m_FaceSurface = other->m_FaceSurface;
			m_SameSense = other->m_SameSense;
		}
		void IfcFaceSurface::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCFACESURFACE" << "(";
			writeEntityList( stream, m_Bounds );
			stream << ",";
			if( m_FaceSurface ) { stream << "#" << m_FaceSurface->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_SameSense ) { m_SameSense->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcFaceSurface::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcFaceSurface::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcFaceSurface, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcFaceSurface, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReferenceList( args[0], m_Bounds, map );
			readEntityReference( args[1], m_FaceSurface, map );
			m_SameSense = IfcBoolean::readStepData( args[2] );
		}
		void IfcFaceSurface::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcFace::setInverseCounterparts( ptr_self_entity );
		}
		void IfcFaceSurface::unlinkSelf()
		{
			IfcFace::unlinkSelf();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
