/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingShareFolderError.h"

namespace dropboxQt{

namespace sharing{
///ShareFolderError

ShareFolderError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ShareFolderError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ShareFolderErrorBase_EMAIL_UNVERIFIED:{
            if(!name.isEmpty())
                js[name] = QString("email_unverified");
        }break;
        case ShareFolderErrorBase_BAD_PATH:{
            if(!name.isEmpty())
                js[name] = QString("bad_path");
            m_bad_path.toJson(js, "bad_path");
        }break;
        case ShareFolderErrorBase_TEAM_POLICY_DISALLOWS_MEMBER_POLICY:{
            if(!name.isEmpty())
                js[name] = QString("team_policy_disallows_member_policy");
        }break;
        case ShareFolderErrorBase_DISALLOWED_SHARED_LINK_POLICY:{
            if(!name.isEmpty())
                js[name] = QString("disallowed_shared_link_policy");
        }break;
        case ShareFolderErrorBase_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
        case ShareFolderError_NO_PERMISSION:{
            if(!name.isEmpty())
                js[name] = QString("no_permission");
        }break;
    }//switch
}

void ShareFolderError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("email_unverified") == 0){
        m_tag = ShareFolderErrorBase_EMAIL_UNVERIFIED;
    }
    if(s.compare("bad_path") == 0){
        m_tag = ShareFolderErrorBase_BAD_PATH;
    }
    if(s.compare("team_policy_disallows_member_policy") == 0){
        m_tag = ShareFolderErrorBase_TEAM_POLICY_DISALLOWS_MEMBER_POLICY;
    }
    if(s.compare("disallowed_shared_link_policy") == 0){
        m_tag = ShareFolderErrorBase_DISALLOWED_SHARED_LINK_POLICY;
    }
    if(s.compare("other") == 0){
        m_tag = ShareFolderErrorBase_OTHER;
    }
    if(s.compare("no_permission") == 0){
        m_tag = ShareFolderError_NO_PERMISSION;
    }
}

QString ShareFolderError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ShareFolderError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ShareFolderError ShareFolderError::EXAMPLE(){
    ShareFolderError rv;
    rv.m_tag = ShareFolderError_NO_PERMISSION;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
