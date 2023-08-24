#pragma once

#include "message/seadMessageProject.h"

#include <basis/seadTypes.h>

namespace al {
class MessageProjectEx : public sead::MessageProject {
public:
    MessageProjectEx();
    ~MessageProjectEx() override;

    void init();
    void finalize();

    u16 getTagGroupNum() const;
    u16 getTagNum(int tagGroup) const;
    u16 getTagParamNum(int tagGroup, int tag) const;
    const char* getTagGroupNameByIndex(int tagGroup) const;
    const char* getTagNameByIndex(int tagGroup, int tag) const;
    const char* getTagParamNameByIndex(int tagGroup, int tag, int tagParam) const;
};
}  // namespace al

static_assert(sizeof(al::MessageProjectEx) == 0x48, "Size does not match!");