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
#include "OpenInfraPlatform/Ifc4/model/shared_ptr.h"
#include "OpenInfraPlatform/Ifc4/model/Ifc4Object.h"
#include "IfcPresentationLayerAssignment.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		class IfcLogical;
		class IfcPresentationStyle;
		//ENTITY
		class IfcPresentationLayerWithStyle : public IfcPresentationLayerAssignment
		{
		public:
			IfcPresentationLayerWithStyle();
			IfcPresentationLayerWithStyle( int id );
			~IfcPresentationLayerWithStyle();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<Ifc4Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcPresentationLayerWithStyle"; }


			// IfcPresentationLayerAssignment -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcLabel>								m_Name;
			//  shared_ptr<IfcText>								m_Description;				//optional
			//  std::vector<shared_ptr<IfcLayeredItem> >			m_AssignedItems;
			//  shared_ptr<IfcIdentifier>						m_Identifier;				//optional

			// IfcPresentationLayerWithStyle -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcLogical>							m_LayerOn;
			shared_ptr<IfcLogical>							m_LayerFrozen;
			shared_ptr<IfcLogical>							m_LayerBlocked;
			std::vector<shared_ptr<IfcPresentationStyle> >	m_LayerStyles;
		};
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform

