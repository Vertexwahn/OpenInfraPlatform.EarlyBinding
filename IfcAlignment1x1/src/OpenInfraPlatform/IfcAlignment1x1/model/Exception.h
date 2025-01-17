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

#include <exception>
#include <string>

#define __FUNC__ __FUNCTION__
#define _func_ __FUNCTION__
#define __func__ __FUNC__

namespace OpenInfraPlatform
{
    namespace IfcAlignment1x1
    {
        class IfcAlignment1x1Exception : public std::exception
        {
        public:
            IfcAlignment1x1Exception( std::string reason );
            IfcAlignment1x1Exception( std::string reason, const char* function_name );
            ~IfcAlignment1x1Exception() throw();
            virtual const char* what() const throw();

            std::string m_reason;
        };
    } // end namespace IfcAlignment1x1
} // end namespace OpenInfraPlatform
