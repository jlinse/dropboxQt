/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"

namespace dropboxQt{
namespace sharing{
    class ListSharedLinksError{
        /**
            field: reset: Indicates that the cursor has been invalidated. Call
                :meth:`list_shared_links` to obtain a new cursor.
        */
    public:
        enum Tag{

		/*None*/
		ListSharedLinksError_PATH,
		/*Indicates that the cursor has been invalidated. Call :route:`list_shared_links` to obtain a new cursor.*/
		ListSharedLinksError_RESET,
		/*None*/
		ListSharedLinksError_OTHER
        };

        ListSharedLinksError(){}
        ListSharedLinksError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        files::LookupError getPath()const{DBOX_CHECK_STATE((ListSharedLinksError_PATH == m_tag), "expected tag: ListSharedLinksError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<ListSharedLinksError>  create(const QByteArray& data);
            static std::unique_ptr<ListSharedLinksError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static ListSharedLinksError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        files::LookupError m_path;
    };//ListSharedLinksError

}//sharing
}//dropboxQt
