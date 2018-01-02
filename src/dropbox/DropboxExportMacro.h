#pragma once

#if defined DROPBOXQT_DLL
 #define DROPBOXQT_DLLSPEC Q_DECL_EXPORT
#else
 #define DROPBOXQT_DLLSPEC Q_DECL_IMPORT
#endif
