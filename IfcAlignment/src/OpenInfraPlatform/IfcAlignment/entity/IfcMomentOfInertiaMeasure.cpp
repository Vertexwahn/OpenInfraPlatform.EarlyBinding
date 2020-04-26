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
#include "OpenInfraPlatform/IfcAlignment/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Exception.h"
#include "include/IfcDerivedMeasureValue.h"
#include "include/IfcMomentOfInertiaMeasure.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// TYPE IfcMomentOfInertiaMeasure 
		IfcMomentOfInertiaMeasure::IfcMomentOfInertiaMeasure() {}
		IfcMomentOfInertiaMeasure::IfcMomentOfInertiaMeasure( double value ) { m_value = value; }
		IfcMomentOfInertiaMeasure::~IfcMomentOfInertiaMeasure() {}
		void IfcMomentOfInertiaMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCMOMENTOFINERTIAMEASURE("; }
			//supertype as attribute: double m_value
			stream << m_value;
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcMomentOfInertiaMeasure> IfcMomentOfInertiaMeasure::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcMomentOfInertiaMeasure>(); }
			shared_ptr<IfcMomentOfInertiaMeasure> type_object( new IfcMomentOfInertiaMeasure() );
			//supertype as attribute: double m_value
			type_object->m_value = atof( arg.c_str() );
			return type_object;
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
