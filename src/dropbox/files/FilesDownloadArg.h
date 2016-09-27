/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class DownloadArg{
        /**
            field: path: The path of the file to download.
            field: rev: Deprecated. Please specify revision in ``path`` instead
        */

    public:
        DownloadArg(){};

        DownloadArg(const QString& arg){ m_path = arg; };

    public:
        ///The path of the file to download.
        QString path()const{return m_path;};
        DownloadArg& setPath(const QString& arg){m_path=arg;return *this;};

        ///Deprecated. Please specify revision in :field:`path` instead
        QString rev()const{return m_rev;};
        DownloadArg& setRev(const QString& arg){m_rev=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<DownloadArg>  create(const QByteArray& data);
            static std::unique_ptr<DownloadArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static DownloadArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path of the file to download.
        QString m_path;

        ///Deprecated. Please specify revision in :field:`path` instead
        QString m_rev;

    };//DownloadArg

}//files
}//dropboxQt
