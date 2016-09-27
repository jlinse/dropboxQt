/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersIndividualSpaceAllocation.h"

namespace dropboxQt{

namespace users{
///IndividualSpaceAllocation

IndividualSpaceAllocation::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void IndividualSpaceAllocation::toJson(QJsonObject& js)const{

    js["allocated"] = m_allocated;
}

void IndividualSpaceAllocation::fromJson(const QJsonObject& js){

    m_allocated = js["allocated"].toVariant().toInt();
}

QString IndividualSpaceAllocation::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<IndividualSpaceAllocation>  IndividualSpaceAllocation::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<IndividualSpaceAllocation>  IndividualSpaceAllocation::factory::create(const QJsonObject& js)
{
    std::unique_ptr<IndividualSpaceAllocation> rv;
    rv = std::unique_ptr<IndividualSpaceAllocation>(new IndividualSpaceAllocation);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
IndividualSpaceAllocation IndividualSpaceAllocation::EXAMPLE(){
    IndividualSpaceAllocation rv;
    rv.allocated = 1;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
