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
#include <memory>
#include <sstream>
#include <string>
#include "OpenInfraPlatform/IfcAlignment1x1/model/Object.h"
#include "IfcModulusOfRotationalSubgradeReactionSelect.h"
#include "IfcModulusOfSubgradeReactionSelect.h"
#include "IfcModulusOfTranslationalSubgradeReactionSelect.h"
#include "IfcRotationalStiffnessSelect.h"
#include "IfcSimpleValue.h"
#include "IfcTranslationalStiffnessSelect.h"
#include "IfcWarpingStiffnessSelect.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		// TYPE IfcBoolean = BOOLEAN;
		class IfcBoolean : public IfcModulusOfRotationalSubgradeReactionSelect, public IfcModulusOfSubgradeReactionSelect, public IfcModulusOfTranslationalSubgradeReactionSelect, public IfcRotationalStiffnessSelect, public IfcSimpleValue, public IfcTranslationalStiffnessSelect, public IfcWarpingStiffnessSelect, public IfcAlignment1x1Type
		{
		public:
			IfcBoolean();
			IfcBoolean(bool value);
			virtual ~IfcBoolean();
			virtual const char* classname() const { return "IfcBoolean"; }
			virtual void getStepParameter(std::stringstream& stream, bool is_select_type = false) const;
			static std::shared_ptr<IfcBoolean> readStepData(const std::string& arg);
			bool m_value;
		}; // end class IfcBoolean
	} // end namespace IfcAlignment1x1
} // end namespace OpenInfraPlatform
