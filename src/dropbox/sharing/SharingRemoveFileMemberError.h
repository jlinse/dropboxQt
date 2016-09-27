/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharingUserError.h"
#include "dropbox/sharing/SharingSharingUserError.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"
#include "dropbox/sharing/SharingMemberAccessLevelResult.h"

namespace dropboxQt{
namespace sharing{
    class RemoveFileMemberError{
        /**
            Errors for :meth:`remove_file_member_2`.

            field: no_explicit_access: This member does not have explicit access
                to the file and therefore cannot be removed. The return value is
                the access that a user might have to the file from a parent
                folder.
        */
    public:
        enum Tag{

		/*None*/
		RemoveFileMemberError_USER_ERROR,
		/*None*/
		RemoveFileMemberError_ACCESS_ERROR,
		/*This member does not have explicit access to the file and therefore cannot be removed. The return value is the access that a user might have to the file from a parent folder.*/
		RemoveFileMemberError_NO_EXPLICIT_ACCESS,
		/*None*/
		RemoveFileMemberError_OTHER
        };

        RemoveFileMemberError(){}
        RemoveFileMemberError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharingUserError getUserError()const{DBOX_CHECK_STATE((RemoveFileMemberError_USER_ERROR == m_tag), "expected tag: RemoveFileMemberError_USER_ERROR", m_tag);return m_user_error;};

        ///None
        SharingFileAccessError getAccessError()const{DBOX_CHECK_STATE((RemoveFileMemberError_ACCESS_ERROR == m_tag), "expected tag: RemoveFileMemberError_ACCESS_ERROR", m_tag);return m_access_error;};

        ///This member does not have explicit access to the file and therefore cannot be removed. The return value is the access that a user might have to the file from a parent folder.
        MemberAccessLevelResult getNoExplicitAccess()const{DBOX_CHECK_STATE((RemoveFileMemberError_NO_EXPLICIT_ACCESS == m_tag), "expected tag: RemoveFileMemberError_NO_EXPLICIT_ACCESS", m_tag);return m_no_explicit_access;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<RemoveFileMemberError>  create(const QByteArray& data);
            static std::unique_ptr<RemoveFileMemberError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static RemoveFileMemberError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharingUserError m_user_error;
        SharingFileAccessError m_access_error;
        MemberAccessLevelResult m_no_explicit_access;
    };//RemoveFileMemberError

}//sharing
}//dropboxQt
