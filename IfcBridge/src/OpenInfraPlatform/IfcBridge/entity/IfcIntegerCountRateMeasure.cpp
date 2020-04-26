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
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "../model/shared_ptr.h"
#include "../model/IfcBridgeException.h"
#include "include/IfcDerivedMeasureValue.h"
#include "include/IfcIntegerCountRateMeasure.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// TYPE IfcIntegerCountRateMeasure 
		IfcIntegerCountRateMeasure::IfcIntegerCountRateMeasure() {}
		IfcIntegerCountRateMeasure::IfcIntegerCountRateMeasure( int value ) { m_value = value; }
		IfcIntegerCountRateMeasure::~IfcIntegerCountRateMeasure() {}
		void IfcIntegerCountRateMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCINTEGERCOUNTRATEMEASURE("; }
			//supertype as attribute: int m_value
			stream << m_value;
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcIntegerCountRateMeasure> IfcIntegerCountRateMeasure::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcIntegerCountRateMeasure>(); }
			shared_ptr<IfcIntegerCountRateMeasure> type_object( new IfcIntegerCountRateMeasure() );
			//supertype as attribute: int m_value
			type_object->m_value = atoi( arg.c_str() );
			return type_object;
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
