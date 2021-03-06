////////////////////////////////////////////////////////////////////////////////
//
//  Copyright (C) 2019-     Equinor ASA
//
//  ResInsight is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  ResInsight is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.
//
//  See the GNU General Public License at <http://www.gnu.org/licenses/gpl.html>
//  for more details.
//
/////////////////////////////////////////////////////////////////////////////////

#include "RicDefaultDockConfigGeoMechFeature.h"

#include "RiuDockWidgetTools.h"

#include <QAction>

CAF_CMD_SOURCE_INIT( RicDefaultDockConfigGeoMechFeature, "RicDefaultDockConfigGeoMechFeature" );

//--------------------------------------------------------------------------------------------------
///
//--------------------------------------------------------------------------------------------------
bool RicDefaultDockConfigGeoMechFeature::isCommandEnabled()
{
    return true;
}

//--------------------------------------------------------------------------------------------------
///
//--------------------------------------------------------------------------------------------------
void RicDefaultDockConfigGeoMechFeature::onActionTriggered( bool isChecked )
{
    RiuDockWidgetTools::setVisibleDockingWindowsForGeoMech();
}

//--------------------------------------------------------------------------------------------------
///
//--------------------------------------------------------------------------------------------------
void RicDefaultDockConfigGeoMechFeature::setupActionLook( QAction* actionToSetup )
{
    actionToSetup->setText( "Default Window Visibility (Geo Mech)" );
}
