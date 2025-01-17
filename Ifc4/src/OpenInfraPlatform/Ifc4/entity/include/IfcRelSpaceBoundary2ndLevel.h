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
#include "IfcRelSpaceBoundary1stLevel.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		class IfcRelSpaceBoundary2ndLevel;
		//ENTITY
		class IfcRelSpaceBoundary2ndLevel : public IfcRelSpaceBoundary1stLevel
		{
		public:
			IfcRelSpaceBoundary2ndLevel();
			IfcRelSpaceBoundary2ndLevel( int id );
			~IfcRelSpaceBoundary2ndLevel();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<Ifc4Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcRelSpaceBoundary2ndLevel"; }


			// IfcRoot -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcGloballyUniqueId>						m_GlobalId;
			//  shared_ptr<IfcOwnerHistory>							m_OwnerHistory;				//optional
			//  shared_ptr<IfcLabel>									m_Name;						//optional
			//  shared_ptr<IfcText>									m_Description;				//optional

			// IfcRelationship -----------------------------------------------------------

			// IfcRelConnects -----------------------------------------------------------

			// IfcRelSpaceBoundary -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcSpaceBoundarySelect>					m_RelatingSpace;
			//  shared_ptr<IfcElement>								m_RelatedBuildingElement;
			//  shared_ptr<IfcConnectionGeometry>					m_ConnectionGeometry;		//optional
			//  shared_ptr<IfcPhysicalOrVirtualEnum>					m_PhysicalOrVirtualBoundary;
			//  shared_ptr<IfcInternalOrExternalEnum>				m_InternalOrExternalBoundary;

			// IfcRelSpaceBoundary1stLevel -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcRelSpaceBoundary1stLevel>				m_ParentBoundary;			//optional
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelSpaceBoundary1stLevel> >	m_InnerBoundaries_inverse;

			// IfcRelSpaceBoundary2ndLevel -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcRelSpaceBoundary2ndLevel>				m_CorrespondingBoundary;	//optional
			// inverse attributes:
			std::vector<weak_ptr<IfcRelSpaceBoundary2ndLevel> >	m_Corresponds_inverse;
		};
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform

