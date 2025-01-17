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

#include "model/Ifc2x3Exception.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "Ifc2x3EntityEnums.h"
#include "include/IfcAxis2Placement2D.h"
#include "include/IfcLShapeProfileDef.h"
#include "include/IfcLabel.h"
#include "include/IfcPlaneAngleMeasure.h"
#include "include/IfcPositiveLengthMeasure.h"
#include "include/IfcProfileTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcLShapeProfileDef 
		IfcLShapeProfileDef::IfcLShapeProfileDef() { m_entity_enum = IFCLSHAPEPROFILEDEF; }
		IfcLShapeProfileDef::IfcLShapeProfileDef( int id ) { m_id = id; m_entity_enum = IFCLSHAPEPROFILEDEF; }
		IfcLShapeProfileDef::~IfcLShapeProfileDef() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcLShapeProfileDef::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcLShapeProfileDef> other = dynamic_pointer_cast<IfcLShapeProfileDef>(other_entity);
			if( !other) { return; }
			m_ProfileType = other->m_ProfileType;
			m_ProfileName = other->m_ProfileName;
			m_Position = other->m_Position;
			m_Depth = other->m_Depth;
			m_Width = other->m_Width;
			m_Thickness = other->m_Thickness;
			m_FilletRadius = other->m_FilletRadius;
			m_EdgeRadius = other->m_EdgeRadius;
			m_LegSlope = other->m_LegSlope;
			m_CentreOfGravityInX = other->m_CentreOfGravityInX;
			m_CentreOfGravityInY = other->m_CentreOfGravityInY;
		}
		void IfcLShapeProfileDef::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCLSHAPEPROFILEDEF" << "(";
			if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Position ) { stream << "#" << m_Position->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Depth ) { m_Depth->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Width ) { m_Width->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Thickness ) { m_Thickness->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_FilletRadius ) { m_FilletRadius->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_EdgeRadius ) { m_EdgeRadius->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_LegSlope ) { m_LegSlope->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_CentreOfGravityInX ) { m_CentreOfGravityInX->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_CentreOfGravityInY ) { m_CentreOfGravityInY->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcLShapeProfileDef::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcLShapeProfileDef::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<11 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcLShapeProfileDef, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>11 ){ std::cout << "Wrong parameter count for entity IfcLShapeProfileDef, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_ProfileType = IfcProfileTypeEnum::readStepData( args[0] );
			m_ProfileName = IfcLabel::readStepData( args[1] );
			readEntityReference( args[2], m_Position, map );
			m_Depth = IfcPositiveLengthMeasure::readStepData( args[3] );
			m_Width = IfcPositiveLengthMeasure::readStepData( args[4] );
			m_Thickness = IfcPositiveLengthMeasure::readStepData( args[5] );
			m_FilletRadius = IfcPositiveLengthMeasure::readStepData( args[6] );
			m_EdgeRadius = IfcPositiveLengthMeasure::readStepData( args[7] );
			m_LegSlope = IfcPlaneAngleMeasure::readStepData( args[8] );
			m_CentreOfGravityInX = IfcPositiveLengthMeasure::readStepData( args[9] );
			m_CentreOfGravityInY = IfcPositiveLengthMeasure::readStepData( args[10] );
		}
		void IfcLShapeProfileDef::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcParameterizedProfileDef::setInverseCounterparts( ptr_self_entity );
		}
		void IfcLShapeProfileDef::unlinkSelf()
		{
			IfcParameterizedProfileDef::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
