/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupMemberSetAccessTypeError.h"

namespace dropboxQt{

namespace team{
///GroupMemberSetAccessTypeError

GroupMemberSetAccessTypeError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupMemberSetAccessTypeError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupSelectorError_GROUP_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = QString("group_not_found");
        }break;
        case GroupSelectorError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
        case GroupMemberSelectorError_MEMBER_NOT_IN_GROUP:{
            if(!name.isEmpty())
                js[name] = QString("member_not_in_group");
        }break;
        case GroupMemberSetAccessTypeError_USER_CANNOT_BE_MANAGER_OF_COMPANY_MANAGED_GROUP:{
            if(!name.isEmpty())
                js[name] = QString("user_cannot_be_manager_of_company_managed_group");
        }break;
    }//switch
}

void GroupMemberSetAccessTypeError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("group_not_found") == 0){
        m_tag = GroupSelectorError_GROUP_NOT_FOUND;
    }
    if(s.compare("other") == 0){
        m_tag = GroupSelectorError_OTHER;
    }
    if(s.compare("member_not_in_group") == 0){
        m_tag = GroupMemberSelectorError_MEMBER_NOT_IN_GROUP;
    }
    if(s.compare("user_cannot_be_manager_of_company_managed_group") == 0){
        m_tag = GroupMemberSetAccessTypeError_USER_CANNOT_BE_MANAGER_OF_COMPANY_MANAGED_GROUP;
    }
}

QString GroupMemberSetAccessTypeError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupMemberSetAccessTypeError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMemberSetAccessTypeError GroupMemberSetAccessTypeError::EXAMPLE(){
    GroupMemberSetAccessTypeError rv;
    rv.m_tag = GroupMemberSetAccessTypeError_USER_CANNOT_BE_MANAGER_OF_COMPANY_MANAGED_GROUP;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
