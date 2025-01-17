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

#include <sstream>
#include <vector>
#include <map>
#include "../model/shared_ptr.h"

namespace OpenInfraPlatform
{
    namespace IfcTunnel
    {
        enum IfcTunnelEntityEnum;

        class IfcTunnelObject
        {
        public:
            virtual const char* classname() const
            {
                return "IfcTunnelObject";
            }
            virtual void getStepData( std::stringstream& ) {};
        };

        class IfcTunnelEntity : public IfcTunnelObject
        {
        protected:
            int m_id;

        public:
            IfcTunnelEntity();
            IfcTunnelEntity( int id );
            virtual ~IfcTunnelEntity();
            virtual const char* classname() const
            {
                return "IfcTunnelEntity";
            }
            virtual void getStepLine( std::stringstream& stream ) const;
            virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
            virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcTunnelEntity> >& map );
            virtual void setInverseCounterparts( shared_ptr<IfcTunnelEntity> ptr_self );
            virtual void unlinkSelf();
            virtual const int getId() const
            {
                return m_id;
            }
            void setId( int id );
            std::string m_arguments;
            IfcTunnelEntityEnum m_entity_enum;
        };

		//// pure abstract class to derive IFC TYPEs from
        class IfcTunnelType : public IfcTunnelObject
        {
        public:
            virtual const char* classname() const
            {
                return "IfcTunnelType";
            }
            virtual void getStepData( std::stringstream& ) {};
        };


		//// pure abstract class to derive IFC TYPEs from
        class IfcTunnelAbstractSelect
        {
        public:
            virtual const char* classname() const
            {
                return "AbstractSelect";
            }
            virtual void getStepData( std::stringstream& ) {};
        };

        class IfcTunnelAbstractEnum
        {
        public:
            virtual const char* classname() const
            {
                return "AbstractEnum";
            }
            virtual void getStepData( std::stringstream& ) {};
        };
    } // end namespace IfcTunnel
} // end namespace OpenInfraPlatform