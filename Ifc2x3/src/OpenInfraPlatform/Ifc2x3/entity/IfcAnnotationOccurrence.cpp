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
#include "include/IfcAnnotationOccurrence.h"
#include "include/IfcLabel.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcPresentationStyleAssignment.h"
#include "include/IfcRepresentationItem.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcAnnotationOccurrence 
		IfcAnnotationOccurrence::IfcAnnotationOccurrence() { m_entity_enum = IFCANNOTATIONOCCURRENCE; }
		IfcAnnotationOccurrence::IfcAnnotationOccurrence( int id ) { m_id = id; m_entity_enum = IFCANNOTATIONOCCURRENCE; }
		IfcAnnotationOccurrence::~IfcAnnotationOccurrence() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcAnnotationOccurrence::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcAnnotationOccurrence> other = dynamic_pointer_cast<IfcAnnotationOccurrence>(other_entity);
			if( !other) { return; }
			m_Item = other->m_Item;
			m_Styles = other->m_Styles;
			m_Name = other->m_Name;
		}
		void IfcAnnotationOccurrence::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCANNOTATIONOCCURRENCE" << "(";
			if( m_Item ) { stream << "#" << m_Item->getId(); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_Styles );
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcAnnotationOccurrence::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcAnnotationOccurrence::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcAnnotationOccurrence, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcAnnotationOccurrence, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_Item, map );
			readEntityReferenceList( args[1], m_Styles, map );
			m_Name = IfcLabel::readStepData( args[2] );
		}
		void IfcAnnotationOccurrence::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcStyledItem::setInverseCounterparts( ptr_self_entity );
		}
		void IfcAnnotationOccurrence::unlinkSelf()
		{
			IfcStyledItem::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
