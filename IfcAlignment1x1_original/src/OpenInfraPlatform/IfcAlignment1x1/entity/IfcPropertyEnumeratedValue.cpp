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
#include "OpenInfraPlatform/IfcAlignment1x1/model/Exception.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/IfcAlignment1x1EntityEnums.h"
#include "IfcPropertyEnumeratedValue.h"
#include "IfcIdentifier.h"
#include "IfcText.h"
#include "IfcValue.h"
#include "IfcPropertyEnumeration.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcPropertyEnumeratedValue
			IfcPropertyEnumeratedValue::IfcPropertyEnumeratedValue() { m_entity_enum = IFCPROPERTYENUMERATEDVALUE;}
			IfcPropertyEnumeratedValue::IfcPropertyEnumeratedValue( int id ) { m_id = id; m_entity_enum = IFCPROPERTYENUMERATEDVALUE;}
			IfcPropertyEnumeratedValue::~IfcPropertyEnumeratedValue() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcPropertyEnumeratedValue::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcPropertyEnumeratedValue> other = std::dynamic_pointer_cast<IfcPropertyEnumeratedValue>(other_entity);
				if( !other) { return; }
				m_Name = other->m_Name;
				m_Description = other->m_Description;
				m_EnumerationValues = other->m_EnumerationValues;
				m_EnumerationReference = other->m_EnumerationReference;
			}
			void IfcPropertyEnumeratedValue::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCPROPERTYENUMERATEDVALUE" << "(";
				if( m_Name) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Description) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				writeTypeList( stream, m_EnumerationValues );
				stream << ",";
				if( m_EnumerationReference) { stream << "#" << m_EnumerationReference->getId(); } else { stream << "$"; }
				stream << ");";
			}
			void IfcPropertyEnumeratedValue::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcPropertyEnumeratedValue::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcPropertyEnumeratedValue, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<4 ){ std::cout << "Wrong parameter count for entity IfcPropertyEnumeratedValue, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_Name = IfcIdentifier::readStepData( args[0] );
				m_Description = IfcText::readStepData( args[1] );
				readSelectList( args[2], m_EnumerationValues, map );
				readEntityReference( args[3], m_EnumerationReference, map);
			}
			void IfcPropertyEnumeratedValue::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcSimpleProperty::setInverseCounterparts(ptr_self_entity);
			}
			void IfcPropertyEnumeratedValue::unlinkSelf()
			{
				IfcSimpleProperty::unlinkSelf();
			}
	}
}
