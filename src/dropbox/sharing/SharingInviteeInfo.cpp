/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingInviteeInfo.h"

namespace dropboxQt{

namespace sharing{
///InviteeInfo

InviteeInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void InviteeInfo::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case InviteeInfo_EMAIL:{
            if(!name.isEmpty())
                js[name] = QString("email");
            if(!m_email.isEmpty())
                js["email"] = QString(m_email);
        }break;
        case InviteeInfo_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void InviteeInfo::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("email") == 0){
        m_tag = InviteeInfo_EMAIL;
        m_email = js["email"].toString();
    }
    else if(s.compare("other") == 0){
        m_tag = InviteeInfo_OTHER;

    }
}

QString InviteeInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "InviteeInfo");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

std::unique_ptr<InviteeInfo>  InviteeInfo::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    std::unique_ptr<InviteeInfo> rv = std::unique_ptr<InviteeInfo>(new InviteeInfo);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
InviteeInfo InviteeInfo::EXAMPLE(){
    InviteeInfo rv;
    rv.email = "test1value";
    rv.m_tag = InviteeInfo_EMAIL;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
