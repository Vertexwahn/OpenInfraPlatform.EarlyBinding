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
#include "OpenInfraPlatform/IfcAlignment/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Object.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		// TYPE IfcElectricDistributionBoardTypeEnum = ENUMERATION OF	(CONSUMERUNIT	,DISTRIBUTIONBOARD	,MOTORCONTROLCENTRE	,SWITCHBOARD	,USERDEFINED	,NOTDEFINED);
		class IfcElectricDistributionBoardTypeEnum : public IfcAlignmentP6AbstractEnum, public IfcAlignmentP6Type
		{
		public:
			enum IfcElectricDistributionBoardTypeEnumEnum
			{
				ENUM_CONSUMERUNIT,
				ENUM_DISTRIBUTIONBOARD,
				ENUM_MOTORCONTROLCENTRE,
				ENUM_SWITCHBOARD,
				ENUM_USERDEFINED,
				ENUM_NOTDEFINED
			};

			IfcElectricDistributionBoardTypeEnum();
			IfcElectricDistributionBoardTypeEnum( IfcElectricDistributionBoardTypeEnumEnum e ) { m_enum = e; }
			~IfcElectricDistributionBoardTypeEnum();
			virtual const char* classname() const { return "IfcElectricDistributionBoardTypeEnum"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			static shared_ptr<IfcElectricDistributionBoardTypeEnum> readStepData( std::string& arg );
			IfcElectricDistributionBoardTypeEnumEnum m_enum;
		};
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform

