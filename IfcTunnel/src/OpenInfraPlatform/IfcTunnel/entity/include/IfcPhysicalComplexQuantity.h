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
#include "../../model/shared_ptr.h"
#include "../../model/IfcTunnelObject.h"
#include "IfcPhysicalQuantity.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		class IfcPhysicalQuantity;
		class IfcLabel;
		//ENTITY
		class IfcPhysicalComplexQuantity : public IfcPhysicalQuantity
		{
		public:
			IfcPhysicalComplexQuantity();
			IfcPhysicalComplexQuantity( int id );
			~IfcPhysicalComplexQuantity();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcTunnelEntity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcPhysicalComplexQuantity"; }


			// IfcPhysicalQuantity -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcLabel>								m_Name;
			//  shared_ptr<IfcText>								m_Description;				//optional
			// inverse attributes:
			//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;
			//  std::vector<weak_ptr<IfcPhysicalComplexQuantity> >	m_PartOfComplex_inverse;

			// IfcPhysicalComplexQuantity -----------------------------------------------------------
			// attributes:
			std::vector<shared_ptr<IfcPhysicalQuantity> >	m_HasQuantities;
			shared_ptr<IfcLabel>								m_Discrimination;
			shared_ptr<IfcLabel>								m_Quality;					//optional
			shared_ptr<IfcLabel>								m_Usage;					//optional
		};
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform

