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
#include "include/IfcCrossSectionGeometry.h"
#include "include/IfcPolyline.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcCrossSectionGeometry 
		IfcCrossSectionGeometry::IfcCrossSectionGeometry() { m_entity_enum = IFCCROSSSECTIONGEOMETRY; }
		IfcCrossSectionGeometry::IfcCrossSectionGeometry( int id ) { m_id = id; m_entity_enum = IFCCROSSSECTIONGEOMETRY; }
		IfcCrossSectionGeometry::~IfcCrossSectionGeometry() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcCrossSectionGeometry::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcCrossSectionGeometry> other = dynamic_pointer_cast<IfcCrossSectionGeometry>(other_entity);
			if( !other) { return; }
			m_Geometry = other->m_Geometry;
		}
		void IfcCrossSectionGeometry::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCROSSSECTIONGEOMETRY" << "(";
			writeEntityList( stream, m_Geometry );
			stream << ");";
		}
		void IfcCrossSectionGeometry::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcCrossSectionGeometry::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<1 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcCrossSectionGeometry, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>1 ){ std::cout << "Wrong parameter count for entity IfcCrossSectionGeometry, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReferenceList( args[0], m_Geometry, map );
		}
		void IfcCrossSectionGeometry::setInverseCounterparts( shared_ptr<IfcRoadEntity> )
		{
		}
		void IfcCrossSectionGeometry::unlinkSelf()
		{
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
