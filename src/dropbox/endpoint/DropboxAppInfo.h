#pragma once

#include <QString>
#include "dropbox/DropboxExportMacro.h"

namespace dropboxQt{
    class DROPBOXQT_DLLSPEC DropboxAppInfo
    {
    public:
        DropboxAppInfo();

        const QString& getKey()const{return m_key;}
        const QString& getSecret()const{return m_secret;}

        void setKeySecret(QString key_val, QString secret_val);
        bool readFromFile(QString path);
        bool storeToFile(QString path);

    protected:
        QString m_key;
        QString m_secret;
    };

}
