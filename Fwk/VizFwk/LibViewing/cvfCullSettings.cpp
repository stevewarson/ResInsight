//##################################################################################################
//
//   Custom Visualization Core library
//   Copyright (C) 2011-2013 Ceetron AS
//
//   This library may be used under the terms of either the GNU General Public License or
//   the GNU Lesser General Public License as follows:
//
//   GNU General Public License Usage
//   This library is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//
//   This library is distributed in the hope that it will be useful, but WITHOUT ANY
//   WARRANTY; without even the implied warranty of MERCHANTABILITY or
//   FITNESS FOR A PARTICULAR PURPOSE.
//
//   See the GNU General Public License at <<http://www.gnu.org/licenses/gpl.html>>
//   for more details.
//
//   GNU Lesser General Public License Usage
//   This library is free software; you can redistribute it and/or modify
//   it under the terms of the GNU Lesser General Public License as published by
//   the Free Software Foundation; either version 2.1 of the License, or
//   (at your option) any later version.
//
//   This library is distributed in the hope that it will be useful, but WITHOUT ANY
//   WARRANTY; without even the implied warranty of MERCHANTABILITY or
//   FITNESS FOR A PARTICULAR PURPOSE.
//
//   See the GNU Lesser General Public License at <<http://www.gnu.org/licenses/lgpl-2.1.html>>
//   for more details.
//
//##################################################################################################


#include "cvfBase.h"
#include "cvfCullSettings.h"

namespace cvf {



//==================================================================================================
///
/// \class cvf::CullSettings
/// \ingroup Viewing
///
/// A class for storing settings regarding culling of parts
/// 
//==================================================================================================

//--------------------------------------------------------------------------------------------------
/// 
//--------------------------------------------------------------------------------------------------
CullSettings::CullSettings()
:   m_viewFrustumCulling(true),
    m_pixelSizeCulling(false),
    m_pixelSizeCullingAreaThreshold(80)
{

}


//--------------------------------------------------------------------------------------------------
/// 
//--------------------------------------------------------------------------------------------------
void CullSettings::enableViewFrustumCulling(bool enable)
{
    m_viewFrustumCulling = enable;
}


//--------------------------------------------------------------------------------------------------
/// 
//--------------------------------------------------------------------------------------------------
bool CullSettings::isViewFrustumCullingEnabled() const
{
    return m_viewFrustumCulling;
}


//--------------------------------------------------------------------------------------------------
/// 
//--------------------------------------------------------------------------------------------------
void CullSettings::enablePixelSizeCulling(bool enable)
{
    m_pixelSizeCulling = enable;
}


//--------------------------------------------------------------------------------------------------
/// 
//--------------------------------------------------------------------------------------------------
bool CullSettings::isPixelSizeCullingEnabled() const
{
    return m_pixelSizeCulling;
}


//--------------------------------------------------------------------------------------------------
/// 
//--------------------------------------------------------------------------------------------------
void CullSettings::setPixelSizeCullingAreaThreshold(double pixelArea)
{
    m_pixelSizeCullingAreaThreshold = pixelArea;
}


//--------------------------------------------------------------------------------------------------
/// 
//--------------------------------------------------------------------------------------------------
double CullSettings::pixelSizeCullingAreaThreshold() const
{
    return m_pixelSizeCullingAreaThreshold;
}


} // namespace cvf

