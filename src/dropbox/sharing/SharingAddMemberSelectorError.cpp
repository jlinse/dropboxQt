/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingAddMemberSelectorError.h"

namespace dropboxQt{

namespace sharing{
///AddMemberSelectorError

AddMemberSelectorError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void AddMemberSelectorError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case AddMemberSelectorError_AUTOMATIC_GROUP:{
            if(!name.isEmpty())
                js[name] = QString("automatic_group");
        }break;
        case AddMemberSelectorError_INVALID_DROPBOX_ID:{
            if(!name.isEmpty())
                js[name] = QString("invalid_dropbox_id");
            if(!m_invalid_dropbox_id.isEmpty())
                js["invalid_dropbox_id"] = QString(m_invalid_dropbox_id);
        }break;
        case AddMemberSelectorError_INVALID_EMAIL:{
            if(!name.isEmpty())
                js[name] = QString("invalid_email");
            if(!m_invalid_email.isEmpty())
                js["invalid_email"] = QString(m_invalid_email);
        }break;
        case AddMemberSelectorError_UNVERIFIED_DROPBOX_ID:{
            if(!name.isEmpty())
                js[name] = QString("unverified_dropbox_id");
            if(!m_unverified_dropbox_id.isEmpty())
                js["unverified_dropbox_id"] = QString(m_unverified_dropbox_id);
        }break;
        case AddMemberSelectorError_GROUP_DELETED:{
            if(!name.isEmpty())
                js[name] = QString("group_deleted");
        }break;
        case AddMemberSelectorError_GROUP_NOT_ON_TEAM:{
            if(!name.isEmpty())
                js[name] = QString("group_not_on_team");
        }break;
        case AddMemberSelectorError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void AddMemberSelectorError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("automatic_group") == 0){
        m_tag = AddMemberSelectorError_AUTOMATIC_GROUP;
    }
    if(s.compare("invalid_dropbox_id") == 0){
        m_tag = AddMemberSelectorError_INVALID_DROPBOX_ID;
    }
    if(s.compare("invalid_email") == 0){
        m_tag = AddMemberSelectorError_INVALID_EMAIL;
    }
    if(s.compare("unverified_dropbox_id") == 0){
        m_tag = AddMemberSelectorError_UNVERIFIED_DROPBOX_ID;
    }
    if(s.compare("group_deleted") == 0){
        m_tag = AddMemberSelectorError_GROUP_DELETED;
    }
    if(s.compare("group_not_on_team") == 0){
        m_tag = AddMemberSelectorError_GROUP_NOT_ON_TEAM;
    }
    if(s.compare("other") == 0){
        m_tag = AddMemberSelectorError_OTHER;
    }
}

QString AddMemberSelectorError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "AddMemberSelectorError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
AddMemberSelectorError AddMemberSelectorError::EXAMPLE(){
    AddMemberSelectorError rv;
    rv.invalid_dropbox_id = "test2value";
    rv.invalid_email = "test3value";
    rv.unverified_dropbox_id = "test4value";
    rv.m_tag = AddMemberSelectorError_AUTOMATIC_GROUP;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
