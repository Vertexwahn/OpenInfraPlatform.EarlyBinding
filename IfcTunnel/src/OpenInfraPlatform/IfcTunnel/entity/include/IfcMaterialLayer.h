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
#include "IfcMaterialDefinition.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		class IfcMaterial;
		class IfcNonNegativeLengthMeasure;
		class IfcLogical;
		class IfcLabel;
		class IfcText;
		class IfcNormalisedRatioMeasure;
		class IfcMaterialLayerSet;
		//ENTITY
		class IfcMaterialLayer : public IfcMaterialDefinition
		{
		public:
			IfcMaterialLayer();
			IfcMaterialLayer( int id );
			~IfcMaterialLayer();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcTunnelEntity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcMaterialLayer"; }


			// IfcMaterialDefinition -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcRelAssociatesMaterial> >	m_AssociatedTo_inverse;
			//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;
			//  std::vector<weak_ptr<IfcMaterialProperties> >	m_HasProperties_inverse;

			// IfcMaterialLayer -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcMaterial>						m_Material;					//optional
			shared_ptr<IfcNonNegativeLengthMeasure>		m_LayerThickness;
			shared_ptr<IfcLogical>						m_IsVentilated;				//optional
			shared_ptr<IfcLabel>							m_Name;						//optional
			shared_ptr<IfcText>							m_Description;				//optional
			shared_ptr<IfcLabel>							m_Category;					//optional
			shared_ptr<IfcNormalisedRatioMeasure>		m_Priority;					//optional
			// inverse attributes:
			weak_ptr<IfcMaterialLayerSet>				m_ToMaterialLayerSet_inverse;
		};
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform

