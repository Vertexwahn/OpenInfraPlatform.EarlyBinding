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
#include "include/IfcGeometricRepresentationItem.h"
#include "include/IfcPresentationLayerAssignment.h"
#include "include/IfcStyledItem.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// ENTITY IfcGeometricRepresentationItem 
		IfcGeometricRepresentationItem::IfcGeometricRepresentationItem() { m_entity_enum = IFCGEOMETRICREPRESENTATIONITEM; }
		IfcGeometricRepresentationItem::IfcGeometricRepresentationItem( int id ) { m_id = id; m_entity_enum = IFCGEOMETRICREPRESENTATIONITEM; }
		IfcGeometricRepresentationItem::~IfcGeometricRepresentationItem() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcGeometricRepresentationItem::setEntity( shared_ptr<IfcTunnelEntity> other_entity )
		{
			shared_ptr<IfcGeometricRepresentationItem> other = dynamic_pointer_cast<IfcGeometricRepresentationItem>(other_entity);
			if( !other) { return; }
		}
		void IfcGeometricRepresentationItem::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCGEOMETRICREPRESENTATIONITEM" << "(";
			stream << ");";
		}
		void IfcGeometricRepresentationItem::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcGeometricRepresentationItem::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map )
		{
		}
		void IfcGeometricRepresentationItem::setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self_entity )
		{
			IfcRepresentationItem::setInverseCounterparts( ptr_self_entity );
		}
		void IfcGeometricRepresentationItem::unlinkSelf()
		{
			IfcRepresentationItem::unlinkSelf();
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
