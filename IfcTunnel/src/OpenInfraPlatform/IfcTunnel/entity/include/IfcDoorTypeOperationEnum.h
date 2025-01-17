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

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "../../model/shared_ptr.h"
#include "../../model/IfcTunnelObject.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// TYPE IfcDoorTypeOperationEnum = ENUMERATION OF	(SINGLE_SWING_LEFT	,SINGLE_SWING_RIGHT	,DOUBLE_DOOR_SINGLE_SWING	,DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT	,DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT	,DOUBLE_SWING_LEFT	,DOUBLE_SWING_RIGHT	,DOUBLE_DOOR_DOUBLE_SWING	,SLIDING_TO_LEFT	,SLIDING_TO_RIGHT	,DOUBLE_DOOR_SLIDING	,FOLDING_TO_LEFT	,FOLDING_TO_RIGHT	,DOUBLE_DOOR_FOLDING	,REVOLVING	,ROLLINGUP	,SWING_FIXED_LEFT	,SWING_FIXED_RIGHT	,USERDEFINED	,NOTDEFINED);
		class IfcDoorTypeOperationEnum : public IfcTunnelAbstractEnum, public IfcTunnelType
		{
		public:
			enum IfcDoorTypeOperationEnumEnum
			{
				ENUM_SINGLE_SWING_LEFT,
				ENUM_SINGLE_SWING_RIGHT,
				ENUM_DOUBLE_DOOR_SINGLE_SWING,
				ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT,
				ENUM_DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT,
				ENUM_DOUBLE_SWING_LEFT,
				ENUM_DOUBLE_SWING_RIGHT,
				ENUM_DOUBLE_DOOR_DOUBLE_SWING,
				ENUM_SLIDING_TO_LEFT,
				ENUM_SLIDING_TO_RIGHT,
				ENUM_DOUBLE_DOOR_SLIDING,
				ENUM_FOLDING_TO_LEFT,
				ENUM_FOLDING_TO_RIGHT,
				ENUM_DOUBLE_DOOR_FOLDING,
				ENUM_REVOLVING,
				ENUM_ROLLINGUP,
				ENUM_SWING_FIXED_LEFT,
				ENUM_SWING_FIXED_RIGHT,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcDoorTypeOperationEnum();
			IfcDoorTypeOperationEnum( IfcDoorTypeOperationEnumEnum e ) { m_enum = e; }
			~IfcDoorTypeOperationEnum();
			virtual const char* classname() const { return "IfcDoorTypeOperationEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcDoorTypeOperationEnum> readStepData( std::string& arg );
			IfcDoorTypeOperationEnumEnum m_enum;
		};
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform

