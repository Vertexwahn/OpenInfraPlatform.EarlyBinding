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
#include "IfcPreDefinedPropertySet.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		class IfcPermeableCoveringOperationEnum;
		class IfcWindowPanelPositionEnum;
		class IfcPositiveLengthMeasure;
		class IfcShapeAspect;
		//ENTITY
		class IfcPermeableCoveringProperties : public IfcPreDefinedPropertySet
		{
		public:
			IfcPermeableCoveringProperties();
			IfcPermeableCoveringProperties( int id );
			~IfcPermeableCoveringProperties();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcAlignmentP6Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcPermeableCoveringProperties"; }


			// IfcRoot -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcGloballyUniqueId>					m_GlobalId;
			//  shared_ptr<IfcOwnerHistory>						m_OwnerHistory;				//optional
			//  shared_ptr<IfcLabel>								m_Name;						//optional
			//  shared_ptr<IfcText>								m_Description;				//optional

			// IfcPropertyDefinition -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelDeclares> >			m_HasContext_inverse;
			//  std::vector<weak_ptr<IfcRelAssociates> >			m_HasAssociations_inverse;

			// IfcPropertySetDefinition -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcTypeObject> >			m_DefinesType_inverse;
			//  std::vector<weak_ptr<IfcRelDefinesByTemplate> >	m_IsDefinedBy_inverse;
			//  std::vector<weak_ptr<IfcRelDefinesByProperties> >	m_DefinesOccurrence_inverse;

			// IfcPreDefinedPropertySet -----------------------------------------------------------

			// IfcPermeableCoveringProperties -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcPermeableCoveringOperationEnum>	m_OperationType;
			shared_ptr<IfcWindowPanelPositionEnum>			m_PanelPosition;
			shared_ptr<IfcPositiveLengthMeasure>				m_FrameDepth;				//optional
			shared_ptr<IfcPositiveLengthMeasure>				m_FrameThickness;			//optional
			shared_ptr<IfcShapeAspect>						m_ShapeAspectStyle;			//optional
		};
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform

