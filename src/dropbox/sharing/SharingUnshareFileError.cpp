/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingUnshareFileError.h"

namespace dropboxQt{

namespace sharing{
///UnshareFileError

UnshareFileError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UnshareFileError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UnshareFileError_USER_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("user_error");
            m_user_error.toJson(js, "user_error");
        }break;
        case UnshareFileError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("access_error");
            m_access_error.toJson(js, "access_error");
        }break;
        case UnshareFileError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void UnshareFileError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_error") == 0){
        m_tag = UnshareFileError_USER_ERROR;
    }
    if(s.compare("access_error") == 0){
        m_tag = UnshareFileError_ACCESS_ERROR;
    }
    if(s.compare("other") == 0){
        m_tag = UnshareFileError_OTHER;
    }
}

QString UnshareFileError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UnshareFileError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UnshareFileError UnshareFileError::EXAMPLE(){
    UnshareFileError rv;
    rv.user_error = sharing::SharingUserError::EXAMPLE();
    rv.access_error = sharing::SharingFileAccessError::EXAMPLE();
    rv.m_tag = UnshareFileError_USER_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
