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

#include <iostream>
#include <sstream>
#include <map>
#include "../../model/shared_ptr.h"
#include "../../model/IfcTunnelObject.h"
#include "IfcValue.h"

// TYPE IfcDerivedMeasureValue = SELECT	(IfcAbsorbedDoseMeasure	,IfcAccelerationMeasure	,IfcAngularVelocityMeasure	,IfcAreaDensityMeasure	,IfcCompoundPlaneAngleMeasure	,IfcCurvatureMeasure	,IfcDoseEquivalentMeasure	,IfcDynamicViscosityMeasure	,IfcElectricCapacitanceMeasure	,IfcElectricChargeMeasure	,IfcElectricConductanceMeasure	,IfcElectricResistanceMeasure	,IfcElectricVoltageMeasure	,IfcEnergyMeasure	,IfcForceMeasure	,IfcFrequencyMeasure	,IfcHeatFluxDensityMeasure	,IfcHeatingValueMeasure	,IfcIlluminanceMeasure	,IfcInductanceMeasure	,IfcIntegerCountRateMeasure	,IfcIonConcentrationMeasure	,IfcIsothermalMoistureCapacityMeasure	,IfcKinematicViscosityMeasure	,IfcLinearForceMeasure	,IfcLinearMomentMeasure	,IfcLinearStiffnessMeasure	,IfcLinearVelocityMeasure	,IfcLuminousFluxMeasure	,IfcLuminousIntensityDistributionMeasure	,IfcMagneticFluxDensityMeasure	,IfcMagneticFluxMeasure	,IfcMassDensityMeasure	,IfcMassFlowRateMeasure	,IfcMassPerLengthMeasure	,IfcModulusOfElasticityMeasure	,IfcModulusOfLinearSubgradeReactionMeasure	,IfcModulusOfRotationalSubgradeReactionMeasure	,IfcModulusOfSubgradeReactionMeasure	,IfcMoistureDiffusivityMeasure	,IfcMolecularWeightMeasure	,IfcMomentOfInertiaMeasure	,IfcMonetaryMeasure	,IfcPHMeasure	,IfcPlanarForceMeasure	,IfcPowerMeasure	,IfcPressureMeasure	,IfcRadioActivityMeasure	,IfcRotationalFrequencyMeasure	,IfcRotationalMassMeasure	,IfcRotationalStiffnessMeasure	,IfcSectionModulusMeasure	,IfcSectionalAreaIntegralMeasure	,IfcShearModulusMeasure	,IfcSoundPowerLevelMeasure	,IfcSoundPowerMeasure	,IfcSoundPressureLevelMeasure	,IfcSoundPressureMeasure	,IfcSpecificHeatCapacityMeasure	,IfcTemperatureGradientMeasure	,IfcTemperatureRateOfChangeMeasure	,IfcThermalAdmittanceMeasure	,IfcThermalConductivityMeasure	,IfcThermalExpansionCoefficientMeasure	,IfcThermalResistanceMeasure	,IfcThermalTransmittanceMeasure	,IfcTorqueMeasure	,IfcVaporPermeabilityMeasure	,IfcVolumetricFlowRateMeasure	,IfcWarpingConstantMeasure	,IfcWarpingMomentMeasure);
namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		class IfcDerivedMeasureValue : public IfcValue
		{
		public:
			IfcDerivedMeasureValue();
			~IfcDerivedMeasureValue();
			virtual const char* classname() const { return "IfcDerivedMeasureValue"; }
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const = 0; // abstract class
			static shared_ptr<IfcDerivedMeasureValue> readStepData( std::string& arg, const std::map<int,shared_ptr<IfcTunnelEntity> >& map );
		};
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform

