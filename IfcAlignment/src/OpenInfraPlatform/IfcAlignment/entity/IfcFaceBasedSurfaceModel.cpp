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
#include "include/IfcConnectedFaceSet.h"
#include "include/IfcFaceBasedSurfaceModel.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// ENTITY IfcFaceBasedSurfaceModel 
		IfcFaceBasedSurfaceModel::IfcFaceBasedSurfaceModel() { m_entity_enum = IFCFACEBASEDSURFACEMODEL; }
		IfcFaceBasedSurfaceModel::IfcFaceBasedSurfaceModel( int id ) { m_id = id; m_entity_enum = IFCFACEBASEDSURFACEMODEL; }
		IfcFaceBasedSurfaceModel::~IfcFaceBasedSurfaceModel() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcFaceBasedSurfaceModel::setEntity( shared_ptr<IfcAlignmentP6Entity> other_entity )
		{
			shared_ptr<IfcFaceBasedSurfaceModel> other = dynamic_pointer_cast<IfcFaceBasedSurfaceModel>(other_entity);
			if( !other) { return; }
			m_FbsmFaces = other->m_FbsmFaces;
		}
		void IfcFaceBasedSurfaceModel::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCFACEBASEDSURFACEMODEL" << "(";
			writeEntityList( stream, m_FbsmFaces );
			stream << ");";
		}
		void IfcFaceBasedSurfaceModel::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcFaceBasedSurfaceModel::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<1 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcFaceBasedSurfaceModel, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignmentP6Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>1 ){ std::cout << "Wrong parameter count for entity IfcFaceBasedSurfaceModel, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReferenceList( args[0], m_FbsmFaces, map );
		}
		void IfcFaceBasedSurfaceModel::setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self_entity )
		{
			IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
		}
		void IfcFaceBasedSurfaceModel::unlinkSelf()
		{
			IfcGeometricRepresentationItem::unlinkSelf();
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
