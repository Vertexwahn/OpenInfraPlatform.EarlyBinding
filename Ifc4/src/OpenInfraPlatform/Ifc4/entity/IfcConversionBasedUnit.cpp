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
#include "include/IfcConversionBasedUnit.h"
#include "include/IfcDimensionalExponents.h"
#include "include/IfcExternalReferenceRelationship.h"
#include "include/IfcLabel.h"
#include "include/IfcMeasureWithUnit.h"
#include "include/IfcUnitEnum.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// ENTITY IfcConversionBasedUnit 
		IfcConversionBasedUnit::IfcConversionBasedUnit() { m_entity_enum = IFCCONVERSIONBASEDUNIT; }
		IfcConversionBasedUnit::IfcConversionBasedUnit( int id ) { m_id = id; m_entity_enum = IFCCONVERSIONBASEDUNIT; }
		IfcConversionBasedUnit::~IfcConversionBasedUnit() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcConversionBasedUnit::setEntity( shared_ptr<Ifc4Entity> other_entity )
		{
			shared_ptr<IfcConversionBasedUnit> other = dynamic_pointer_cast<IfcConversionBasedUnit>(other_entity);
			if( !other) { return; }
			m_Dimensions = other->m_Dimensions;
			m_UnitType = other->m_UnitType;
			m_Name = other->m_Name;
			m_ConversionFactor = other->m_ConversionFactor;
		}
		void IfcConversionBasedUnit::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCCONVERSIONBASEDUNIT" << "(";
			if( m_Dimensions ) { stream << "#" << m_Dimensions->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_UnitType ) { m_UnitType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ConversionFactor ) { stream << "#" << m_ConversionFactor->getId(); } else { stream << "$"; }
			stream << ");";
		}
		void IfcConversionBasedUnit::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcConversionBasedUnit::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcConversionBasedUnit, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc4Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>4 ){ std::cout << "Wrong parameter count for entity IfcConversionBasedUnit, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			readEntityReference( args[0], m_Dimensions, map );
			m_UnitType = IfcUnitEnum::readStepData( args[1] );
			m_Name = IfcLabel::readStepData( args[2] );
			readEntityReference( args[3], m_ConversionFactor, map );
		}
		void IfcConversionBasedUnit::setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self_entity )
		{
			IfcNamedUnit::setInverseCounterparts( ptr_self_entity );
		}
		void IfcConversionBasedUnit::unlinkSelf()
		{
			IfcNamedUnit::unlinkSelf();
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
