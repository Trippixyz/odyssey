#include "al/Library/Message/MessageProjectEx.h"

#include "al/Library/Resource/Resource.h"
#include "al/Library/Resource/ResourceUtil.h"
#include <message/seadMessageProject.h>

const char* mProjectDataDir = "LocalizedData/Common/ProjectData";

namespace al {

    void MessageProjectEx::init() {

        Resource* projectRes = al::findOrCreateResource(mProjectDataDir, 0);
        void* binaryProject = projectRes->getOtherFile("ProjectData.msbp");

        initialize(binaryProject, nullptr);
    }

    void MessageProjectEx::finalize() {

        sead::MessageProject::finalize();
    }


    // TagGroup
    u16 MessageProjectEx::getTagGroupNum() const {

        return LMS_GetTagGroupNum(mProject);
    }

    const char* MessageProjectEx::getTagGroupNameByIndex(int tagGroup) const {

        return LMS_GetTagGroupName(mProject, tagGroup);
    }

    // Tag
    u16 MessageProjectEx::getTagNum(int tagGroup) const {

        return LMS_GetTagNum(mProject, tagGroup);
    }

    const char* MessageProjectEx::getTagNameByIndex(int tagGroup, int tag) const {

        return LMS_GetTagName(mProject, tagGroup, tag);
    }

    // TagParam
    u16 MessageProjectEx::getTagParamNum(int tagGroup, int tag) const {

        return LMS_GetTagParamNum(mProject, tagGroup, tag);
    }

    const char* MessageProjectEx::getTagParamNameByIndex(int tagGroup, int tag, int tagParam) const {

        return LMS_GetTagParamName(mProject, tagGroup, tag, tagParam);
    }
}