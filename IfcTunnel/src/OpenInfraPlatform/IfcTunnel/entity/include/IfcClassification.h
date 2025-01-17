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
#include "IfcClassificationReferenceSelect.h"
#include "IfcClassificationSelect.h"
#include "IfcExternalInformation.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		class IfcLabel;
		class IfcDate;
		class IfcText;
		class IfcURIReference;
		class IfcIdentifier;
		class IfcRelAssociatesClassification;
		class IfcClassificationReference;
		//ENTITY
		class IfcClassification : public IfcClassificationReferenceSelect, public IfcClassificationSelect, public IfcExternalInformation
		{
		public:
			IfcClassification();
			IfcClassification( int id );
			~IfcClassification();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcTunnelEntity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcClassification"; }


			// IfcExternalInformation -----------------------------------------------------------

			// IfcClassification -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcLabel>										m_Source;					//optional
			shared_ptr<IfcLabel>										m_Edition;					//optional
			shared_ptr<IfcDate>										m_EditionDate;				//optional
			shared_ptr<IfcLabel>										m_Name;
			shared_ptr<IfcText>										m_Description;				//optional
			shared_ptr<IfcURIReference>								m_Location;					//optional
			std::vector<shared_ptr<IfcIdentifier> >					m_ReferenceTokens;			//optional
			// inverse attributes:
			std::vector<weak_ptr<IfcRelAssociatesClassification> >	m_ClassificationForObjects_inverse;
			std::vector<weak_ptr<IfcClassificationReference> >		m_HasReferences_inverse;
		};
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform

