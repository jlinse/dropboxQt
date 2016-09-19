/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingCreateSharedLinkArg.h"

namespace dropboxQt{

namespace sharing{
///CreateSharedLinkArg

CreateSharedLinkArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void CreateSharedLinkArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
    js["short_url"] = m_short_url;
    m_pending_upload.toJson(js, "pending_upload");
}

void CreateSharedLinkArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_short_url = js["short_url"].toVariant().toBool();
    m_pending_upload.fromJson(js["pending_upload"].toObject());
}

QString CreateSharedLinkArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
CreateSharedLinkArg CreateSharedLinkArg::EXAMPLE(){
    CreateSharedLinkArg rv;
    rv.path = "test1value";
    rv.pending_upload = sharing::PendingUploadMode::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
