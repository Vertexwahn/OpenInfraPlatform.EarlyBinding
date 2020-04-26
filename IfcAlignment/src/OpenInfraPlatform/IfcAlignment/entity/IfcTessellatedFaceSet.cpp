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

#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Exception.h"
#include "OpenInfraPlatform/IfcAlignment/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment/IfcAlignmentP6EntityEnums.h"
#include "include/IfcBoolean.h"
#include "include/IfcCartesianPointList3D.h"
#include "include/IfcIndexedColourMap.h"
#include "include/IfcIndexedTextureMap.h"
#include "include/IfcParameterValue.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"
#include "include/IfcTessellatedFaceSet.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// ENTITY IfcTessellatedFaceSet 
		IfcTessellatedFaceSet::IfcTessellatedFaceSet() { m_entity_enum = IFCTESSELLATEDFACESET; }
		IfcTessellatedFaceSet::IfcTessellatedFaceSet( int id ) { m_id = id; m_entity_enum = IFCTESSELLATEDFACESET; }
		IfcTessellatedFaceSet::~IfcTessellatedFaceSet() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcTessellatedFaceSet::setEntity( shared_ptr<IfcAlignmentP6Entity> other_entity )
		{
			shared_ptr<IfcTessellatedFaceSet> other = dynamic_pointer_cast<IfcTessellatedFaceSet>(other_entity);
			if( !other) { return; }
			m_Coordinates = other->m_Coordinates;
			m_Normals = other->m_Normals;
			m_Closed = other->m_Closed;
		}
		void IfcTessellatedFaceSet::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCTESSELLATEDFACESET" << "(";
			if( m_Coordinates ) { stream << "#" << m_Coordinates->getId(); } else { stream << "$"; }
			stream << ",";
			writeTypeOfRealList2D( stream, m_Normals );
			stream << ",";
			if( m_Closed ) { m_Closed->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcTessellatedFaceSet::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcTessellatedFaceSet::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcTessellatedFaceSet, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignmentP6Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcTessellatedFaceSet, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_Coordinates, map );
			readTypeOfRealList2D( args[1], m_Normals );
			m_Closed = IfcBoolean::readStepData( args[2] );
		}
		void IfcTessellatedFaceSet::setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self_entity )
		{
			IfcTessellatedItem::setInverseCounterparts( ptr_self_entity );
		}
		void IfcTessellatedFaceSet::unlinkSelf()
		{
			IfcTessellatedItem::unlinkSelf();
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
