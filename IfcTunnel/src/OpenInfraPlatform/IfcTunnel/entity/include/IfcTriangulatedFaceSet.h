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
#include "IfcTessellatedFaceSet.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		//ENTITY
		class IfcTriangulatedFaceSet : public IfcTessellatedFaceSet
		{
		public:
			IfcTriangulatedFaceSet();
			IfcTriangulatedFaceSet( int id );
			~IfcTriangulatedFaceSet();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcTunnelEntity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcTriangulatedFaceSet"; }


			// IfcRepresentationItem -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
			//  std::vector<weak_ptr<IfcStyledItem> >		m_StyledByItem_inverse;

			// IfcGeometricRepresentationItem -----------------------------------------------------------

			// IfcTessellatedItem -----------------------------------------------------------

			// IfcTessellatedFaceSet -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcCartesianPointList3D>			m_Coordinates;
			//  std::vector<std::vector<shared_ptr<IfcParameterValue> > >	m_Normals;					//optional
			//  bool											m_Closed;					//optional
			// inverse attributes:
			//  std::vector<weak_ptr<IfcIndexedColourMap> >	m_HasColours_inverse;
			//  std::vector<weak_ptr<IfcIndexedTextureMap> >	m_HasTextures_inverse;

			// IfcTriangulatedFaceSet -----------------------------------------------------------
			// attributes:
			std::vector<std::vector<int > >				m_CoordIndex;
			std::vector<std::vector<int > >				m_NormalIndex;				//optional
		};
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform

