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

#include "model/Ifc2x3Exception.h"
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "Ifc2x3EntityEnums.h"
#include "include/IfcCartesianTransformationOperator2D.h"
#include "include/IfcInteger.h"
#include "include/IfcPixelTexture.h"
#include "include/IfcSurfaceTextureEnum.h"

namespace OpenInfraPlatform
{
	namespace Ifc2x3
	{
		// ENTITY IfcPixelTexture 
		IfcPixelTexture::IfcPixelTexture() { m_entity_enum = IFCPIXELTEXTURE; }
		IfcPixelTexture::IfcPixelTexture( int id ) { m_id = id; m_entity_enum = IFCPIXELTEXTURE; }
		IfcPixelTexture::~IfcPixelTexture() {}

		// method setEntity takes over all attributes from another instance of the class
		void IfcPixelTexture::setEntity( shared_ptr<Ifc2x3Entity> other_entity )
		{
			shared_ptr<IfcPixelTexture> other = dynamic_pointer_cast<IfcPixelTexture>(other_entity);
			if( !other) { return; }
			m_RepeatS = other->m_RepeatS;
			m_RepeatT = other->m_RepeatT;
			m_TextureType = other->m_TextureType;
			m_TextureTransform = other->m_TextureTransform;
			m_Width = other->m_Width;
			m_Height = other->m_Height;
			m_ColourComponents = other->m_ColourComponents;
			m_Pixel = other->m_Pixel;
		}
		void IfcPixelTexture::getStepLine( std::stringstream& stream ) const
		{
			stream << "#" << m_id << "=IFCPIXELTEXTURE" << "(";
			if( m_RepeatS == false ) { stream << ".F."; }
			else if( m_RepeatS == true ) { stream << ".T."; }
			stream << ",";
			if( m_RepeatT == false ) { stream << ".F."; }
			else if( m_RepeatT == true ) { stream << ".T."; }
			stream << ",";
			if( m_TextureType ) { m_TextureType->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_TextureTransform ) { stream << "#" << m_TextureTransform->getId(); } else { stream << "$"; }
			stream << ",";
			if( m_Width ) { m_Width->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_Height ) { m_Height->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			if( m_ColourComponents ) { m_ColourComponents->getStepParameter( stream ); } else { stream << "$"; }
			stream << ",";
			writeConstCharList( stream, m_Pixel );
			stream << ");";
		}
		void IfcPixelTexture::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
		void IfcPixelTexture::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc2x3Entity> >& map )
		{
			const int num_args = (int)args.size();
			if( num_args<8 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcPixelTexture, expecting 8, having " << num_args << ". Object id: " << getId() << std::endl; throw Ifc2x3Exception( strserr.str().c_str() ); }
			#ifdef _DEBUG
			if( num_args>8 ){ std::cout << "Wrong parameter count for entity IfcPixelTexture, expecting 8, having " << num_args << ". Object id: " << getId() << std::endl; }
			#endif
			if( _stricmp( args[0].c_str(), ".F." ) == 0 ) { m_RepeatS = false; }
			else if( _stricmp( args[0].c_str(), ".T." ) == 0 ) { m_RepeatS = true; }
			if( _stricmp( args[1].c_str(), ".F." ) == 0 ) { m_RepeatT = false; }
			else if( _stricmp( args[1].c_str(), ".T." ) == 0 ) { m_RepeatT = true; }
			m_TextureType = IfcSurfaceTextureEnum::readStepData( args[2] );
			readEntityReference( args[3], m_TextureTransform, map );
			m_Width = IfcInteger::readStepData( args[4] );
			m_Height = IfcInteger::readStepData( args[5] );
			m_ColourComponents = IfcInteger::readStepData( args[6] );
			readConstCharList( args[7], m_Pixel );
		}
		void IfcPixelTexture::setInverseCounterparts( shared_ptr<Ifc2x3Entity> ptr_self_entity )
		{
			IfcSurfaceTexture::setInverseCounterparts( ptr_self_entity );
		}
		void IfcPixelTexture::unlinkSelf()
		{
			IfcSurfaceTexture::unlinkSelf();
		}
	} // end namespace Ifc2x3
} // end namespace OpenInfraPlatform
