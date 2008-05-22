// WebWatch UI - by DEATH, 2004
//
// $Workfile: stdafx.h $ - Precompiled headers
//
// $Author: Death $
// $Revision: 2 $
// $Date: 4/02/05 3:58 $
// $NoKeywords: $
//
#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#endif

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows 95 and Windows NT 4 or later.
#define WINVER 0x0500		// Change this to the appropriate value to target Windows 98 and Windows 2000 or later.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows NT 4 or later.
#define _WIN32_WINNT 0x0500		// Change this to the appropriate value to target Windows 98 and Windows 2000 or later.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 4.0 or later.
#define _WIN32_IE 0x0400	// Change this to the appropriate value to target IE 5.0 or later.
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

// turns off MFC's hiding of some common and often safely ignored warning messages
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdlgs.h>

#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxsock.h>		// MFC socket extensions

#include <mmsystem.h>

#include <direct.h>

#include <iostream>
#include <fstream>
#include <memory>
#include <functional>
#include <algorithm>
#include <numeric>
#include <map>
#include <vector>
#include <string>
#include <hash_map>
#include <stack>
#include <cstddef>
#include <ctime>
#include <sstream>

#include <boost/regex.hpp>
#include <boost/function.hpp>
#include <boost/logic/tribool.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>

#include "xml/Xml.h"

// Define Loki's SingletonHolder<> default threading model
// Define Loki's default threading model
#define SINGLETON_DEFAULT_THREADING ::Loki::ClassLevelLockable
#define DEFAULT_THREADING ::Loki::ObjectLevelLockable