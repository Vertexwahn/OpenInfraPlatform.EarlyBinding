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
#include <visit_struct/visit_struct.hpp>
#include "OpenInfraPlatform/IfcAlignment1x1/model/Object.h"
#include "IfcSimpleProperty.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		class IfcValue;
		class IfcValue;
		class IfcUnit;
		class IfcValue;
		// ENTITY IfcPropertyBoundedValue
		class IfcPropertyBoundedValue : public IfcSimpleProperty
		{
		public:
			IfcPropertyBoundedValue();
			IfcPropertyBoundedValue( int id );
			~IfcPropertyBoundedValue();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity(std::shared_ptr<IfcAlignment1x1Entity> other);
			virtual void getStepLine(std::stringstream& stream) const;
			virtual void getStepParameter(std::stringstream& stream, bool is_select_type = false) const;
			virtual void readStepData(std::vector<std::string>& args, const std::map<int, shared_ptr<IfcAlignment1x1Entity> >& map);
			virtual void setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self);
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcPropertyBoundedValue"; }

			// IfcPropertyBoundedValue -----------------------
			// attributes:
			std::shared_ptr<IfcValue> m_UpperBoundValue;
			std::shared_ptr<IfcValue> m_LowerBoundValue;
			std::shared_ptr<IfcUnit> m_Unit;
			std::shared_ptr<IfcValue> m_SetPointValue;
		};
	}
}

VISITABLE_STRUCT(OpenInfraPlatform::IfcAlignment1x1::IfcPropertyBoundedValue, m_Name, m_Description, m_UpperBoundValue, m_LowerBoundValue, m_Unit, m_SetPointValue);
