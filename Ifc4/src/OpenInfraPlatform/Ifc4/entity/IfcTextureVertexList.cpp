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
#include "include/IfcParameterValue.h"
#include "include/IfcTextureVertexList.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcTextureVertexList 
		IfcTextureVertexList::IfcTextureVertexList() { m_entity_enum = IFCTEXTUREVERTEXLIST; }
		IfcTextureVertexList::IfcTextureVertexList( int id ) { m_id = id; m_entity_enum = IFCTEXTUREVERTEXLIST; }
		IfcTextureVertexList::~IfcTextureVertexList() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcTextureVertexList::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcTextureVertexList> other = dynamic_pointer_cast<IfcTextureVertexList>(other_entity);
			if( !other) { return; }
			m_TexCoordsList = other->m_TexCoordsList;
		}
		void IfcTextureVertexList::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCTEXTUREVERTEXLIST" << "(";
			writeTypeOfRealList2D( stream, m_TexCoordsList );
			stream << ");";
		}
		void IfcTextureVertexList::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcTextureVertexList::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<1 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcTextureVertexList, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>1 ){ std::cout << "Wrong parameter count for entity IfcTextureVertexList, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readTypeOfRealList2D( args[0], m_TexCoordsList );
		}
		void IfcTextureVertexList::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
		}
		void IfcTextureVertexList::unlinkSelf()
		{
			IfcPresentationItem::unlinkSelf();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
