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
#include "IfcLightSource.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		class IfcAxis2Placement3D;
		class IfcColourRgb;
		class IfcThermodynamicTemperatureMeasure;
		class IfcLuminousFluxMeasure;
		class IfcLightEmissionSourceEnum;
		class IfcLightDistributionDataSourceSelect;
		//ENTITY
		class IfcLightSourceGoniometric : public IfcLightSource
		{
		public:
			IfcLightSourceGoniometric();
			IfcLightSourceGoniometric( int id );
			~IfcLightSourceGoniometric();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<Ifc4Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcLightSourceGoniometric"; }


			// IfcRepresentationItem -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
			//  std::vector<weak_ptr<IfcStyledItem> >			m_StyledByItem_inverse;

			// IfcGeometricRepresentationItem -----------------------------------------------------------

			// IfcLightSource -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcLabel>								m_Name;						//optional
			//  shared_ptr<IfcColourRgb>							m_LightColour;
			//  shared_ptr<IfcNormalisedRatioMeasure>			m_AmbientIntensity;			//optional
			//  shared_ptr<IfcNormalisedRatioMeasure>			m_Intensity;				//optional

			// IfcLightSourceGoniometric -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcAxis2Placement3D>					m_Position;
			shared_ptr<IfcColourRgb>							m_ColourAppearance;			//optional
			shared_ptr<IfcThermodynamicTemperatureMeasure>	m_ColourTemperature;
			shared_ptr<IfcLuminousFluxMeasure>				m_LuminousFlux;
			shared_ptr<IfcLightEmissionSourceEnum>			m_LightEmissionSource;
			shared_ptr<IfcLightDistributionDataSourceSelect>	m_LightDistributionDataSource;
		};
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform

