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
#include "OpenInfraPlatform/IfcAlignment1x1/model/Exception.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/IfcAlignment1x1EntityEnums.h"
#include "IfcConversionBasedUnitWithOffset.h"
#include "IfcDimensionalExponents.h"
#include "IfcUnitEnum.h"
#include "IfcLabel.h"
#include "IfcMeasureWithUnit.h"
#include "IfcReal.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcConversionBasedUnitWithOffset
			IfcConversionBasedUnitWithOffset::IfcConversionBasedUnitWithOffset() { m_entity_enum = IFCCONVERSIONBASEDUNITWITHOFFSET;}
			IfcConversionBasedUnitWithOffset::IfcConversionBasedUnitWithOffset( int id ) { m_id = id; m_entity_enum = IFCCONVERSIONBASEDUNITWITHOFFSET;}
			IfcConversionBasedUnitWithOffset::~IfcConversionBasedUnitWithOffset() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcConversionBasedUnitWithOffset::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcConversionBasedUnitWithOffset> other = std::dynamic_pointer_cast<IfcConversionBasedUnitWithOffset>(other_entity);
				if( !other) { return; }
				m_Dimensions = other->m_Dimensions;
				m_UnitType = other->m_UnitType;
				m_Name = other->m_Name;
				m_ConversionFactor = other->m_ConversionFactor;
				m_ConversionOffset = other->m_ConversionOffset;
			}
			void IfcConversionBasedUnitWithOffset::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCCONVERSIONBASEDUNITWITHOFFSET" << "(";
				if( m_Dimensions) { stream << "#" << m_Dimensions->getId(); } else { stream << "$"; }
				stream << ",";
				if( m_UnitType) { m_UnitType->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Name) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_ConversionFactor) { stream << "#" << m_ConversionFactor->getId(); } else { stream << "$"; }
				stream << ",";
				if( m_ConversionOffset) { m_ConversionOffset->getStepParameter( stream ); } else { stream << "$"; }
				stream << ");";
			}
			void IfcConversionBasedUnitWithOffset::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcConversionBasedUnitWithOffset::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<5 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcConversionBasedUnitWithOffset, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<5 ){ std::cout << "Wrong parameter count for entity IfcConversionBasedUnitWithOffset, expecting 5, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				readEntityReference( args[0], m_Dimensions, map);
				m_UnitType = IfcUnitEnum::readStepData( args[1] );
				m_Name = IfcLabel::readStepData( args[2] );
				readEntityReference( args[3], m_ConversionFactor, map);
				m_ConversionOffset = IfcReal::readStepData( args[4] );
			}
			void IfcConversionBasedUnitWithOffset::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcConversionBasedUnit::setInverseCounterparts(ptr_self_entity);
			}
			void IfcConversionBasedUnitWithOffset::unlinkSelf()
			{
				IfcConversionBasedUnit::unlinkSelf();
			}
	}
}
