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

#include <sstream>
#include <limits>

#include "OpenInfraPlatform/IfcRoad/model/IfcRoadException.h"
#include "OpenInfraPlatform/IfcRoad/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcRoad/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcRoad/IfcRoadEntityEnums.h"
#include "include/IfcAddress.h"
#include "include/IfcAddressTypeEnum.h"
#include "include/IfcLabel.h"
#include "include/IfcOrganization.h"
#include "include/IfcPerson.h"
#include "include/IfcText.h"

namespace OpenInfraPlatform
{
	namespace IfcRoad
	{
		// ENTITY IfcAddress 
		IfcAddress::IfcAddress() { m_entity_enum = IFCADDRESS; }
		IfcAddress::IfcAddress( int id ) { m_id = id; m_entity_enum = IFCADDRESS; }
		IfcAddress::~IfcAddress() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcAddress::setEntity( shared_ptr<IfcRoadEntity> other_entity )
		{
			shared_ptr<IfcAddress> other = dynamic_pointer_cast<IfcAddress>(other_entity);
			if( !other) { return; }
			m_Purpose = other->m_Purpose;
			m_Description = other->m_Description;
			m_UserDefinedPurpose = other->m_UserDefinedPurpose;
		}
		void IfcAddress::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCADDRESS" << "(";
			if( m_Purpose ) { m_Purpose->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_UserDefinedPurpose ) { m_UserDefinedPurpose->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcAddress::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcAddress::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcRoadEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcAddress, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcRoadException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcAddress, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_Purpose = IfcAddressTypeEnum::readStepData( args[0] );
			m_Description = IfcText::readStepData( args[1] );
			m_UserDefinedPurpose = IfcLabel::readStepData( args[2] );
		}
		void IfcAddress::setInverseCounterparts( shared_ptr<IfcRoadEntity> )
		{
		}
		void IfcAddress::unlinkSelf()
		{
		}
	} // end namespace IfcRoad
} // end namespace OpenInfraPlatform
