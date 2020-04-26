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
#include "IfcProfileDef.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		class IfcProfileDef;
		class IfcCartesianTransformationOperator2D;
		class IfcLabel;
		// ENTITY IfcDerivedProfileDef
		class IfcDerivedProfileDef : public IfcProfileDef
		{
		public:
			IfcDerivedProfileDef();
			IfcDerivedProfileDef( int id );
			~IfcDerivedProfileDef();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity(std::shared_ptr<IfcAlignment1x1Entity> other);
			virtual void getStepLine(std::stringstream& stream) const;
			virtual void getStepParameter(std::stringstream& stream, bool is_select_type = false) const;
			virtual void readStepData(std::vector<std::string>& args, const std::map<int, shared_ptr<IfcAlignment1x1Entity> >& map);
			virtual void setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self);
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcDerivedProfileDef"; }

			// IfcDerivedProfileDef -----------------------
			// attributes:
			std::shared_ptr<IfcProfileDef> m_ParentProfile;
			std::shared_ptr<IfcCartesianTransformationOperator2D> m_Operator;
			std::shared_ptr<IfcLabel> m_Label;
		};
	}
}

VISITABLE_STRUCT(OpenInfraPlatform::IfcAlignment1x1::IfcDerivedProfileDef, m_ProfileType, m_ProfileName, m_ParentProfile, m_Operator, m_Label);