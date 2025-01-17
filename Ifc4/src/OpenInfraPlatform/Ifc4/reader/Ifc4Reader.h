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
#include "../model/shared_ptr.h"
#include "../model/Ifc4Object.h"
#include "../model/Ifc4Model.h"
#include "../model/StatusObservable.h"

namespace OpenInfraPlatform
{
    namespace Ifc4
    {
        class Ifc4Reader : public StatusObservable
        {
        public:
            Ifc4Reader();
            ~Ifc4Reader();
            virtual void readStreamHeader( std::string& in, shared_ptr<Ifc4Model> model ) = 0;
            virtual void readStreamData( std::string& in, std::map<int,shared_ptr<Ifc4Entity> >& map ) = 0;

        protected:
            Ifc4Model::IfcVersion m_ifc_version;
            std::string m_file_schema;
        };
    } // end namespace Ifc4
} // end namespace OpenInfraPlatform
