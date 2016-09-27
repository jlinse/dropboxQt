/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesMediaMetadata.h"

namespace dropboxQt{
namespace files{
    class VideoMetadata : public MediaMetadata{
        /**
            Metadata for a video.

            field: duration: The duration of the video in milliseconds.
        */

    public:
        VideoMetadata(){};

        VideoMetadata(const int& arg){ m_duration = arg; };

    public:
        ///The duration of the video in milliseconds.
        int duration()const{return m_duration;};
        VideoMetadata& setDuration(const int& arg){m_duration=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<VideoMetadata>  create(const QByteArray& data);
            static std::unique_ptr<VideoMetadata>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static VideoMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The duration of the video in milliseconds.
        int m_duration;

    };//VideoMetadata

}//files
}//dropboxQt
