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
#include "include/IfcCartesianPoint.h"
#include "include/IfcCartesianTransformationOperator2DnonUniform.h"
#include "include/IfcDirection.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// ENTITY IfcCartesianTransformationOperator2DnonUniform 
		IfcCartesianTransformationOperator2DnonUniform::IfcCartesianTransformationOperator2DnonUniform() { m_entity_enum = IFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM; }
		IfcCartesianTransformationOperator2DnonUniform::IfcCartesianTransformationOperator2DnonUniform( int id ) { m_id = id; m_entity_enum = IFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM; }
		IfcCartesianTransformationOperator2DnonUniform::~IfcCartesianTransformationOperator2DnonUniform() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcCartesianTransformationOperator2DnonUniform::setEntity( shared_ptr<IfcTunnelEntity> other_entity )
		{
			shared_ptr<IfcCartesianTransformationOperator2DnonUniform> other = dynamic_pointer_cast<IfcCartesianTransformationOperator2DnonUniform>(other_entity);
			if( !other) { return; }
			m_Axis1 = other->m_Axis1;
			m_Axis2 = other->m_Axis2;
			m_LocalOrigin = other->m_LocalOrigin;
			m_Scale = other->m_Scale;
			m_Scale2 = other->m_Scale2;
		}
		void IfcCartesianTransformationOperator2DnonUniform::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCARTESIANTRANSFORMATIONOPERATOR2DNONUNIFORM" << "(";
			if( m_Axis1 ) { stream << "#" << m_Axis1->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Axis2 ) { stream << "#" << m_Axis2->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_LocalOrigin ) { stream << "#" << m_LocalOrigin->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Scale == m_Scale ){ stream << m_Scale; }
			else { stream << "$"; }
			stream << ",";
			if( m_Scale2 == m_Scale2 ){ stream << m_Scale2; }
			else { stream << "$"; }
			stream << ");";
		}
		void IfcCartesianTransformationOperator2DnonUniform::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcCartesianTransformationOperator2DnonUniform::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<5 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcCartesianTransformationOperator2DnonUniform, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcTunnelException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>5 ){ std::cout << "Wrong parameter count for entity IfcCartesianTransformationOperator2DnonUniform, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_Axis1, map );
			readEntityReference( args[1], m_Axis2, map );
			readEntityReference( args[2], m_LocalOrigin, map );
			readRealValue( args[3], m_Scale );
			readRealValue( args[4], m_Scale2 );
		}
		void IfcCartesianTransformationOperator2DnonUniform::setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self_entity )
		{
			IfcCartesianTransformationOperator2D::setInverseCounterparts( ptr_self_entity );
		}
		void IfcCartesianTransformationOperator2DnonUniform::unlinkSelf()
		{
			IfcCartesianTransformationOperator2D::unlinkSelf();
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
