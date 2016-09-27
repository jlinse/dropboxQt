/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionStartResult.h"

namespace dropboxQt{

namespace files{
///UploadSessionStartResult

UploadSessionStartResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UploadSessionStartResult::toJson(QJsonObject& js)const{

    if(!m_session_id.isEmpty())
        js["session_id"] = QString(m_session_id);
}

void UploadSessionStartResult::fromJson(const QJsonObject& js){

    m_session_id = js["session_id"].toString();
}

QString UploadSessionStartResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<UploadSessionStartResult>  UploadSessionStartResult::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<UploadSessionStartResult>  UploadSessionStartResult::factory::create(const QJsonObject& js)
{
    std::unique_ptr<UploadSessionStartResult> rv;
    rv = std::unique_ptr<UploadSessionStartResult>(new UploadSessionStartResult);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionStartResult UploadSessionStartResult::EXAMPLE(){
    UploadSessionStartResult rv;
    rv.session_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
