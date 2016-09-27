/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesGetTemporaryLinkResult.h"

namespace dropboxQt{

namespace files{
///GetTemporaryLinkResult

GetTemporaryLinkResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetTemporaryLinkResult::toJson(QJsonObject& js)const{

    js["metadata"] = (QJsonObject)m_metadata;
    if(!m_link.isEmpty())
        js["link"] = QString(m_link);
}

void GetTemporaryLinkResult::fromJson(const QJsonObject& js){

    m_metadata.fromJson(js);
    m_link = js["link"].toString();
}

QString GetTemporaryLinkResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<GetTemporaryLinkResult>  GetTemporaryLinkResult::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<GetTemporaryLinkResult>  GetTemporaryLinkResult::factory::create(const QJsonObject& js)
{
    std::unique_ptr<GetTemporaryLinkResult> rv;
    rv = std::unique_ptr<GetTemporaryLinkResult>(new GetTemporaryLinkResult);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
GetTemporaryLinkResult GetTemporaryLinkResult::EXAMPLE(){
    GetTemporaryLinkResult rv;
    rv.metadata = files::FileMetadata::EXAMPLE();
    rv.link = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
