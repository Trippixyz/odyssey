#pragma once

#include <filedevice/seadArchiveFileDevice.h>
#include <nn/g3d/ResFile.h>
#include <prim/seadSafeString.h>
#include <resource/seadArchiveRes.h>
#include <resource/seadResource.h>

namespace al {
class ActorInitResourceData;

class Resource {
private:
    sead::ArchiveRes* mArchive;
    sead::ArchiveFileDevice* mDevice;
    sead::FixedSafeString<0x80> mName;
    sead::Heap* mHeap;
    al::ActorInitResourceData* mData;
    nn::g3d::ResFile* mResFile;

public:
    Resource(const sead::SafeStringBase<char>&);
    Resource(const sead::SafeStringBase<char>&, sead::ArchiveRes*);

    bool isExistFile(const sead::SafeStringBase<char>&) const;
    bool isExistByml(const char*) const;
    unsigned int getSize() const;

    unsigned int getFileSize(const sead::SafeStringBase<char>&) const;

    const u8* getByml(const sead::SafeString&);
    void* getOtherFile(const sead::SafeString&) const;

    bool tryCreateResGraphicsFile(const sead::SafeStringBase<char>&, nn::g3d::ResFile*);
    void cleanupResGraphicsFile();

    u32 getEntryNum(const sead::SafeString&) const;
    const char* getEntryName(const sead::BufferedSafeString* outName, const sead::SafeString&, u32) const;
    const u8* getByml(const sead::SafeString& name) const;
    void* getFile(const sead::SafeString& name) const;
    void tryGetByml(const sead::SafeString& name) const;
    void getKcl(const sead::SafeString& name) const;
    void tryGetKcl(const sead::SafeString& name) const;
    void getPa(const sead::SafeString& name) const;
    void tryGetPa(const sead::SafeString& name) const;
    const char* getArchiveName() const;
};
}  // namespace al
