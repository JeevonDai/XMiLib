/// \file
/// \author Xavier Michelon
///
/// \brief Declaration of precompiled header
///  
/// Copyright (c) Xavier Michelon. All rights reserved.  
/// Licensed under the MIT License. See LICENSE file in the project root for full license information.  


#ifndef XMILIB_STDAFX_H
#define XMILIB_STDAFX_H


#include <QtWidgets>
#include <QtGui>
#include <QtCore>

#ifdef Q_OS_WIN
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>
#endif


#endif // XMILIB_SSTDAFX_H
