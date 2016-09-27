/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingLinkMetadata.h"

namespace dropboxQt{
namespace sharing{
    class CollectionLinkMetadata : public LinkMetadata{
        /**
            Metadata for a collection-based shared link.
        */

    public:
        CollectionLinkMetadata(){};


    public:
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<CollectionLinkMetadata>  create(const QByteArray& data);
            static std::unique_ptr<CollectionLinkMetadata>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static CollectionLinkMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
    };//CollectionLinkMetadata

}//sharing
}//dropboxQt
