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
#include <map>
#include "OpenInfraPlatform/Ifc4/reader/ReaderUtil.h"
#include "OpenInfraPlatform/Ifc4/writer/WriterUtil.h"
#include "OpenInfraPlatform/Ifc4/model/shared_ptr.h"
#include "OpenInfraPlatform/Ifc4/model/Ifc4Exception.h"
#include "include/IfcDerivedMeasureValue.h"
#include "include/IfcSoundPressureLevelMeasure.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		// TYPE IfcSoundPressureLevelMeasure 
		IfcSoundPressureLevelMeasure::IfcSoundPressureLevelMeasure() {}
		IfcSoundPressureLevelMeasure::IfcSoundPressureLevelMeasure( double value ) { m_value = value; }
		IfcSoundPressureLevelMeasure::~IfcSoundPressureLevelMeasure() {}
		void IfcSoundPressureLevelMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCSOUNDPRESSURELEVELMEASURE("; }
			//supertype as attribute: double m_value
			stream << m_value;
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcSoundPressureLevelMeasure> IfcSoundPressureLevelMeasure::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcSoundPressureLevelMeasure>(); }
			shared_ptr<IfcSoundPressureLevelMeasure> type_object( new IfcSoundPressureLevelMeasure() );
			//supertype as attribute: double m_value
			type_object->m_value = atof( arg.c_str() );
			return type_object;
		}
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
