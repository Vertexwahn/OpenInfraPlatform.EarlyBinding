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
#include "IfcCsgSolid.h"
#include "IfcCsgSelect.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcCsgSolid
			IfcCsgSolid::IfcCsgSolid() { m_entity_enum = IFCCSGSOLID;}
			IfcCsgSolid::IfcCsgSolid( int id ) { m_id = id; m_entity_enum = IFCCSGSOLID;}
			IfcCsgSolid::~IfcCsgSolid() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcCsgSolid::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcCsgSolid> other = std::dynamic_pointer_cast<IfcCsgSolid>(other_entity);
				if( !other) { return; }
				m_TreeRootExpression = other->m_TreeRootExpression;
			}
			void IfcCsgSolid::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCCSGSOLID" << "(";
				if( m_TreeRootExpression) { m_TreeRootExpression->getStepParameter( stream ); } else { stream << "$"; }
				stream << ");";
			}
			void IfcCsgSolid::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcCsgSolid::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<1 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcCsgSolid, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<1 ){ std::cout << "Wrong parameter count for entity IfcCsgSolid, expecting 1, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_TreeRootExpression = IfcCsgSelect::readStepData( args[0], map );
			}
			void IfcCsgSolid::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcSolidModel::setInverseCounterparts(ptr_self_entity);
			}
			void IfcCsgSolid::unlinkSelf()
			{
				IfcSolidModel::unlinkSelf();
			}
	}
}
