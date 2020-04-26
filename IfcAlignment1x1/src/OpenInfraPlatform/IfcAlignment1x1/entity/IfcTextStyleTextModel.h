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
#include "IfcPresentationItem.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
		class IfcSizeSelect;
		class IfcTextAlignment;
		class IfcTextDecoration;
		class IfcSizeSelect;
		class IfcSizeSelect;
		class IfcTextTransformation;
		class IfcSizeSelect;
		// ENTITY IfcTextStyleTextModel
		class IfcTextStyleTextModel : public IfcPresentationItem
		{
		public:
			IfcTextStyleTextModel();
			IfcTextStyleTextModel( int id );
			~IfcTextStyleTextModel();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity(std::shared_ptr<IfcAlignment1x1Entity> other);
			virtual void getStepLine(std::stringstream& stream) const;
			virtual void getStepParameter(std::stringstream& stream, bool is_select_type = false) const;
			virtual void readStepData(std::vector<std::string>& args, const std::map<int, shared_ptr<IfcAlignment1x1Entity> >& map);
			virtual void setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self);
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcTextStyleTextModel"; }

			// IfcTextStyleTextModel -----------------------
			// attributes:
			std::shared_ptr<IfcSizeSelect> m_TextIndent;
			std::shared_ptr<IfcTextAlignment> m_TextAlign;
			std::shared_ptr<IfcTextDecoration> m_TextDecoration;
			std::shared_ptr<IfcSizeSelect> m_LetterSpacing;
			std::shared_ptr<IfcSizeSelect> m_WordSpacing;
			std::shared_ptr<IfcTextTransformation> m_TextTransform;
			std::shared_ptr<IfcSizeSelect> m_LineHeight;
		};
	}
}

VISITABLE_STRUCT(OpenInfraPlatform::IfcAlignment1x1::IfcTextStyleTextModel, m_TextIndent, m_TextAlign, m_TextDecoration, m_LetterSpacing, m_WordSpacing, m_TextTransform, m_LineHeight);