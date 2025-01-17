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
#include "IfcBoundaryFaceCondition.h"
#include "IfcLabel.h"
#include "IfcModulusOfSubgradeReactionSelect.h"
#include "IfcModulusOfSubgradeReactionSelect.h"
#include "IfcModulusOfSubgradeReactionSelect.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcBoundaryFaceCondition
			IfcBoundaryFaceCondition::IfcBoundaryFaceCondition() { m_entity_enum = IFCBOUNDARYFACECONDITION;}
			IfcBoundaryFaceCondition::IfcBoundaryFaceCondition( int id ) { m_id = id; m_entity_enum = IFCBOUNDARYFACECONDITION;}
			IfcBoundaryFaceCondition::~IfcBoundaryFaceCondition() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcBoundaryFaceCondition::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcBoundaryFaceCondition> other = std::dynamic_pointer_cast<IfcBoundaryFaceCondition>(other_entity);
				if( !other) { return; }
				m_Name = other->m_Name;
				m_TranslationalStiffnessByAreaX = other->m_TranslationalStiffnessByAreaX;
				m_TranslationalStiffnessByAreaY = other->m_TranslationalStiffnessByAreaY;
				m_TranslationalStiffnessByAreaZ = other->m_TranslationalStiffnessByAreaZ;
			}
			void IfcBoundaryFaceCondition::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCBOUNDARYFACECONDITION" << "(";
				if( m_Name) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_TranslationalStiffnessByAreaX) { m_TranslationalStiffnessByAreaX->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_TranslationalStiffnessByAreaY) { m_TranslationalStiffnessByAreaY->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_TranslationalStiffnessByAreaZ) { m_TranslationalStiffnessByAreaZ->getStepParameter( stream ); } else { stream << "$"; }
				stream << ");";
			}
			void IfcBoundaryFaceCondition::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcBoundaryFaceCondition::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcBoundaryFaceCondition, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<4 ){ std::cout << "Wrong parameter count for entity IfcBoundaryFaceCondition, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_Name = IfcLabel::readStepData( args[0] );
				m_TranslationalStiffnessByAreaX = IfcModulusOfSubgradeReactionSelect::readStepData( args[1], map );
				m_TranslationalStiffnessByAreaY = IfcModulusOfSubgradeReactionSelect::readStepData( args[2], map );
				m_TranslationalStiffnessByAreaZ = IfcModulusOfSubgradeReactionSelect::readStepData( args[3], map );
			}
			void IfcBoundaryFaceCondition::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcBoundaryCondition::setInverseCounterparts(ptr_self_entity);
			}
			void IfcBoundaryFaceCondition::unlinkSelf()
			{
				IfcBoundaryCondition::unlinkSelf();
			}
	}
}
