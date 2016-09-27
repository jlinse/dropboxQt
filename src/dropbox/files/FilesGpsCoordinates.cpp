/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesGpsCoordinates.h"

namespace dropboxQt{

namespace files{
///GpsCoordinates

GpsCoordinates::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GpsCoordinates::toJson(QJsonObject& js)const{

    js["latitude"] = m_latitude;
    js["longitude"] = m_longitude;
}

void GpsCoordinates::fromJson(const QJsonObject& js){

    m_latitude = js["latitude"].toVariant().toFloat();
    m_longitude = js["longitude"].toVariant().toFloat();
}

QString GpsCoordinates::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<GpsCoordinates>  GpsCoordinates::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<GpsCoordinates>  GpsCoordinates::factory::create(const QJsonObject& js)
{
    std::unique_ptr<GpsCoordinates> rv;
    rv = std::unique_ptr<GpsCoordinates>(new GpsCoordinates);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
GpsCoordinates GpsCoordinates::EXAMPLE(){
    GpsCoordinates rv;
    rv.latitude = 1;
    rv.longitude = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
