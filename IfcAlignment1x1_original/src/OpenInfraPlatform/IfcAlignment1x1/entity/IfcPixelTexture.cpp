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
#include "IfcPixelTexture.h"
#include "IfcBoolean.h"
#include "IfcBoolean.h"
#include "IfcIdentifier.h"
#include "IfcCartesianTransformationOperator2D.h"
#include "IfcIdentifier.h"
#include "IfcInteger.h"
#include "IfcInteger.h"
#include "IfcInteger.h"
#include "IfcBinary.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcPixelTexture
			IfcPixelTexture::IfcPixelTexture() { m_entity_enum = IFCPIXELTEXTURE;}
			IfcPixelTexture::IfcPixelTexture( int id ) { m_id = id; m_entity_enum = IFCPIXELTEXTURE;}
			IfcPixelTexture::~IfcPixelTexture() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcPixelTexture::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcPixelTexture> other = std::dynamic_pointer_cast<IfcPixelTexture>(other_entity);
				if( !other) { return; }
				m_RepeatS = other->m_RepeatS;
				m_RepeatT = other->m_RepeatT;
				m_Mode = other->m_Mode;
				m_TextureTransform = other->m_TextureTransform;
				m_Parameter = other->m_Parameter;
				m_Width = other->m_Width;
				m_Height = other->m_Height;
				m_ColourComponents = other->m_ColourComponents;
				m_Pixel = other->m_Pixel;
			}
			void IfcPixelTexture::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCPIXELTEXTURE" << "(";
				if( m_RepeatS) { m_RepeatS->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_RepeatT) { m_RepeatT->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Mode) { m_Mode->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_TextureTransform) { stream << "#" << m_TextureTransform->getId(); } else { stream << "$"; }
				stream << ",";
				writeTypeList( stream, m_Parameter );
				stream << ",";
				if( m_Width) { m_Width->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Height) { m_Height->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_ColourComponents) { m_ColourComponents->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				writeTypeList( stream, m_Pixel );
				stream << ");";
			}
			void IfcPixelTexture::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcPixelTexture::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<9 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcPixelTexture, expecting 9, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<9 ){ std::cout << "Wrong parameter count for entity IfcPixelTexture, expecting 9, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_RepeatS = IfcBoolean::readStepData( args[0] );
				m_RepeatT = IfcBoolean::readStepData( args[1] );
				m_Mode = IfcIdentifier::readStepData( args[2] );
				readEntityReference( args[3], m_TextureTransform, map);
				readTypeList( args[4], m_Parameter );
				m_Width = IfcInteger::readStepData( args[5] );
				m_Height = IfcInteger::readStepData( args[6] );
				m_ColourComponents = IfcInteger::readStepData( args[7] );
				readTypeList( args[8], m_Pixel );
			}
			void IfcPixelTexture::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcSurfaceTexture::setInverseCounterparts(ptr_self_entity);
			}
			void IfcPixelTexture::unlinkSelf()
			{
				IfcSurfaceTexture::unlinkSelf();
			}
	}
}
