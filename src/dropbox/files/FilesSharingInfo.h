/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class SharingInfo{
        /**
            Sharing info for a file or folder.

            field: read_only: True if the file or folder is inside a read-only
                shared folder.
        */

    public:
        SharingInfo(){};

        SharingInfo(const bool& arg){ m_read_only = arg; };

    public:
        ///True if the file or folder is inside a read-only shared folder.
        bool readOnly()const{return m_read_only;};
        SharingInfo& setReadonly(const bool& arg){m_read_only=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<SharingInfo>  create(const QByteArray& data);
            static std::unique_ptr<SharingInfo>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static SharingInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///True if the file or folder is inside a read-only shared folder.
        bool m_read_only;

    };//SharingInfo

}//files
}//dropboxQt
