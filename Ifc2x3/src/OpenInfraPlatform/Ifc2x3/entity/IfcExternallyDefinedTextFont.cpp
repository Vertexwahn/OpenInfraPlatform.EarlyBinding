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
#include "include/IfcExternallyDefinedTextFont.h"
#include "include/IfcIdentifier.h"
#include "include/IfcLabel.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcExternallyDefinedTextFont 
		IfcExternallyDefinedTextFont::IfcExternallyDefinedTextFont() { m_entity_enum = IFCEXTERNALLYDEFINEDTEXTFONT; }
		IfcExternallyDefinedTextFont::IfcExternallyDefinedTextFont( int id ) { m_id = id; m_entity_enum = IFCEXTERNALLYDEFINEDTEXTFONT; }
		IfcExternallyDefinedTextFont::~IfcExternallyDefinedTextFont() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcExternallyDefinedTextFont::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcExternallyDefinedTextFont> other = dynamic_pointer_cast<IfcExternallyDefinedTextFont>(other_entity);
			if( !other) { return; }
			m_Location = other->m_Location;
			m_ItemReference = other->m_ItemReference;
			m_Name = other->m_Name;
		}
		void IfcExternallyDefinedTextFont::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCEXTERNALLYDEFINEDTEXTFONT" << "(";
			if( m_Location ) { m_Location->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ItemReference ) { m_ItemReference->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcExternallyDefinedTextFont::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcExternallyDefinedTextFont::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcExternallyDefinedTextFont, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcExternallyDefinedTextFont, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Location = IfcLabel::readStepData( args[0] );
			m_ItemReference = IfcIdentifier::readStepData( args[1] );
			m_Name = IfcLabel::readStepData( args[2] );
		}
		void IfcExternallyDefinedTextFont::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcExternalReference::setInverseCounterparts( ptr_self_entity );
		}
		void IfcExternallyDefinedTextFont::unlinkSelf()
		{
			IfcExternalReference::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
