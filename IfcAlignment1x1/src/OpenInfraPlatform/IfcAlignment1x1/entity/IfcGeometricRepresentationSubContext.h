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
#include "IfcGeometricRepresentationContext.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		class IfcGeometricRepresentationContext;
		class IfcPositiveRatioMeasure;
		class IfcGeometricProjectionEnum;
		class IfcLabel;
		// ENTITY IfcGeometricRepresentationSubContext
		class IfcGeometricRepresentationSubContext : public IfcGeometricRepresentationContext
		{
		public:
			IfcGeometricRepresentationSubContext();
			IfcGeometricRepresentationSubContext( int id );
			~IfcGeometricRepresentationSubContext();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity(std::shared_ptr<IfcAlignment1x1Entity> other);
			virtual void getStepLine(std::stringstream& stream) const;
			virtual void getStepParameter(std::stringstream& stream, bool is_select_type = false) const;
			virtual void readStepData(std::vector<std::string>& args, const std::map<int, shared_ptr<IfcAlignment1x1Entity> >& map);
			virtual void setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self);
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcGeometricRepresentationSubContext"; }

			// IfcGeometricRepresentationSubContext -----------------------
			// attributes:
			std::shared_ptr<IfcGeometricRepresentationContext> m_ParentContext;
			std::shared_ptr<IfcPositiveRatioMeasure> m_TargetScale;
			std::shared_ptr<IfcGeometricProjectionEnum> m_TargetView;
			std::shared_ptr<IfcLabel> m_UserDefinedTargetView;
		};
	}
}

VISITABLE_STRUCT(OpenInfraPlatform::IfcAlignment1x1::IfcGeometricRepresentationSubContext, m_ContextIdentifier, m_ContextType, m_CoordinateSpaceDimension, m_Precision, m_WorldCoordinateSystem, m_TrueNorth, m_ParentContext, m_TargetScale, m_TargetView, m_UserDefinedTargetView);