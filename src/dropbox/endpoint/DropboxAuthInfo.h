#pragma once
#include <QString>
#include "dropbox/DropboxExportMacro.h"

namespace dropboxQt{

    class DropboxWebAuth;

    class DROPBOXQT_DLLSPEC DropboxAuthInfo
    {
        friend class DropboxWebAuth;
    public:
        DropboxAuthInfo();

        QString getAccessToken()const {return accessToken;}

        bool readFromFile(QString path);
        bool storeToFile(QString path)const;

    protected:
        QString accessToken;
    };
}//dropboxQt
