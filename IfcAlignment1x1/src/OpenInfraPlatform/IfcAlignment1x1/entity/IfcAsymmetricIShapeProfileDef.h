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
#include "IfcParameterizedProfileDef.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		class IfcPositiveLengthMeasure;
		class IfcPositiveLengthMeasure;
		class IfcPositiveLengthMeasure;
		class IfcPositiveLengthMeasure;
		class IfcNonNegativeLengthMeasure;
		class IfcPositiveLengthMeasure;
		class IfcPositiveLengthMeasure;
		class IfcNonNegativeLengthMeasure;
		class IfcNonNegativeLengthMeasure;
		class IfcPlaneAngleMeasure;
		class IfcNonNegativeLengthMeasure;
		class IfcPlaneAngleMeasure;
		// ENTITY IfcAsymmetricIShapeProfileDef
		class IfcAsymmetricIShapeProfileDef : public IfcParameterizedProfileDef
		{
		public:
			IfcAsymmetricIShapeProfileDef();
			IfcAsymmetricIShapeProfileDef( int id );
			~IfcAsymmetricIShapeProfileDef();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity(std::shared_ptr<IfcAlignment1x1Entity> other);
			virtual void getStepLine(std::stringstream& stream) const;
			virtual void getStepParameter(std::stringstream& stream, bool is_select_type = false) const;
			virtual void readStepData(std::vector<std::string>& args, const std::map<int, shared_ptr<IfcAlignment1x1Entity> >& map);
			virtual void setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self);
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcAsymmetricIShapeProfileDef"; }

			// IfcAsymmetricIShapeProfileDef -----------------------
			// attributes:
			std::shared_ptr<IfcPositiveLengthMeasure> m_BottomFlangeWidth;
			std::shared_ptr<IfcPositiveLengthMeasure> m_OverallDepth;
			std::shared_ptr<IfcPositiveLengthMeasure> m_WebThickness;
			std::shared_ptr<IfcPositiveLengthMeasure> m_BottomFlangeThickness;
			std::shared_ptr<IfcNonNegativeLengthMeasure> m_BottomFlangeFilletRadius;
			std::shared_ptr<IfcPositiveLengthMeasure> m_TopFlangeWidth;
			std::shared_ptr<IfcPositiveLengthMeasure> m_TopFlangeThickness;
			std::shared_ptr<IfcNonNegativeLengthMeasure> m_TopFlangeFilletRadius;
			std::shared_ptr<IfcNonNegativeLengthMeasure> m_BottomFlangeEdgeRadius;
			std::shared_ptr<IfcPlaneAngleMeasure> m_BottomFlangeSlope;
			std::shared_ptr<IfcNonNegativeLengthMeasure> m_TopFlangeEdgeRadius;
			std::shared_ptr<IfcPlaneAngleMeasure> m_TopFlangeSlope;
		};
	}
}

VISITABLE_STRUCT(OpenInfraPlatform::IfcAlignment1x1::IfcAsymmetricIShapeProfileDef, m_ProfileType, m_ProfileName, m_Position, m_BottomFlangeWidth, m_OverallDepth, m_WebThickness, m_BottomFlangeThickness, m_BottomFlangeFilletRadius, m_TopFlangeWidth, m_TopFlangeThickness, m_TopFlangeFilletRadius, m_BottomFlangeEdgeRadius, m_BottomFlangeSlope, m_TopFlangeEdgeRadius, m_TopFlangeSlope);
