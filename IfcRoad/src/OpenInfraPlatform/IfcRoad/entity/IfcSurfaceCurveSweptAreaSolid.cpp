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
#include "include/IfcAxis2Placement3D.h"
#include "include/IfcCurve.h"
#include "include/IfcParameterValue.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcProfileDef.h"
#include "include/IfcStyledItem.h"
#include "include/IfcSurface.h"
#include "include/IfcSurfaceCurveSweptAreaSolid.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcSurfaceCurveSweptAreaSolid 
		IfcSurfaceCurveSweptAreaSolid::IfcSurfaceCurveSweptAreaSolid() { m_entity_enum = IFCSURFACECURVESWEPTAREASOLID; }
		IfcSurfaceCurveSweptAreaSolid::IfcSurfaceCurveSweptAreaSolid( int id ) { m_id = id; m_entity_enum = IFCSURFACECURVESWEPTAREASOLID; }
		IfcSurfaceCurveSweptAreaSolid::~IfcSurfaceCurveSweptAreaSolid() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcSurfaceCurveSweptAreaSolid::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcSurfaceCurveSweptAreaSolid> other = dynamic_pointer_cast<IfcSurfaceCurveSweptAreaSolid>(other_entity);
			if( !other) { return; }
			m_SweptArea = other->m_SweptArea;
			m_Position = other->m_Position;
			m_Directrix = other->m_Directrix;
			m_StartParam = other->m_StartParam;
			m_EndParam = other->m_EndParam;
			m_ReferenceSurface = other->m_ReferenceSurface;
		}
		void IfcSurfaceCurveSweptAreaSolid::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCSURFACECURVESWEPTAREASOLID" << "(";
			if( m_SweptArea ) { stream << "#" << m_SweptArea->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Position ) { stream << "#" << m_Position->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Directrix ) { stream << "#" << m_Directrix->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_StartParam ) { m_StartParam->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_EndParam ) { m_EndParam->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ReferenceSurface ) { stream << "#" << m_ReferenceSurface->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcSurfaceCurveSweptAreaSolid::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcSurfaceCurveSweptAreaSolid::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcSurfaceCurveSweptAreaSolid, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcSurfaceCurveSweptAreaSolid, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_SweptArea, map );
			readEntityReference( args[1], m_Position, map );
			readEntityReference( args[2], m_Directrix, map );
			m_StartParam = IfcParameterValue::readStepData( args[3] );
			m_EndParam = IfcParameterValue::readStepData( args[4] );
			readEntityReference( args[5], m_ReferenceSurface, map );
		}
		void IfcSurfaceCurveSweptAreaSolid::setInverseCounterparts( shared_ptr<IfcRoadEntity> ptr_self_entity )
		{
			IfcSweptAreaSolid::setInverseCounterparts( ptr_self_entity );
		}
		void IfcSurfaceCurveSweptAreaSolid::unlinkSelf()
		{
			IfcSweptAreaSolid::unlinkSelf();
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
