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
#include "include/IfcElectricGeneratorTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// TYPE IfcElectricGeneratorTypeEnum 
		IfcElectricGeneratorTypeEnum::IfcElectricGeneratorTypeEnum() {}
		IfcElectricGeneratorTypeEnum::~IfcElectricGeneratorTypeEnum() {}
		void IfcElectricGeneratorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCELECTRICGENERATORTYPEENUM("; }
			if( m_enum == ENUM_CHP )
			{
				stream << ".CHP.";
			}
			else if( m_enum == ENUM_ENGINEGENERATOR )
			{
				stream << ".ENGINEGENERATOR.";
			}
			else if( m_enum == ENUM_STANDALONE )
			{
				stream << ".STANDALONE.";
			}
			else if( m_enum == ENUM_USERDEFINED )
			{
				stream << ".USERDEFINED.";
			}
			else if( m_enum == ENUM_NOTDEFINED )
			{
				stream << ".NOTDEFINED.";
			}
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcElectricGeneratorTypeEnum> IfcElectricGeneratorTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcElectricGeneratorTypeEnum>(); }
			shared_ptr<IfcElectricGeneratorTypeEnum> type_object( new IfcElectricGeneratorTypeEnum() );
			if( _stricmp( arg.c_str(), ".CHP." ) == 0 )
			{
				type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_CHP;
			}
			else if( _stricmp( arg.c_str(), ".ENGINEGENERATOR." ) == 0 )
			{
				type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_ENGINEGENERATOR;
			}
			else if( _stricmp( arg.c_str(), ".STANDALONE." ) == 0 )
			{
				type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_STANDALONE;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform
