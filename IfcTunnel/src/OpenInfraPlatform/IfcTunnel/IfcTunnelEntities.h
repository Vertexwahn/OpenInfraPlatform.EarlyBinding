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
#include "entity/include/IfcActionRequest.h"
#include "entity/include/IfcActor.h"
#include "entity/include/IfcActorRole.h"
#include "entity/include/IfcActuator.h"
#include "entity/include/IfcActuatorType.h"
#include "entity/include/IfcAddress.h"
#include "entity/include/IfcAdvancedBrep.h"
#include "entity/include/IfcAdvancedBrepWithVoids.h"
#include "entity/include/IfcAdvancedFace.h"
#include "entity/include/IfcAirTerminal.h"
#include "entity/include/IfcAirTerminalBox.h"
#include "entity/include/IfcAirTerminalBoxType.h"
#include "entity/include/IfcAirTerminalType.h"
#include "entity/include/IfcAirToAirHeatRecovery.h"
#include "entity/include/IfcAirToAirHeatRecoveryType.h"
#include "entity/include/IfcAlarm.h"
#include "entity/include/IfcAlarmType.h"
#include "entity/include/IfcAnnotation.h"
#include "entity/include/IfcAnnotationFillArea.h"
#include "entity/include/IfcApplication.h"
#include "entity/include/IfcAppliedValue.h"
#include "entity/include/IfcApproval.h"
#include "entity/include/IfcApprovalRelationship.h"
#include "entity/include/IfcArbitraryClosedProfileDef.h"
#include "entity/include/IfcArbitraryOpenProfileDef.h"
#include "entity/include/IfcArbitraryProfileDefWithVoids.h"
#include "entity/include/IfcAsset.h"
#include "entity/include/IfcAsymmetricIShapeProfileDef.h"
#include "entity/include/IfcAudioVisualAppliance.h"
#include "entity/include/IfcAudioVisualApplianceType.h"
#include "entity/include/IfcAxis1Placement.h"
#include "entity/include/IfcAxis2Placement2D.h"
#include "entity/include/IfcAxis2Placement3D.h"
#include "entity/include/IfcBSplineCurve.h"
#include "entity/include/IfcBSplineCurveWithKnots.h"
#include "entity/include/IfcBSplineSurface.h"
#include "entity/include/IfcBSplineSurfaceWithKnots.h"
#include "entity/include/IfcBeam.h"
#include "entity/include/IfcBeamStandardCase.h"
#include "entity/include/IfcBeamType.h"
#include "entity/include/IfcBlobTexture.h"
#include "entity/include/IfcBlock.h"
#include "entity/include/IfcBoiler.h"
#include "entity/include/IfcBoilerType.h"
#include "entity/include/IfcBooleanClippingResult.h"
#include "entity/include/IfcBooleanResult.h"
#include "entity/include/IfcBoundaryCondition.h"
#include "entity/include/IfcBoundaryCurve.h"
#include "entity/include/IfcBoundaryEdgeCondition.h"
#include "entity/include/IfcBoundaryFaceCondition.h"
#include "entity/include/IfcBoundaryNodeCondition.h"
#include "entity/include/IfcBoundaryNodeConditionWarping.h"
#include "entity/include/IfcBoundedCurve.h"
#include "entity/include/IfcBoundedSurface.h"
#include "entity/include/IfcBoundingBox.h"
#include "entity/include/IfcBoxedHalfSpace.h"
#include "entity/include/IfcBuilding.h"
#include "entity/include/IfcBuildingElement.h"
#include "entity/include/IfcBuildingElementPart.h"
#include "entity/include/IfcBuildingElementPartType.h"
#include "entity/include/IfcBuildingElementProxy.h"
#include "entity/include/IfcBuildingElementProxyType.h"
#include "entity/include/IfcBuildingElementType.h"
#include "entity/include/IfcBuildingStorey.h"
#include "entity/include/IfcBuildingSystem.h"
#include "entity/include/IfcBurner.h"
#include "entity/include/IfcBurnerType.h"
#include "entity/include/IfcCShapeProfileDef.h"
#include "entity/include/IfcCableCarrierFitting.h"
#include "entity/include/IfcCableCarrierFittingType.h"
#include "entity/include/IfcCableCarrierSegment.h"
#include "entity/include/IfcCableCarrierSegmentType.h"
#include "entity/include/IfcCableFitting.h"
#include "entity/include/IfcCableFittingType.h"
#include "entity/include/IfcCableSegment.h"
#include "entity/include/IfcCableSegmentType.h"
#include "entity/include/IfcCartesianPoint.h"
#include "entity/include/IfcCartesianPointList.h"
#include "entity/include/IfcCartesianPointList3D.h"
#include "entity/include/IfcCartesianTransformationOperator.h"
#include "entity/include/IfcCartesianTransformationOperator2D.h"
#include "entity/include/IfcCartesianTransformationOperator2DnonUniform.h"
#include "entity/include/IfcCartesianTransformationOperator3D.h"
#include "entity/include/IfcCartesianTransformationOperator3DnonUniform.h"
#include "entity/include/IfcCenterLineProfileDef.h"
#include "entity/include/IfcChiller.h"
#include "entity/include/IfcChillerType.h"
#include "entity/include/IfcChimney.h"
#include "entity/include/IfcChimneyType.h"
#include "entity/include/IfcCircle.h"
#include "entity/include/IfcCircleHollowProfileDef.h"
#include "entity/include/IfcCircleProfileDef.h"
#include "entity/include/IfcCivilElement.h"
#include "entity/include/IfcCivilElementType.h"
#include "entity/include/IfcClassification.h"
#include "entity/include/IfcClassificationReference.h"
#include "entity/include/IfcClosedShell.h"
#include "entity/include/IfcCoil.h"
#include "entity/include/IfcCoilType.h"
#include "entity/include/IfcColourRgb.h"
#include "entity/include/IfcColourRgbList.h"
#include "entity/include/IfcColourSpecification.h"
#include "entity/include/IfcColumn.h"
#include "entity/include/IfcColumnStandardCase.h"
#include "entity/include/IfcColumnType.h"
#include "entity/include/IfcCommunicationsAppliance.h"
#include "entity/include/IfcCommunicationsApplianceType.h"
#include "entity/include/IfcComplexProperty.h"
#include "entity/include/IfcComplexPropertyTemplate.h"
#include "entity/include/IfcCompositeCurve.h"
#include "entity/include/IfcCompositeCurveOnSurface.h"
#include "entity/include/IfcCompositeCurveSegment.h"
#include "entity/include/IfcCompositeProfileDef.h"
#include "entity/include/IfcCompressor.h"
#include "entity/include/IfcCompressorType.h"
#include "entity/include/IfcCondenser.h"
#include "entity/include/IfcCondenserType.h"
#include "entity/include/IfcConic.h"
#include "entity/include/IfcConnectedFaceSet.h"
#include "entity/include/IfcConnectionCurveGeometry.h"
#include "entity/include/IfcConnectionGeometry.h"
#include "entity/include/IfcConnectionPointEccentricity.h"
#include "entity/include/IfcConnectionPointGeometry.h"
#include "entity/include/IfcConnectionSurfaceGeometry.h"
#include "entity/include/IfcConnectionVolumeGeometry.h"
#include "entity/include/IfcConstraint.h"
#include "entity/include/IfcConstructionEquipmentResource.h"
#include "entity/include/IfcConstructionEquipmentResourceType.h"
#include "entity/include/IfcConstructionMaterialResource.h"
#include "entity/include/IfcConstructionMaterialResourceType.h"
#include "entity/include/IfcConstructionProductResource.h"
#include "entity/include/IfcConstructionProductResourceType.h"
#include "entity/include/IfcConstructionResource.h"
#include "entity/include/IfcConstructionResourceType.h"
#include "entity/include/IfcContext.h"
#include "entity/include/IfcContextDependentUnit.h"
#include "entity/include/IfcControl.h"
#include "entity/include/IfcController.h"
#include "entity/include/IfcControllerType.h"
#include "entity/include/IfcConversionBasedUnit.h"
#include "entity/include/IfcConversionBasedUnitWithOffset.h"
#include "entity/include/IfcCooledBeam.h"
#include "entity/include/IfcCooledBeamType.h"
#include "entity/include/IfcCoolingTower.h"
#include "entity/include/IfcCoolingTowerType.h"
#include "entity/include/IfcCoordinateOperation.h"
#include "entity/include/IfcCoordinateReferenceSystem.h"
#include "entity/include/IfcCostItem.h"
#include "entity/include/IfcCostSchedule.h"
#include "entity/include/IfcCostValue.h"
#include "entity/include/IfcCovering.h"
#include "entity/include/IfcCoveringType.h"
#include "entity/include/IfcCrewResource.h"
#include "entity/include/IfcCrewResourceType.h"
#include "entity/include/IfcCsgPrimitive3D.h"
#include "entity/include/IfcCsgSolid.h"
#include "entity/include/IfcCurrencyRelationship.h"
#include "entity/include/IfcCurtainWall.h"
#include "entity/include/IfcCurtainWallType.h"
#include "entity/include/IfcCurve.h"
#include "entity/include/IfcCurveBoundedPlane.h"
#include "entity/include/IfcCurveBoundedSurface.h"
#include "entity/include/IfcCurveStyle.h"
#include "entity/include/IfcCurveStyleFont.h"
#include "entity/include/IfcCurveStyleFontAndScaling.h"
#include "entity/include/IfcCurveStyleFontPattern.h"
#include "entity/include/IfcCylindricalSurface.h"
#include "entity/include/IfcDamper.h"
#include "entity/include/IfcDamperType.h"
#include "entity/include/IfcDerivedProfileDef.h"
#include "entity/include/IfcDerivedUnit.h"
#include "entity/include/IfcDerivedUnitElement.h"
#include "entity/include/IfcDimensionalExponents.h"
#include "entity/include/IfcDirection.h"
#include "entity/include/IfcDiscreteAccessory.h"
#include "entity/include/IfcDiscreteAccessoryType.h"
#include "entity/include/IfcDistributionChamberElement.h"
#include "entity/include/IfcDistributionChamberElementType.h"
#include "entity/include/IfcDistributionCircuit.h"
#include "entity/include/IfcDistributionControlElement.h"
#include "entity/include/IfcDistributionControlElementType.h"
#include "entity/include/IfcDistributionElement.h"
#include "entity/include/IfcDistributionElementType.h"
#include "entity/include/IfcDistributionFlowElement.h"
#include "entity/include/IfcDistributionFlowElementType.h"
#include "entity/include/IfcDistributionPort.h"
#include "entity/include/IfcDistributionSystem.h"
#include "entity/include/IfcDocumentInformation.h"
#include "entity/include/IfcDocumentInformationRelationship.h"
#include "entity/include/IfcDocumentReference.h"
#include "entity/include/IfcDoor.h"
#include "entity/include/IfcDoorLiningProperties.h"
#include "entity/include/IfcDoorPanelProperties.h"
#include "entity/include/IfcDoorStandardCase.h"
#include "entity/include/IfcDoorStyle.h"
#include "entity/include/IfcDoorType.h"
#include "entity/include/IfcDraughtingPreDefinedColour.h"
#include "entity/include/IfcDraughtingPreDefinedCurveFont.h"
#include "entity/include/IfcDuctFitting.h"
#include "entity/include/IfcDuctFittingType.h"
#include "entity/include/IfcDuctSegment.h"
#include "entity/include/IfcDuctSegmentType.h"
#include "entity/include/IfcDuctSilencer.h"
#include "entity/include/IfcDuctSilencerType.h"
#include "entity/include/IfcEdge.h"
#include "entity/include/IfcEdgeCurve.h"
#include "entity/include/IfcEdgeLoop.h"
#include "entity/include/IfcElectricAppliance.h"
#include "entity/include/IfcElectricApplianceType.h"
#include "entity/include/IfcElectricDistributionBoard.h"
#include "entity/include/IfcElectricDistributionBoardType.h"
#include "entity/include/IfcElectricFlowStorageDevice.h"
#include "entity/include/IfcElectricFlowStorageDeviceType.h"
#include "entity/include/IfcElectricGenerator.h"
#include "entity/include/IfcElectricGeneratorType.h"
#include "entity/include/IfcElectricMotor.h"
#include "entity/include/IfcElectricMotorType.h"
#include "entity/include/IfcElectricTimeControl.h"
#include "entity/include/IfcElectricTimeControlType.h"
#include "entity/include/IfcElement.h"
#include "entity/include/IfcElementAssembly.h"
#include "entity/include/IfcElementAssemblyType.h"
#include "entity/include/IfcElementComponent.h"
#include "entity/include/IfcElementComponentType.h"
#include "entity/include/IfcElementQuantity.h"
#include "entity/include/IfcElementType.h"
#include "entity/include/IfcElementarySurface.h"
#include "entity/include/IfcEllipse.h"
#include "entity/include/IfcEllipseProfileDef.h"
#include "entity/include/IfcEnergyConversionDevice.h"
#include "entity/include/IfcEnergyConversionDeviceType.h"
#include "entity/include/IfcEngine.h"
#include "entity/include/IfcEngineType.h"
#include "entity/include/IfcEvaporativeCooler.h"
#include "entity/include/IfcEvaporativeCoolerType.h"
#include "entity/include/IfcEvaporator.h"
#include "entity/include/IfcEvaporatorType.h"
#include "entity/include/IfcEvent.h"
#include "entity/include/IfcEventTime.h"
#include "entity/include/IfcEventType.h"
#include "entity/include/IfcExtendedProperties.h"
#include "entity/include/IfcExternalInformation.h"
#include "entity/include/IfcExternalReference.h"
#include "entity/include/IfcExternalReferenceRelationship.h"
#include "entity/include/IfcExternalSpatialElement.h"
#include "entity/include/IfcExternalSpatialStructureElement.h"
#include "entity/include/IfcExternallyDefinedHatchStyle.h"
#include "entity/include/IfcExternallyDefinedSurfaceStyle.h"
#include "entity/include/IfcExternallyDefinedTextFont.h"
#include "entity/include/IfcExtrudedAreaSolid.h"
#include "entity/include/IfcExtrudedAreaSolidTapered.h"
#include "entity/include/IfcFace.h"
#include "entity/include/IfcFaceBasedSurfaceModel.h"
#include "entity/include/IfcFaceBound.h"
#include "entity/include/IfcFaceOuterBound.h"
#include "entity/include/IfcFaceSurface.h"
#include "entity/include/IfcFacetedBrep.h"
#include "entity/include/IfcFacetedBrepWithVoids.h"
#include "entity/include/IfcFailureConnectionCondition.h"
#include "entity/include/IfcFan.h"
#include "entity/include/IfcFanType.h"
#include "entity/include/IfcFastener.h"
#include "entity/include/IfcFastenerType.h"
#include "entity/include/IfcFeatureElement.h"
#include "entity/include/IfcFeatureElementAddition.h"
#include "entity/include/IfcFeatureElementSubtraction.h"
#include "entity/include/IfcFillAreaStyle.h"
#include "entity/include/IfcFillAreaStyleHatching.h"
#include "entity/include/IfcFillAreaStyleTiles.h"
#include "entity/include/IfcFilter.h"
#include "entity/include/IfcFilterType.h"
#include "entity/include/IfcFireSuppressionTerminal.h"
#include "entity/include/IfcFireSuppressionTerminalType.h"
#include "entity/include/IfcFixedReferenceSweptAreaSolid.h"
#include "entity/include/IfcFlowController.h"
#include "entity/include/IfcFlowControllerType.h"
#include "entity/include/IfcFlowFitting.h"
#include "entity/include/IfcFlowFittingType.h"
#include "entity/include/IfcFlowInstrument.h"
#include "entity/include/IfcFlowInstrumentType.h"
#include "entity/include/IfcFlowMeter.h"
#include "entity/include/IfcFlowMeterType.h"
#include "entity/include/IfcFlowMovingDevice.h"
#include "entity/include/IfcFlowMovingDeviceType.h"
#include "entity/include/IfcFlowSegment.h"
#include "entity/include/IfcFlowSegmentType.h"
#include "entity/include/IfcFlowStorageDevice.h"
#include "entity/include/IfcFlowStorageDeviceType.h"
#include "entity/include/IfcFlowTerminal.h"
#include "entity/include/IfcFlowTerminalType.h"
#include "entity/include/IfcFlowTreatmentDevice.h"
#include "entity/include/IfcFlowTreatmentDeviceType.h"
#include "entity/include/IfcFooting.h"
#include "entity/include/IfcFootingType.h"
#include "entity/include/IfcFurnishingElement.h"
#include "entity/include/IfcFurnishingElementType.h"
#include "entity/include/IfcFurniture.h"
#include "entity/include/IfcFurnitureType.h"
#include "entity/include/IfcGeographicElement.h"
#include "entity/include/IfcGeographicElementType.h"
#include "entity/include/IfcGeometricCurveSet.h"
#include "entity/include/IfcGeometricRepresentationContext.h"
#include "entity/include/IfcGeometricRepresentationItem.h"
#include "entity/include/IfcGeometricRepresentationSubContext.h"
#include "entity/include/IfcGeometricSet.h"
#include "entity/include/IfcGrid.h"
#include "entity/include/IfcGridAxis.h"
#include "entity/include/IfcGridPlacement.h"
#include "entity/include/IfcGroup.h"
#include "entity/include/IfcHalfSpaceSolid.h"
#include "entity/include/IfcHeatExchanger.h"
#include "entity/include/IfcHeatExchangerType.h"
#include "entity/include/IfcHumidifier.h"
#include "entity/include/IfcHumidifierType.h"
#include "entity/include/IfcIShapeProfileDef.h"
#include "entity/include/IfcImageTexture.h"
#include "entity/include/IfcIndexedColourMap.h"
#include "entity/include/IfcIndexedTextureMap.h"
#include "entity/include/IfcIndexedTriangleTextureMap.h"
#include "entity/include/IfcInterceptor.h"
#include "entity/include/IfcInterceptorType.h"
#include "entity/include/IfcInventory.h"
#include "entity/include/IfcIrregularTimeSeries.h"
#include "entity/include/IfcIrregularTimeSeriesValue.h"
#include "entity/include/IfcJunctionBox.h"
#include "entity/include/IfcJunctionBoxType.h"
#include "entity/include/IfcLShapeProfileDef.h"
#include "entity/include/IfcLaborResource.h"
#include "entity/include/IfcLaborResourceType.h"
#include "entity/include/IfcLagTime.h"
#include "entity/include/IfcLamp.h"
#include "entity/include/IfcLampType.h"
#include "entity/include/IfcLibraryInformation.h"
#include "entity/include/IfcLibraryReference.h"
#include "entity/include/IfcLightDistributionData.h"
#include "entity/include/IfcLightFixture.h"
#include "entity/include/IfcLightFixtureType.h"
#include "entity/include/IfcLightIntensityDistribution.h"
#include "entity/include/IfcLightSource.h"
#include "entity/include/IfcLightSourceAmbient.h"
#include "entity/include/IfcLightSourceDirectional.h"
#include "entity/include/IfcLightSourceGoniometric.h"
#include "entity/include/IfcLightSourcePositional.h"
#include "entity/include/IfcLightSourceSpot.h"
#include "entity/include/IfcLine.h"
#include "entity/include/IfcLocalPlacement.h"
#include "entity/include/IfcLoop.h"
#include "entity/include/IfcManifoldSolidBrep.h"
#include "entity/include/IfcMapConversion.h"
#include "entity/include/IfcMappedItem.h"
#include "entity/include/IfcMaterial.h"
#include "entity/include/IfcMaterialClassificationRelationship.h"
#include "entity/include/IfcMaterialConstituent.h"
#include "entity/include/IfcMaterialConstituentSet.h"
#include "entity/include/IfcMaterialDefinition.h"
#include "entity/include/IfcMaterialDefinitionRepresentation.h"
#include "entity/include/IfcMaterialLayer.h"
#include "entity/include/IfcMaterialLayerSet.h"
#include "entity/include/IfcMaterialLayerSetUsage.h"
#include "entity/include/IfcMaterialLayerWithOffsets.h"
#include "entity/include/IfcMaterialList.h"
#include "entity/include/IfcMaterialProfile.h"
#include "entity/include/IfcMaterialProfileSet.h"
#include "entity/include/IfcMaterialProfileSetUsage.h"
#include "entity/include/IfcMaterialProfileSetUsageTapering.h"
#include "entity/include/IfcMaterialProfileWithOffsets.h"
#include "entity/include/IfcMaterialProperties.h"
#include "entity/include/IfcMaterialRelationship.h"
#include "entity/include/IfcMaterialUsageDefinition.h"
#include "entity/include/IfcMeasureWithUnit.h"
#include "entity/include/IfcMechanicalFastener.h"
#include "entity/include/IfcMechanicalFastenerType.h"
#include "entity/include/IfcMedicalDevice.h"
#include "entity/include/IfcMedicalDeviceType.h"
#include "entity/include/IfcMember.h"
#include "entity/include/IfcMemberStandardCase.h"
#include "entity/include/IfcMemberType.h"
#include "entity/include/IfcMetric.h"
#include "entity/include/IfcMirroredProfileDef.h"
#include "entity/include/IfcMonetaryUnit.h"
#include "entity/include/IfcMotorConnection.h"
#include "entity/include/IfcMotorConnectionType.h"
#include "entity/include/IfcNamedUnit.h"
#include "entity/include/IfcObject.h"
#include "entity/include/IfcObjectDefinition.h"
#include "entity/include/IfcObjectPlacement.h"
#include "entity/include/IfcObjective.h"
#include "entity/include/IfcOccupant.h"
#include "entity/include/IfcOffsetCurve2D.h"
#include "entity/include/IfcOffsetCurve3D.h"
#include "entity/include/IfcOpenShell.h"
#include "entity/include/IfcOpeningElement.h"
#include "entity/include/IfcOpeningStandardCase.h"
#include "entity/include/IfcOrganization.h"
#include "entity/include/IfcOrganizationRelationship.h"
#include "entity/include/IfcOrientedEdge.h"
#include "entity/include/IfcOuterBoundaryCurve.h"
#include "entity/include/IfcOutlet.h"
#include "entity/include/IfcOutletType.h"
#include "entity/include/IfcOwnerHistory.h"
#include "entity/include/IfcParameterizedProfileDef.h"
#include "entity/include/IfcPath.h"
#include "entity/include/IfcPcurve.h"
#include "entity/include/IfcPerformanceHistory.h"
#include "entity/include/IfcPermeableCoveringProperties.h"
#include "entity/include/IfcPermit.h"
#include "entity/include/IfcPerson.h"
#include "entity/include/IfcPersonAndOrganization.h"
#include "entity/include/IfcPhysicalComplexQuantity.h"
#include "entity/include/IfcPhysicalQuantity.h"
#include "entity/include/IfcPhysicalSimpleQuantity.h"
#include "entity/include/IfcPile.h"
#include "entity/include/IfcPileType.h"
#include "entity/include/IfcPipeFitting.h"
#include "entity/include/IfcPipeFittingType.h"
#include "entity/include/IfcPipeSegment.h"
#include "entity/include/IfcPipeSegmentType.h"
#include "entity/include/IfcPixelTexture.h"
#include "entity/include/IfcPlacement.h"
#include "entity/include/IfcPlanarBox.h"
#include "entity/include/IfcPlanarExtent.h"
#include "entity/include/IfcPlane.h"
#include "entity/include/IfcPlate.h"
#include "entity/include/IfcPlateStandardCase.h"
#include "entity/include/IfcPlateType.h"
#include "entity/include/IfcPoint.h"
#include "entity/include/IfcPointOnCurve.h"
#include "entity/include/IfcPointOnSurface.h"
#include "entity/include/IfcPolyLoop.h"
#include "entity/include/IfcPolygonalBoundedHalfSpace.h"
#include "entity/include/IfcPolyline.h"
#include "entity/include/IfcPort.h"
#include "entity/include/IfcPostalAddress.h"
#include "entity/include/IfcPreDefinedColour.h"
#include "entity/include/IfcPreDefinedCurveFont.h"
#include "entity/include/IfcPreDefinedItem.h"
#include "entity/include/IfcPreDefinedProperties.h"
#include "entity/include/IfcPreDefinedPropertySet.h"
#include "entity/include/IfcPreDefinedTextFont.h"
#include "entity/include/IfcPresentationItem.h"
#include "entity/include/IfcPresentationLayerAssignment.h"
#include "entity/include/IfcPresentationLayerWithStyle.h"
#include "entity/include/IfcPresentationStyle.h"
#include "entity/include/IfcPresentationStyleAssignment.h"
#include "entity/include/IfcProcedure.h"
#include "entity/include/IfcProcedureType.h"
#include "entity/include/IfcProcess.h"
#include "entity/include/IfcProduct.h"
#include "entity/include/IfcProductDefinitionShape.h"
#include "entity/include/IfcProductRepresentation.h"
#include "entity/include/IfcProfileDef.h"
#include "entity/include/IfcProfileProperties.h"
#include "entity/include/IfcProject.h"
#include "entity/include/IfcProjectLibrary.h"
#include "entity/include/IfcProjectOrder.h"
#include "entity/include/IfcProjectedCRS.h"
#include "entity/include/IfcProjectionElement.h"
#include "entity/include/IfcProperty.h"
#include "entity/include/IfcPropertyAbstraction.h"
#include "entity/include/IfcPropertyBoundedValue.h"
#include "entity/include/IfcPropertyDefinition.h"
#include "entity/include/IfcPropertyDependencyRelationship.h"
#include "entity/include/IfcPropertyEnumeratedValue.h"
#include "entity/include/IfcPropertyEnumeration.h"
#include "entity/include/IfcPropertyListValue.h"
#include "entity/include/IfcPropertyReferenceValue.h"
#include "entity/include/IfcPropertySet.h"
#include "entity/include/IfcPropertySetDefinition.h"
#include "entity/include/IfcPropertySetTemplate.h"
#include "entity/include/IfcPropertySingleValue.h"
#include "entity/include/IfcPropertyTableValue.h"
#include "entity/include/IfcPropertyTemplate.h"
#include "entity/include/IfcPropertyTemplateDefinition.h"
#include "entity/include/IfcProtectiveDevice.h"
#include "entity/include/IfcProtectiveDeviceTrippingUnit.h"
#include "entity/include/IfcProtectiveDeviceTrippingUnitType.h"
#include "entity/include/IfcProtectiveDeviceType.h"
#include "entity/include/IfcProxy.h"
#include "entity/include/IfcPump.h"
#include "entity/include/IfcPumpType.h"
#include "entity/include/IfcQuantityArea.h"
#include "entity/include/IfcQuantityCount.h"
#include "entity/include/IfcQuantityLength.h"
#include "entity/include/IfcQuantitySet.h"
#include "entity/include/IfcQuantityTime.h"
#include "entity/include/IfcQuantityVolume.h"
#include "entity/include/IfcQuantityWeight.h"
#include "entity/include/IfcRailing.h"
#include "entity/include/IfcRailingType.h"
#include "entity/include/IfcRamp.h"
#include "entity/include/IfcRampFlight.h"
#include "entity/include/IfcRampFlightType.h"
#include "entity/include/IfcRampType.h"
#include "entity/include/IfcRationalBSplineCurveWithKnots.h"
#include "entity/include/IfcRationalBSplineSurfaceWithKnots.h"
#include "entity/include/IfcRectangleHollowProfileDef.h"
#include "entity/include/IfcRectangleProfileDef.h"
#include "entity/include/IfcRectangularPyramid.h"
#include "entity/include/IfcRectangularTrimmedSurface.h"
#include "entity/include/IfcRecurrencePattern.h"
#include "entity/include/IfcReference.h"
#include "entity/include/IfcRegularTimeSeries.h"
#include "entity/include/IfcReinforcementBarProperties.h"
#include "entity/include/IfcReinforcementDefinitionProperties.h"
#include "entity/include/IfcReinforcingBar.h"
#include "entity/include/IfcReinforcingBarType.h"
#include "entity/include/IfcReinforcingElement.h"
#include "entity/include/IfcReinforcingElementType.h"
#include "entity/include/IfcReinforcingMesh.h"
#include "entity/include/IfcReinforcingMeshType.h"
#include "entity/include/IfcRelAggregates.h"
#include "entity/include/IfcRelAssigns.h"
#include "entity/include/IfcRelAssignsToActor.h"
#include "entity/include/IfcRelAssignsToControl.h"
#include "entity/include/IfcRelAssignsToGroup.h"
#include "entity/include/IfcRelAssignsToGroupByFactor.h"
#include "entity/include/IfcRelAssignsToProcess.h"
#include "entity/include/IfcRelAssignsToProduct.h"
#include "entity/include/IfcRelAssignsToResource.h"
#include "entity/include/IfcRelAssociates.h"
#include "entity/include/IfcRelAssociatesApproval.h"
#include "entity/include/IfcRelAssociatesClassification.h"
#include "entity/include/IfcRelAssociatesConstraint.h"
#include "entity/include/IfcRelAssociatesDocument.h"
#include "entity/include/IfcRelAssociatesLibrary.h"
#include "entity/include/IfcRelAssociatesMaterial.h"
#include "entity/include/IfcRelConnects.h"
#include "entity/include/IfcRelConnectsElements.h"
#include "entity/include/IfcRelConnectsPathElements.h"
#include "entity/include/IfcRelConnectsPortToElement.h"
#include "entity/include/IfcRelConnectsPorts.h"
#include "entity/include/IfcRelConnectsStructuralActivity.h"
#include "entity/include/IfcRelConnectsStructuralMember.h"
#include "entity/include/IfcRelConnectsWithEccentricity.h"
#include "entity/include/IfcRelConnectsWithRealizingElements.h"
#include "entity/include/IfcRelContainedInSpatialStructure.h"
#include "entity/include/IfcRelCoversBldgElements.h"
#include "entity/include/IfcRelCoversSpaces.h"
#include "entity/include/IfcRelDeclares.h"
#include "entity/include/IfcRelDecomposes.h"
#include "entity/include/IfcRelDefines.h"
#include "entity/include/IfcRelDefinesByObject.h"
#include "entity/include/IfcRelDefinesByProperties.h"
#include "entity/include/IfcRelDefinesByTemplate.h"
#include "entity/include/IfcRelDefinesByType.h"
#include "entity/include/IfcRelFillsElement.h"
#include "entity/include/IfcRelFlowControlElements.h"
#include "entity/include/IfcRelInterferesElements.h"
#include "entity/include/IfcRelNests.h"
#include "entity/include/IfcRelProjectsElement.h"
#include "entity/include/IfcRelReferencedInSpatialStructure.h"
#include "entity/include/IfcRelRefines.h"
#include "entity/include/IfcRelSequence.h"
#include "entity/include/IfcRelServicesBuildings.h"
#include "entity/include/IfcRelSpaceBoundary.h"
#include "entity/include/IfcRelSpaceBoundary1stLevel.h"
#include "entity/include/IfcRelSpaceBoundary2ndLevel.h"
#include "entity/include/IfcRelVoidsElement.h"
#include "entity/include/IfcRelationship.h"
#include "entity/include/IfcReparametrisedCompositeCurveSegment.h"
#include "entity/include/IfcRepresentation.h"
#include "entity/include/IfcRepresentationContext.h"
#include "entity/include/IfcRepresentationItem.h"
#include "entity/include/IfcRepresentationMap.h"
#include "entity/include/IfcResource.h"
#include "entity/include/IfcResourceApprovalRelationship.h"
#include "entity/include/IfcResourceConstraintRelationship.h"
#include "entity/include/IfcResourceLevelRelationship.h"
#include "entity/include/IfcResourceTime.h"
#include "entity/include/IfcRevolvedAreaSolid.h"
#include "entity/include/IfcRevolvedAreaSolidTapered.h"
#include "entity/include/IfcRightCircularCone.h"
#include "entity/include/IfcRightCircularCylinder.h"
#include "entity/include/IfcRingSegment.h"
#include "entity/include/IfcRoof.h"
#include "entity/include/IfcRoofType.h"
#include "entity/include/IfcRoot.h"
#include "entity/include/IfcRoundedRectangleProfileDef.h"
#include "entity/include/IfcSIUnit.h"
#include "entity/include/IfcSanitaryTerminal.h"
#include "entity/include/IfcSanitaryTerminalType.h"
#include "entity/include/IfcSchedulingTime.h"
#include "entity/include/IfcSectionProperties.h"
#include "entity/include/IfcSectionReinforcementProperties.h"
#include "entity/include/IfcSectionedSpine.h"
#include "entity/include/IfcSensor.h"
#include "entity/include/IfcSensorType.h"
#include "entity/include/IfcShadingDevice.h"
#include "entity/include/IfcShadingDeviceType.h"
#include "entity/include/IfcShapeAspect.h"
#include "entity/include/IfcShapeModel.h"
#include "entity/include/IfcShapeRepresentation.h"
#include "entity/include/IfcShellBasedSurfaceModel.h"
#include "entity/include/IfcSimpleProperty.h"
#include "entity/include/IfcSimplePropertyTemplate.h"
#include "entity/include/IfcSite.h"
#include "entity/include/IfcSlab.h"
#include "entity/include/IfcSlabElementedCase.h"
#include "entity/include/IfcSlabStandardCase.h"
#include "entity/include/IfcSlabType.h"
#include "entity/include/IfcSlippageConnectionCondition.h"
#include "entity/include/IfcSolarDevice.h"
#include "entity/include/IfcSolarDeviceType.h"
#include "entity/include/IfcSolidModel.h"
#include "entity/include/IfcSpace.h"
#include "entity/include/IfcSpaceHeater.h"
#include "entity/include/IfcSpaceHeaterType.h"
#include "entity/include/IfcSpaceType.h"
#include "entity/include/IfcSpatialElement.h"
#include "entity/include/IfcSpatialElementType.h"
#include "entity/include/IfcSpatialStructureElement.h"
#include "entity/include/IfcSpatialStructureElementType.h"
#include "entity/include/IfcSpatialZone.h"
#include "entity/include/IfcSpatialZoneType.h"
#include "entity/include/IfcSphere.h"
#include "entity/include/IfcStackTerminal.h"
#include "entity/include/IfcStackTerminalType.h"
#include "entity/include/IfcStair.h"
#include "entity/include/IfcStairFlight.h"
#include "entity/include/IfcStairFlightType.h"
#include "entity/include/IfcStairType.h"
#include "entity/include/IfcStructuralAction.h"
#include "entity/include/IfcStructuralActivity.h"
#include "entity/include/IfcStructuralAnalysisModel.h"
#include "entity/include/IfcStructuralConnection.h"
#include "entity/include/IfcStructuralConnectionCondition.h"
#include "entity/include/IfcStructuralCurveAction.h"
#include "entity/include/IfcStructuralCurveConnection.h"
#include "entity/include/IfcStructuralCurveMember.h"
#include "entity/include/IfcStructuralCurveMemberVarying.h"
#include "entity/include/IfcStructuralCurveReaction.h"
#include "entity/include/IfcStructuralItem.h"
#include "entity/include/IfcStructuralLinearAction.h"
#include "entity/include/IfcStructuralLoad.h"
#include "entity/include/IfcStructuralLoadCase.h"
#include "entity/include/IfcStructuralLoadConfiguration.h"
#include "entity/include/IfcStructuralLoadGroup.h"
#include "entity/include/IfcStructuralLoadLinearForce.h"
#include "entity/include/IfcStructuralLoadOrResult.h"
#include "entity/include/IfcStructuralLoadPlanarForce.h"
#include "entity/include/IfcStructuralLoadSingleDisplacement.h"
#include "entity/include/IfcStructuralLoadSingleDisplacementDistortion.h"
#include "entity/include/IfcStructuralLoadSingleForce.h"
#include "entity/include/IfcStructuralLoadSingleForceWarping.h"
#include "entity/include/IfcStructuralLoadStatic.h"
#include "entity/include/IfcStructuralLoadTemperature.h"
#include "entity/include/IfcStructuralMember.h"
#include "entity/include/IfcStructuralPlanarAction.h"
#include "entity/include/IfcStructuralPointAction.h"
#include "entity/include/IfcStructuralPointConnection.h"
#include "entity/include/IfcStructuralPointReaction.h"
#include "entity/include/IfcStructuralReaction.h"
#include "entity/include/IfcStructuralResultGroup.h"
#include "entity/include/IfcStructuralSurfaceAction.h"
#include "entity/include/IfcStructuralSurfaceConnection.h"
#include "entity/include/IfcStructuralSurfaceMember.h"
#include "entity/include/IfcStructuralSurfaceMemberVarying.h"
#include "entity/include/IfcStructuralSurfaceReaction.h"
#include "entity/include/IfcStyleModel.h"
#include "entity/include/IfcStyledItem.h"
#include "entity/include/IfcStyledRepresentation.h"
#include "entity/include/IfcSubContractResource.h"
#include "entity/include/IfcSubContractResourceType.h"
#include "entity/include/IfcSubedge.h"
#include "entity/include/IfcSurface.h"
#include "entity/include/IfcSurfaceCurveSweptAreaSolid.h"
#include "entity/include/IfcSurfaceFeature.h"
#include "entity/include/IfcSurfaceOfLinearExtrusion.h"
#include "entity/include/IfcSurfaceOfRevolution.h"
#include "entity/include/IfcSurfaceReinforcementArea.h"
#include "entity/include/IfcSurfaceStyle.h"
#include "entity/include/IfcSurfaceStyleLighting.h"
#include "entity/include/IfcSurfaceStyleRefraction.h"
#include "entity/include/IfcSurfaceStyleRendering.h"
#include "entity/include/IfcSurfaceStyleShading.h"
#include "entity/include/IfcSurfaceStyleWithTextures.h"
#include "entity/include/IfcSurfaceTexture.h"
#include "entity/include/IfcSweptAreaSolid.h"
#include "entity/include/IfcSweptDiskSolid.h"
#include "entity/include/IfcSweptDiskSolidPolygonal.h"
#include "entity/include/IfcSweptSurface.h"
#include "entity/include/IfcSwitchingDevice.h"
#include "entity/include/IfcSwitchingDeviceType.h"
#include "entity/include/IfcSystem.h"
#include "entity/include/IfcSystemFurnitureElement.h"
#include "entity/include/IfcSystemFurnitureElementType.h"
#include "entity/include/IfcTShapeProfileDef.h"
#include "entity/include/IfcTable.h"
#include "entity/include/IfcTableColumn.h"
#include "entity/include/IfcTableRow.h"
#include "entity/include/IfcTank.h"
#include "entity/include/IfcTankType.h"
#include "entity/include/IfcTask.h"
#include "entity/include/IfcTaskTime.h"
#include "entity/include/IfcTaskTimeRecurring.h"
#include "entity/include/IfcTaskType.h"
#include "entity/include/IfcTelecomAddress.h"
#include "entity/include/IfcTendon.h"
#include "entity/include/IfcTendonAnchor.h"
#include "entity/include/IfcTendonAnchorType.h"
#include "entity/include/IfcTendonType.h"
#include "entity/include/IfcTessellatedFaceSet.h"
#include "entity/include/IfcTessellatedItem.h"
#include "entity/include/IfcTextLiteral.h"
#include "entity/include/IfcTextLiteralWithExtent.h"
#include "entity/include/IfcTextStyle.h"
#include "entity/include/IfcTextStyleFontModel.h"
#include "entity/include/IfcTextStyleForDefinedFont.h"
#include "entity/include/IfcTextStyleTextModel.h"
#include "entity/include/IfcTextureCoordinate.h"
#include "entity/include/IfcTextureCoordinateGenerator.h"
#include "entity/include/IfcTextureMap.h"
#include "entity/include/IfcTextureVertex.h"
#include "entity/include/IfcTextureVertexList.h"
#include "entity/include/IfcTimePeriod.h"
#include "entity/include/IfcTimeSeries.h"
#include "entity/include/IfcTimeSeriesValue.h"
#include "entity/include/IfcTopologicalRepresentationItem.h"
#include "entity/include/IfcTopologyRepresentation.h"
#include "entity/include/IfcTransformer.h"
#include "entity/include/IfcTransformerType.h"
#include "entity/include/IfcTransportElement.h"
#include "entity/include/IfcTransportElementType.h"
#include "entity/include/IfcTrapeziumProfileDef.h"
#include "entity/include/IfcTriangulatedFaceSet.h"
#include "entity/include/IfcTrimmedCurve.h"
#include "entity/include/IfcTubeBundle.h"
#include "entity/include/IfcTubeBundleType.h"
#include "entity/include/IfcTunnel.h"
#include "entity/include/IfcTunnelElement.h"
#include "entity/include/IfcTunnelPart.h"
#include "entity/include/IfcTunnelSpace.h"
#include "entity/include/IfcTunnnelInstallation.h"
#include "entity/include/IfcTypeObject.h"
#include "entity/include/IfcTypeProcess.h"
#include "entity/include/IfcTypeProduct.h"
#include "entity/include/IfcTypeResource.h"
#include "entity/include/IfcUShapeProfileDef.h"
#include "entity/include/IfcUnitAssignment.h"
#include "entity/include/IfcUnitaryControlElement.h"
#include "entity/include/IfcUnitaryControlElementType.h"
#include "entity/include/IfcUnitaryEquipment.h"
#include "entity/include/IfcUnitaryEquipmentType.h"
#include "entity/include/IfcValve.h"
#include "entity/include/IfcValveType.h"
#include "entity/include/IfcVector.h"
#include "entity/include/IfcVertex.h"
#include "entity/include/IfcVertexLoop.h"
#include "entity/include/IfcVertexPoint.h"
#include "entity/include/IfcVibrationIsolator.h"
#include "entity/include/IfcVibrationIsolatorType.h"
#include "entity/include/IfcVirtualElement.h"
#include "entity/include/IfcVirtualGridIntersection.h"
#include "entity/include/IfcVoidingFeature.h"
#include "entity/include/IfcWall.h"
#include "entity/include/IfcWallElementedCase.h"
#include "entity/include/IfcWallStandardCase.h"
#include "entity/include/IfcWallType.h"
#include "entity/include/IfcWasteTerminal.h"
#include "entity/include/IfcWasteTerminalType.h"
#include "entity/include/IfcWindow.h"
#include "entity/include/IfcWindowLiningProperties.h"
#include "entity/include/IfcWindowPanelProperties.h"
#include "entity/include/IfcWindowStandardCase.h"
#include "entity/include/IfcWindowStyle.h"
#include "entity/include/IfcWindowType.h"
#include "entity/include/IfcWorkCalendar.h"
#include "entity/include/IfcWorkControl.h"
#include "entity/include/IfcWorkPlan.h"
#include "entity/include/IfcWorkSchedule.h"
#include "entity/include/IfcWorkTime.h"
#include "entity/include/IfcZShapeProfileDef.h"
#include "entity/include/IfcZone.h"
