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
#include "OpenInfraPlatform/IfcAlignment/model/shared_ptr.h"
#include "OpenInfraPlatform/IfcAlignment/model/IfcAlignmentP6Object.h"
#include "IfcPreDefinedProperties.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		class IfcAreaMeasure;
		class IfcLabel;
		class IfcReinforcingBarSurfaceEnum;
		class IfcLengthMeasure;
		class IfcPositiveLengthMeasure;
		class IfcCountMeasure;
		//ENTITY
		class IfcReinforcementBarProperties : public IfcPreDefinedProperties
		{
		public:
			IfcReinforcementBarProperties();
			IfcReinforcementBarProperties( int id );
			~IfcReinforcementBarProperties();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcAlignmentP6Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcReinforcementBarProperties"; }


			// IfcPropertyAbstraction -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;

			// IfcPreDefinedProperties -----------------------------------------------------------

			// IfcReinforcementBarProperties -----------------------------------------------------------
			// attributes:
			shared_ptr<IfcAreaMeasure>					m_TotalCrossSectionArea;
			shared_ptr<IfcLabel>							m_SteelGrade;
			shared_ptr<IfcReinforcingBarSurfaceEnum>		m_BarSurface;				//optional
			shared_ptr<IfcLengthMeasure>					m_EffectiveDepth;			//optional
			shared_ptr<IfcPositiveLengthMeasure>			m_NominalBarDiameter;		//optional
			shared_ptr<IfcCountMeasure>					m_BarCount;					//optional
		};
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform

