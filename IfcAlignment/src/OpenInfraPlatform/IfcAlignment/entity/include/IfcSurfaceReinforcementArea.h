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
#include "IfcStructuralLoadOrResult.h"

namespace OpenInfraPlatform
{
	namespace IfcAlignment
	{
		class IfcLengthMeasure;
		class IfcRatioMeasure;
		//ENTITY
		class IfcSurfaceReinforcementArea : public IfcStructuralLoadOrResult
		{
		public:
			IfcSurfaceReinforcementArea();
			IfcSurfaceReinforcementArea( int id );
			~IfcSurfaceReinforcementArea();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<IfcAlignmentP6Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignmentP6Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<IfcAlignmentP6Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcSurfaceReinforcementArea"; }


			// IfcStructuralLoad -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcLabel>							m_Name;						//optional

			// IfcStructuralLoadOrResult -----------------------------------------------------------

			// IfcSurfaceReinforcementArea -----------------------------------------------------------
			// attributes:
			std::vector<shared_ptr<IfcLengthMeasure> >	m_SurfaceReinforcement1;	//optional
			std::vector<shared_ptr<IfcLengthMeasure> >	m_SurfaceReinforcement2;	//optional
			shared_ptr<IfcRatioMeasure>					m_ShearReinforcement;		//optional
		};
	} // end namespace IfcAlignment
} // end namespace OpenInfraPlatform

