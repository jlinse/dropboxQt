/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace properties{
    class ListPropertyTemplateIds{
        /**
            field: template_ids: List of identifiers for templates added by
                route properties/template/add.
        */

    public:
        ListPropertyTemplateIds(){};

        ListPropertyTemplateIds(const std::list <QString>&& arg){ m_template_ids = arg; };

    public:
        ///List of identifiers for templates added by route properties/template/add.
        const std::list <QString>& templateIds()const{return m_template_ids;};
        ListPropertyTemplateIds& setTemplateids(const std::list <QString>&& arg){m_template_ids=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<ListPropertyTemplateIds>  create(const QByteArray& data);
            static std::unique_ptr<ListPropertyTemplateIds>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static ListPropertyTemplateIds EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///List of identifiers for templates added by route properties/template/add.
        std::list <QString> m_template_ids;

    };//ListPropertyTemplateIds

}//properties
}//dropboxQt
