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
#include "IfcBSplineSurface.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		class IfcParameterValue;
		class IfcKnotType;
		//ENTITY
		class IfcBSplineSurfaceWithKnots : public IfcBSplineSurface
		{
		public:
			IfcBSplineSurfaceWithKnots();
			IfcBSplineSurfaceWithKnots( int id );
			~IfcBSplineSurfaceWithKnots();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<Ifc4Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcBSplineSurfaceWithKnots"; }


			// IfcRepresentationItem -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
			//  std::vector<weak_ptr<IfcStyledItem> >		m_StyledByItem_inverse;

			// IfcGeometricRepresentationItem -----------------------------------------------------------

			// IfcSurface -----------------------------------------------------------

			// IfcBoundedSurface -----------------------------------------------------------

			// IfcBSplineSurface -----------------------------------------------------------
			// attributes:
			//  int											m_UDegree;
			//  int											m_VDegree;
			//  std::vector<std::vector<shared_ptr<IfcCartesianPoint> > >	m_ControlPointsList;
			//  shared_ptr<IfcBSplineSurfaceForm>			m_SurfaceForm;
			//  shared_ptr<IfcLogical>						m_UClosed;
			//  shared_ptr<IfcLogical>						m_VClosed;
			//  shared_ptr<IfcLogical>						m_SelfIntersect;

			// IfcBSplineSurfaceWithKnots -----------------------------------------------------------
			// attributes:
			std::vector<int >							m_UMultiplicities;
			std::vector<int >							m_VMultiplicities;
			std::vector<shared_ptr<IfcParameterValue> >	m_UKnots;
			std::vector<shared_ptr<IfcParameterValue> >	m_VKnots;
			shared_ptr<IfcKnotType>						m_KnotSpec;
		};
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform

