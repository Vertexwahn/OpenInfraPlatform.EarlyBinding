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
#include "include/IfcBSplineSurfaceForm.h"
#include "include/IfcCartesianPoint.h"
#include "include/IfcKnotType.h"
#include "include/IfcParameterValue.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcRationalBSplineSurfaceWithKnots.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// ENTITY IfcRationalBSplineSurfaceWithKnots 
		IfcRationalBSplineSurfaceWithKnots::IfcRationalBSplineSurfaceWithKnots() { m_entity_enum = IFCRATIONALBSPLINESURFACEWITHKNOTS; }
		IfcRationalBSplineSurfaceWithKnots::IfcRationalBSplineSurfaceWithKnots( int id ) { m_id = id; m_entity_enum = IFCRATIONALBSPLINESURFACEWITHKNOTS; }
		IfcRationalBSplineSurfaceWithKnots::~IfcRationalBSplineSurfaceWithKnots() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcRationalBSplineSurfaceWithKnots::setEntity( shared_ptr<IfcTunnelEntity> other_entity )
		{
			shared_ptr<IfcRationalBSplineSurfaceWithKnots> other = dynamic_pointer_cast<IfcRationalBSplineSurfaceWithKnots>(other_entity);
			if( !other) { return; }
			m_UDegree = other->m_UDegree;
			m_VDegree = other->m_VDegree;
			m_ControlPointsList = other->m_ControlPointsList;
			m_SurfaceForm = other->m_SurfaceForm;
			m_UClosed = other->m_UClosed;
			m_VClosed = other->m_VClosed;
			m_SelfIntersect = other->m_SelfIntersect;
			m_UMultiplicities = other->m_UMultiplicities;
			m_VMultiplicities = other->m_VMultiplicities;
			m_UKnots = other->m_UKnots;
			m_VKnots = other->m_VKnots;
			m_KnotSpec = other->m_KnotSpec;
			m_WeightsData = other->m_WeightsData;
		}
		void IfcRationalBSplineSurfaceWithKnots::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCRATIONALBSPLINESURFACEWITHKNOTS" << "(";
			if( m_UDegree == m_UDegree ){ stream << m_UDegree; }
			else { stream << "$"; }
			stream << ",";
			if( m_VDegree == m_VDegree ){ stream << m_VDegree; }
			else { stream << "$"; }
			stream << ",";
			writeEntityList2D( stream, m_ControlPointsList );
			stream << ",";
			if( m_SurfaceForm ) { m_SurfaceForm->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_UClosed == false ) { stream << ".F."; }
			else if( m_UClosed == true ) { stream << ".T."; }
			stream << ",";
			if( m_VClosed == false ) { stream << ".F."; }
			else if( m_VClosed == true ) { stream << ".T."; }
			stream << ",";
			if( m_SelfIntersect == false ) { stream << ".F."; }
			else if( m_SelfIntersect == true ) { stream << ".T."; }
			stream << ",";
			writeIntList( stream, m_UMultiplicities );
			stream << ",";
			writeIntList( stream, m_VMultiplicities );
			stream << ",";
			writeTypeOfRealList( stream, m_UKnots );
			stream << ",";
			writeTypeOfRealList( stream, m_VKnots );
			stream << ",";
			if( m_KnotSpec ) { m_KnotSpec->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeDoubleList2D( stream, m_WeightsData );
			stream << ");";
		}
		void IfcRationalBSplineSurfaceWithKnots::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcRationalBSplineSurfaceWithKnots::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<13 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRationalBSplineSurfaceWithKnots, expecting 13, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcTunnelException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>13 ){ std::cout << "Wrong parameter count for entity IfcRationalBSplineSurfaceWithKnots, expecting 13, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readIntValue( args[0], m_UDegree );
			readIntValue( args[1], m_VDegree );
			readEntityReferenceList2D( args[2], m_ControlPointsList, map );
			m_SurfaceForm = IfcBSplineSurfaceForm::readStepData( args[3] );
			if( _stricmp( args[4].c_str(), ".F." ) == 0 ) { m_UClosed = false; }
			else if( _stricmp( args[4].c_str(), ".T." ) == 0 ) { m_UClosed = true; }
			if( _stricmp( args[5].c_str(), ".F." ) == 0 ) { m_VClosed = false; }
			else if( _stricmp( args[5].c_str(), ".T." ) == 0 ) { m_VClosed = true; }
			if( _stricmp( args[6].c_str(), ".F." ) == 0 ) { m_SelfIntersect = false; }
			else if( _stricmp( args[6].c_str(), ".T." ) == 0 ) { m_SelfIntersect = true; }
			readIntList(  args[7], m_UMultiplicities );
			readIntList(  args[8], m_VMultiplicities );
			readTypeOfRealList( args[9], m_UKnots );
			readTypeOfRealList( args[10], m_VKnots );
			m_KnotSpec = IfcKnotType::readStepData( args[11] );
			readDoubleList2D( args[12], m_WeightsData );
		}
		void IfcRationalBSplineSurfaceWithKnots::setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self_entity )
		{
			IfcBSplineSurfaceWithKnots::setInverseCounterparts( ptr_self_entity );
		}
		void IfcRationalBSplineSurfaceWithKnots::unlinkSelf()
		{
			IfcBSplineSurfaceWithKnots::unlinkSelf();
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
