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

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		class IfcPersonAndOrganization;
		class IfcApplication;
		class IfcStateEnum;
		class IfcChangeActionEnum;
		class IfcTimeStamp;
		class IfcPersonAndOrganization;
		class IfcApplication;
		class IfcTimeStamp;
		// ENTITY IfcOwnerHistory
		class IfcOwnerHistory : public IfcAlignment1x1Entity
		{
		public:
			IfcOwnerHistory();
			IfcOwnerHistory( int id );
			~IfcOwnerHistory();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity(std::shared_ptr<IfcAlignment1x1Entity> other);
			virtual void getStepLine(std::stringstream& stream) const;
			virtual void getStepParameter(std::stringstream& stream, bool is_select_type = false) const;
			virtual void readStepData(std::vector<std::string>& args, const std::map<int, shared_ptr<IfcAlignment1x1Entity> >& map);
			virtual void setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self);
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcOwnerHistory"; }

			// IfcOwnerHistory -----------------------
			// attributes:
			std::shared_ptr<IfcPersonAndOrganization> m_OwningUser;
			std::shared_ptr<IfcApplication> m_OwningApplication;
			std::shared_ptr<IfcStateEnum> m_State;
			std::shared_ptr<IfcChangeActionEnum> m_ChangeAction;
			std::shared_ptr<IfcTimeStamp> m_LastModifiedDate;
			std::shared_ptr<IfcPersonAndOrganization> m_LastModifyingUser;
			std::shared_ptr<IfcApplication> m_LastModifyingApplication;
			std::shared_ptr<IfcTimeStamp> m_CreationDate;
		};
	}
}

VISITABLE_STRUCT(OpenInfraPlatform::IfcAlignment1x1::IfcOwnerHistory, m_OwningUser, m_OwningApplication, m_State, m_ChangeAction, m_LastModifiedDate, m_LastModifyingUser, m_LastModifyingApplication, m_CreationDate);
