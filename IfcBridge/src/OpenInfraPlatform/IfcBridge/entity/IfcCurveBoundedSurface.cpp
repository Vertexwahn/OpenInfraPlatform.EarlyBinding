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
#include "include/IfcBoundaryCurve.h"
#include "include/IfcCurveBoundedSurface.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"
#include "include/IfcSurface.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcCurveBoundedSurface 
		IfcCurveBoundedSurface::IfcCurveBoundedSurface() { m_entity_enum = IFCCURVEBOUNDEDSURFACE; }
		IfcCurveBoundedSurface::IfcCurveBoundedSurface( int id ) { m_id = id; m_entity_enum = IFCCURVEBOUNDEDSURFACE; }
		IfcCurveBoundedSurface::~IfcCurveBoundedSurface() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcCurveBoundedSurface::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcCurveBoundedSurface> other = dynamic_pointer_cast<IfcCurveBoundedSurface>(other_entity);
			if( !other) { return; }
			m_BasisSurface = other->m_BasisSurface;
			m_Boundaries = other->m_Boundaries;
			m_ImplicitOuter = other->m_ImplicitOuter;
		}
		void IfcCurveBoundedSurface::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCURVEBOUNDEDSURFACE" << "(";
			if( m_BasisSurface ) { stream << "#" << m_BasisSurface->getId(); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_Boundaries );
			stream << ",";
			if( m_ImplicitOuter == false ) { stream << ".F."; }
			else if( m_ImplicitOuter == true ) { stream << ".T."; }
			stream << ");";
		}
		void IfcCurveBoundedSurface::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcCurveBoundedSurface::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcCurveBoundedSurface, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcCurveBoundedSurface, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_BasisSurface, map );
			readEntityReferenceList( args[1], m_Boundaries, map );
			if( _stricmp( args[2].c_str(), ".F." ) == 0 ) { m_ImplicitOuter = false; }
			else if( _stricmp( args[2].c_str(), ".T." ) == 0 ) { m_ImplicitOuter = true; }
		}
		void IfcCurveBoundedSurface::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			IfcBoundedSurface::setInverseCounterparts( ptr_self_entity );
		}
		void IfcCurveBoundedSurface::unlinkSelf()
		{
			IfcBoundedSurface::unlinkSelf();
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
