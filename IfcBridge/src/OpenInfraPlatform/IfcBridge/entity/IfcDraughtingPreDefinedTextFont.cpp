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

#include "model/IfcBridgeException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcBridgeEntityEnums.h"
#include "include/IfcDraughtingPreDefinedTextFont.h"
#include "include/IfcLabel.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcDraughtingPreDefinedTextFont 
		IfcDraughtingPreDefinedTextFont::IfcDraughtingPreDefinedTextFont() { m_entity_enum = IFCDRAUGHTINGPREDEFINEDTEXTFONT; }
		IfcDraughtingPreDefinedTextFont::IfcDraughtingPreDefinedTextFont( int id ) { m_id = id; m_entity_enum = IFCDRAUGHTINGPREDEFINEDTEXTFONT; }
		IfcDraughtingPreDefinedTextFont::~IfcDraughtingPreDefinedTextFont() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcDraughtingPreDefinedTextFont::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcDraughtingPreDefinedTextFont> other = dynamic_pointer_cast<IfcDraughtingPreDefinedTextFont>(other_entity);
			if( !other) { return; }
			m_Name = other->m_Name;
		}
		void IfcDraughtingPreDefinedTextFont::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCDRAUGHTINGPREDEFINEDTEXTFONT" << "(";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcDraughtingPreDefinedTextFont::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcDraughtingPreDefinedTextFont::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<1 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcDraughtingPreDefinedTextFont, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>1 ){ std::cout << "Wrong parameter count for entity IfcDraughtingPreDefinedTextFont, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Name = IfcLabel::readStepData( args[0] );
		}
		void IfcDraughtingPreDefinedTextFont::setInverseCounterparts( shared_ptr<IfcBridgeEntity> ptr_self_entity )
		{
			IfcPreDefinedTextFont::setInverseCounterparts( ptr_self_entity );
		}
		void IfcDraughtingPreDefinedTextFont::unlinkSelf()
		{
			IfcPreDefinedTextFont::unlinkSelf();
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
