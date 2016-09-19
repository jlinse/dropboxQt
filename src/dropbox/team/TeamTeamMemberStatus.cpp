/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamTeamMemberStatus.h"

namespace dropboxQt{

namespace team{
///TeamMemberStatus

TeamMemberStatus::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void TeamMemberStatus::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case TeamMemberStatus_ACTIVE:{
            if(!name.isEmpty())
                js[name] = QString("active");
        }break;
        case TeamMemberStatus_INVITED:{
            if(!name.isEmpty())
                js[name] = QString("invited");
        }break;
        case TeamMemberStatus_SUSPENDED:{
            if(!name.isEmpty())
                js[name] = QString("suspended");
        }break;
        case TeamMemberStatus_REMOVED:{
            if(!name.isEmpty())
                js[name] = QString("removed");
            js["removed"] = (QJsonObject)m_removed;
        }break;
    }//switch
}

void TeamMemberStatus::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("active") == 0){
        m_tag = TeamMemberStatus_ACTIVE;
    }
    if(s.compare("invited") == 0){
        m_tag = TeamMemberStatus_INVITED;
    }
    if(s.compare("suspended") == 0){
        m_tag = TeamMemberStatus_SUSPENDED;
    }
    if(s.compare("removed") == 0){
        m_tag = TeamMemberStatus_REMOVED;
    }
}

QString TeamMemberStatus::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "TeamMemberStatus");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
TeamMemberStatus TeamMemberStatus::EXAMPLE(){
    TeamMemberStatus rv;
    rv.removed = team::RemovedStatus::EXAMPLE();
    rv.m_tag = TeamMemberStatus_ACTIVE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
