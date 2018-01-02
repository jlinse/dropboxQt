#pragma once

#include "ApiUtil.h"
#include "dropbox/DropboxExportMacro.h"

namespace dropboxQt{
    
    class DROPBOXQT_DLLSPEC DropboxHost
    {
    public:
        
        static DropboxHost& DEFAULT();

        DropboxHost();

        const QString& getApi()const{return api;}
        const QString& getContent()const{return content;}
        const QString& getWeb()const{return web;}
        const QString& getNotify()const{return notify;}
        
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);

    protected:
        QString api;
        QString content;
        QString web;
        QString notify;
    };
}
