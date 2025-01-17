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
#include "../model/IfcTunnelException.h"
#include "include/IfcMotorConnectionTypeEnum.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// TYPE IfcMotorConnectionTypeEnum 
		IfcMotorConnectionTypeEnum::IfcMotorConnectionTypeEnum() {}
		IfcMotorConnectionTypeEnum::~IfcMotorConnectionTypeEnum() {}
		void IfcMotorConnectionTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCMOTORCONNECTIONTYPEENUM("; }
			if( m_enum == ENUM_BELTDRIVE )
			{
				stream << ".BELTDRIVE.";
			}
			else if( m_enum == ENUM_COUPLING )
			{
				stream << ".COUPLING.";
			}
			else if( m_enum == ENUM_DIRECTDRIVE )
			{
				stream << ".DIRECTDRIVE.";
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
		shared_ptr<IfcMotorConnectionTypeEnum> IfcMotorConnectionTypeEnum::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcMotorConnectionTypeEnum>(); }
			shared_ptr<IfcMotorConnectionTypeEnum> type_object( new IfcMotorConnectionTypeEnum() );
			if( _stricmp( arg.c_str(), ".BELTDRIVE." ) == 0 )
			{
				type_object->m_enum = IfcMotorConnectionTypeEnum::ENUM_BELTDRIVE;
			}
			else if( _stricmp( arg.c_str(), ".COUPLING." ) == 0 )
			{
				type_object->m_enum = IfcMotorConnectionTypeEnum::ENUM_COUPLING;
			}
			else if( _stricmp( arg.c_str(), ".DIRECTDRIVE." ) == 0 )
			{
				type_object->m_enum = IfcMotorConnectionTypeEnum::ENUM_DIRECTDRIVE;
			}
			else if( _stricmp( arg.c_str(), ".USERDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcMotorConnectionTypeEnum::ENUM_USERDEFINED;
			}
			else if( _stricmp( arg.c_str(), ".NOTDEFINED." ) == 0 )
			{
				type_object->m_enum = IfcMotorConnectionTypeEnum::ENUM_NOTDEFINED;
			}
			return type_object;
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
