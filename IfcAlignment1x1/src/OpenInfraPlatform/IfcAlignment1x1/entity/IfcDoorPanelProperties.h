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
#include "IfcPreDefinedPropertySet.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		class IfcPositiveLengthMeasure;
		class IfcDoorPanelOperationEnum;
		class IfcNormalisedRatioMeasure;
		class IfcDoorPanelPositionEnum;
		class IfcShapeAspect;
		// ENTITY IfcDoorPanelProperties
		class IfcDoorPanelProperties : public IfcPreDefinedPropertySet
		{
		public:
			IfcDoorPanelProperties();
			IfcDoorPanelProperties( int id );
			~IfcDoorPanelProperties();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity(std::shared_ptr<IfcAlignment1x1Entity> other);
			virtual void getStepLine(std::stringstream& stream) const;
			virtual void getStepParameter(std::stringstream& stream, bool is_select_type = false) const;
			virtual void readStepData(std::vector<std::string>& args, const std::map<int, shared_ptr<IfcAlignment1x1Entity> >& map);
			virtual void setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self);
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcDoorPanelProperties"; }

			// IfcDoorPanelProperties -----------------------
			// attributes:
			std::shared_ptr<IfcPositiveLengthMeasure> m_PanelDepth;
			std::shared_ptr<IfcDoorPanelOperationEnum> m_PanelOperation;
			std::shared_ptr<IfcNormalisedRatioMeasure> m_PanelWidth;
			std::shared_ptr<IfcDoorPanelPositionEnum> m_PanelPosition;
			std::shared_ptr<IfcShapeAspect> m_ShapeAspectStyle;
		};
	}
}

VISITABLE_STRUCT(OpenInfraPlatform::IfcAlignment1x1::IfcDoorPanelProperties, m_GlobalId, m_OwnerHistory, m_Name, m_Description, m_PanelDepth, m_PanelOperation, m_PanelWidth, m_PanelPosition, m_ShapeAspectStyle);
