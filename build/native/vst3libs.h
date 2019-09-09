#pragma once

// Change the library according to the Runtime Library setting
// if  Visual Studio setting is "/MT" or "/MTd", define "USE_STATIC_CRT" befor include this file.
#ifdef USE_STATIC_CRT
	#if _DEBUG
		#pragma comment( lib, "./Debug MT/base.lib" )
		#pragma comment( lib, "./Debug MT/pluginterfaces.lib" )
		#pragma comment( lib, "./Debug MT/sdk.lib" )
		#pragma comment( lib, "./Debug MT/vstgui.lib" )
		#pragma comment( lib, "./Debug MT/vstgui_support.lib" )
		#pragma comment( lib, "./Debug MT/vstgui_uidescription.lib" )
	#else
		#pragma comment( lib, "./Release MT/base.lib" )
		#pragma comment( lib, "./Release MT/pluginterfaces.lib" )
		#pragma comment( lib, "./Release MT/sdk.lib" )
		#pragma comment( lib, "./Release MT/vstgui.lib" )
		#pragma comment( lib, "./Release MT/vstgui_support.lib" )
		#pragma comment( lib, "./Release MT/vstgui_uidescription.lib" )
	#endif
#else
	#if _DEBUG
		#pragma comment( lib, "./Debug MD/base.lib" )
		#pragma comment( lib, "./Debug MD/pluginterfaces.lib" )
		#pragma comment( lib, "./Debug MD/sdk.lib" )
		#pragma comment( lib, "./Debug MD/vstgui.lib" )
		#pragma comment( lib, "./Debug MD/vstgui_support.lib" )
		#pragma comment( lib, "./Debug MD/vstgui_uidescription.lib" )
	#else
		#pragma comment( lib, "./Release MD/base.lib" )
		#pragma comment( lib, "./Release MD/pluginterfaces.lib" )
		#pragma comment( lib, "./Release MD/sdk.lib" )
		#pragma comment( lib, "./Release MD/vstgui.lib" )
		#pragma comment( lib, "./Release MD/vstgui_support.lib" )
		#pragma comment( lib, "./Release MD/vstgui_uidescription.lib" )
	#endif
#endif