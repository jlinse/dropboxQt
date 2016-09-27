/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFileMembersContinueArg.h"

namespace dropboxQt{

namespace sharing{
///ListFileMembersContinueArg

ListFileMembersContinueArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFileMembersContinueArg::toJson(QJsonObject& js)const{

    if(!m_cursor.isEmpty())
        js["cursor"] = QString(m_cursor);
}

void ListFileMembersContinueArg::fromJson(const QJsonObject& js){

    m_cursor = js["cursor"].toString();
}

QString ListFileMembersContinueArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<ListFileMembersContinueArg>  ListFileMembersContinueArg::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<ListFileMembersContinueArg>  ListFileMembersContinueArg::factory::create(const QJsonObject& js)
{
    std::unique_ptr<ListFileMembersContinueArg> rv;
    rv = std::unique_ptr<ListFileMembersContinueArg>(new ListFileMembersContinueArg);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFileMembersContinueArg ListFileMembersContinueArg::EXAMPLE(){
    ListFileMembersContinueArg rv;
    rv.cursor = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
