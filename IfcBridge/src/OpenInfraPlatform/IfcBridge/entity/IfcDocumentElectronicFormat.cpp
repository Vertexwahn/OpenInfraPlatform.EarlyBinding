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

#include "model/IfcBridgeException.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "IfcBridgeEntityEnums.h"
#include "include/IfcDocumentElectronicFormat.h"
#include "include/IfcLabel.h"

namespace OpenInfraPlatform
{
	namespace IfcBridge
	{
		// ENTITY IfcDocumentElectronicFormat 
		IfcDocumentElectronicFormat::IfcDocumentElectronicFormat() { m_entity_enum = IFCDOCUMENTELECTRONICFORMAT; }
		IfcDocumentElectronicFormat::IfcDocumentElectronicFormat( int id ) { m_id = id; m_entity_enum = IFCDOCUMENTELECTRONICFORMAT; }
		IfcDocumentElectronicFormat::~IfcDocumentElectronicFormat() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcDocumentElectronicFormat::setEntity( shared_ptr<IfcBridgeEntity> other_entity )
		{
			shared_ptr<IfcDocumentElectronicFormat> other = dynamic_pointer_cast<IfcDocumentElectronicFormat>(other_entity);
			if( !other) { return; }
			m_FileExtension = other->m_FileExtension;
			m_MimeContentType = other->m_MimeContentType;
			m_MimeSubtype = other->m_MimeSubtype;
		}
		void IfcDocumentElectronicFormat::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCDOCUMENTELECTRONICFORMAT" << "(";
			if( m_FileExtension ) { m_FileExtension->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_MimeContentType ) { m_MimeContentType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_MimeSubtype ) { m_MimeSubtype->getStepParameter( stream ); } else { stream << "$"; }
			stream << ");";
		}
		void IfcDocumentElectronicFormat::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcDocumentElectronicFormat::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcBridgeEntity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<3 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcDocumentElectronicFormat, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcBridgeException( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>3 ){ std::cout << "Wrong parameter count for entity IfcDocumentElectronicFormat, expecting 3, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			m_FileExtension = IfcLabel::readStepData( args[0] );
			m_MimeContentType = IfcLabel::readStepData( args[1] );
			m_MimeSubtype = IfcLabel::readStepData( args[2] );
		}
		void IfcDocumentElectronicFormat::setInverseCounterparts( shared_ptr<IfcBridgeEntity> )
		{
		}
		void IfcDocumentElectronicFormat::unlinkSelf()
		{
		}
	} // end namespace IfcBridge
} // end namespace OpenInfraPlatform
