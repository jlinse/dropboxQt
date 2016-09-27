/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesPreviewArg.h"

namespace dropboxQt{

namespace files{
///PreviewArg

PreviewArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void PreviewArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
    if(!m_rev.isEmpty())
        js["rev"] = QString(m_rev);
}

void PreviewArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_rev = js["rev"].toString();
}

QString PreviewArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<PreviewArg>  PreviewArg::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<PreviewArg>  PreviewArg::factory::create(const QJsonObject& js)
{
    std::unique_ptr<PreviewArg> rv;
    rv = std::unique_ptr<PreviewArg>(new PreviewArg);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
PreviewArg PreviewArg::EXAMPLE(){
    PreviewArg rv;
    rv.path = "test1value";
    rv.rev = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
