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
#include "../../model/Ifc2x3Object.h"
#include "IfcStructuralProfileProperties.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		class IfcAreaMeasure;
		class IfcPositiveRatioMeasure;
		//ENTITY
		class IfcStructuralSteelProfileProperties : public IfcStructuralProfileProperties
		{
		public:
			IfcStructuralSteelProfileProperties();
			IfcStructuralSteelProfileProperties( int id );
			~IfcStructuralSteelProfileProperties();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<Ifc2x3Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcStructuralSteelProfileProperties"; }


			// IfcProfileProperties -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcLabel>							m_ProfileName;				//optional
			//  shared_ptr<IfcProfileDef>					m_ProfileDefinition;		//optional

			// IfcGeneralProfileProperties -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcMassPerLengthMeasure>			m_PhysicalWeight;			//optional
			//  shared_ptr<IfcPositiveLengthMeasure>			m_Perimeter;				//optional
			//  shared_ptr<IfcPositiveLengthMeasure>			m_MinimumPlateThickness;	//optional
			//  shared_ptr<IfcPositiveLengthMeasure>			m_MaximumPlateThickness;	//optional
			//  shared_ptr<IfcAreaMeasure>					m_CrossSectionArea;			//optional

			// IfcStructuralProfileProperties -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcMomentOfInertiaMeasure>		m_TorsionalConstantX;		//optional
			//  shared_ptr<IfcMomentOfInertiaMeasure>		m_MomentOfInertiaYZ;		//optional
			//  shared_ptr<IfcMomentOfInertiaMeasure>		m_MomentOfInertiaY;			//optional
			//  shared_ptr<IfcMomentOfInertiaMeasure>		m_MomentOfInertiaZ;			//optional
			//  shared_ptr<IfcWarpingConstantMeasure>		m_WarpingConstant;			//optional
			//  shared_ptr<IfcLengthMeasure>					m_ShearCentreZ;				//optional
			//  shared_ptr<IfcLengthMeasure>					m_ShearCentreY;				//optional
			//  shared_ptr<IfcAreaMeasure>					m_ShearDeformationAreaZ;	//optional
			//  shared_ptr<IfcAreaMeasure>					m_ShearDeformationAreaY;	//optional
			//  shared_ptr<IfcSectionModulusMeasure>			m_MaximumSectionModulusY;	//optional
			//  shared_ptr<IfcSectionModulusMeasure>			m_MinimumSectionModulusY;	//optional
			//  shared_ptr<IfcSectionModulusMeasure>			m_MaximumSectionModulusZ;	//optional
			//  shared_ptr<IfcSectionModulusMeasure>			m_MinimumSectionModulusZ;	//optional
			//  shared_ptr<IfcSectionModulusMeasure>			m_TorsionalSectionModulus;	//optional
			//  shared_ptr<IfcLengthMeasure>					m_CentreOfGravityInX;		//optional
			//  shared_ptr<IfcLengthMeasure>					m_CentreOfGravityInY;		//optional

			// IfcStructuralSteelProfileProperties -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcAreaMeasure>					m_ShearAreaZ;				//optional
			shared_ptr<IfcAreaMeasure>					m_ShearAreaY;				//optional
			shared_ptr<IfcPositiveRatioMeasure>			m_PlasticShapeFactorY;		//optional
			shared_ptr<IfcPositiveRatioMeasure>			m_PlasticShapeFactorZ;		//optional
		};
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform

