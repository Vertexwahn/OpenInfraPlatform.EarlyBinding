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
#include "include/IfcElementQuantity.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcPhysicalQuantity.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelDeclares.h"
#include "include/IfcRelDefinesByProperties.h"
#include "include/IfcRelDefinesByTemplate.h"
#include "include/IfcText.h"
#include "include/IfcTypeObject.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcElementQuantity 
		IfcElementQuantity::IfcElementQuantity() { m_entity_enum = IFCELEMENTQUANTITY; }
		IfcElementQuantity::IfcElementQuantity( int id ) { m_id = id; m_entity_enum = IFCELEMENTQUANTITY; }
		IfcElementQuantity::~IfcElementQuantity() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcElementQuantity::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcElementQuantity> other = dynamic_pointer_cast<IfcElementQuantity>(other_entity);
			if( !other) { return; }
			m_GlobalId = other->m_GlobalId;
			m_OwnerHistory = other->m_OwnerHistory;
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_MethodOfMeasurement = other->m_MethodOfMeasurement;
			m_Quantities = other->m_Quantities;
		}
		void IfcElementQuantity::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCELEMENTQUANTITY" << "(";
			if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_MethodOfMeasurement ) { m_MethodOfMeasurement->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeEntityList( stream, m_Quantities );
			stream << ");";
		}
		void IfcElementQuantity::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcElementQuantity::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<6 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcElementQuantity, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>6 ){ std::cout << "Wrong parameter count for entity IfcElementQuantity, expecting 6, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_GlobalId = IfcGloballyUniqueId::readStepData( args[0] );
			readEntityReference( args[1], m_OwnerHistory, map );
			m_Name = IfcLabel::readStepData( args[2] );
			m_Description = IfcText::readStepData( args[3] );
			m_MethodOfMeasurement = IfcLabel::readStepData( args[4] );
			readEntityReferenceList( args[5], m_Quantities, map );
		}
		void IfcElementQuantity::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcQuantitySet::setInverseCounterparts( ptr_self_entity );
		}
		void IfcElementQuantity::unlinkSelf()
		{
			IfcQuantitySet::unlinkSelf();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
