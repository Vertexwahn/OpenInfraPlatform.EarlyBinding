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
#include "include/IfcLabel.h"
#include "include/IfcNamedUnit.h"
#include "include/IfcPhysicalComplexQuantity.h"
#include "include/IfcQuantityTime.h"
#include "include/IfcText.h"
#include "include/IfcTimeMeasure.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcQuantityTime 
		IfcQuantityTime::IfcQuantityTime() { m_entity_enum = IFCQUANTITYTIME; }
		IfcQuantityTime::IfcQuantityTime( int id ) { m_id = id; m_entity_enum = IFCQUANTITYTIME; }
		IfcQuantityTime::~IfcQuantityTime() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcQuantityTime::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcQuantityTime> other = dynamic_pointer_cast<IfcQuantityTime>(other_entity);
			if( !other) { return; }
			m_Name = other->m_Name;
			m_Description = other->m_Description;
			m_Unit = other->m_Unit;
			m_TimeValue = other->m_TimeValue;
		}
		void IfcQuantityTime::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCQUANTITYTIME" << "(";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Unit ) { stream << "#" << m_Unit->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_TimeValue ) { m_TimeValue->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcQuantityTime::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcQuantityTime::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcQuantityTime, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>4 ){ std::cout << "Wrong parameter count for entity IfcQuantityTime, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Name = IfcLabel::readStepData( args[0] );
			m_Description = IfcText::readStepData( args[1] );
			readEntityReference( args[2], m_Unit, map );
			m_TimeValue = IfcTimeMeasure::readStepData( args[3] );
		}
		void IfcQuantityTime::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcPhysicalSimpleQuantity::setInverseCounterparts( ptr_self_entity );
		}
		void IfcQuantityTime::unlinkSelf()
		{
			IfcPhysicalSimpleQuantity::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
