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
#include "IfcResourceObjectSelect.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		class IfcLabel;
		class IfcText;
		class IfcConstraintEnum;
		class IfcLabel;
		class IfcActorSelect;
		class IfcDateTime;
		class IfcLabel;
		// ENTITY IfcConstraint
		class IfcConstraint : public IfcAlignment1x1Entity, public IfcResourceObjectSelect

		{
		public:
			IfcConstraint();
			IfcConstraint( int id );
			~IfcConstraint();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity(std::shared_ptr<IfcAlignment1x1Entity> other);
			virtual void getStepLine(std::stringstream& stream) const;
			virtual void getStepParameter(std::stringstream& stream, bool is_select_type = false) const;
			virtual void readStepData(std::vector<std::string>& args, const std::map<int, shared_ptr<IfcAlignment1x1Entity> >& map);
			virtual void setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self);
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcConstraint"; }

			// IfcConstraint -----------------------
			// attributes:
			std::shared_ptr<IfcLabel> m_Name;
			std::shared_ptr<IfcText> m_Description;
			std::shared_ptr<IfcConstraintEnum> m_ConstraintGrade;
			std::shared_ptr<IfcLabel> m_ConstraintSource;
			std::shared_ptr<IfcActorSelect> m_CreatingActor;
			std::shared_ptr<IfcDateTime> m_CreationTime;
			std::shared_ptr<IfcLabel> m_UserDefinedGrade;
		};
	}
}

VISITABLE_STRUCT(OpenInfraPlatform::IfcAlignment1x1::IfcConstraint, m_Name, m_Description, m_ConstraintGrade, m_ConstraintSource, m_CreatingActor, m_CreationTime, m_UserDefinedGrade);
