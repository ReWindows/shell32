#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CMemoryCachedImage {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMemoryCachedImage@@QEAA@XZ
    CMemoryCachedImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaledDIB@CMemoryCachedImage@@UEAAJPEAUHDC__@@IIW4WICBitmapInterpolationMode@@PEAPEAUHBITMAP__@@W4DESKTOP_WALLPAPER_POSITION@@@Z
    virtual long CreateScaledDIB(HDC__*, unsigned int, unsigned int, int, HBITMAP__* *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageColorizationData@CMemoryCachedImage@@QEAAJPEAPEAVCAutoColorImageData@@@Z
    long GetImageColorizationData(CAutoColorImageData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPath@CMemoryCachedImage@@UEBAJPEAGI@Z
    virtual long GetPath(unsigned short *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CMemoryCachedImage@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CMemoryCachedImage@@UEAAJPEBG_N1@Z
    virtual long Init(unsigned short const *, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteWallpaperPath@CMemoryCachedImage@@SA_NPEBG@Z
    static bool IsRemoteWallpaperPath(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameFile@CMemoryCachedImage@@SA_NPEBG0@Z
    static bool IsSameFile(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseImageResources@CMemoryCachedImage@@QEAAX_N@Z
    void ReleaseImageResources(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsTranscoded@CMemoryCachedImage@@UEBA_NXZ
    virtual bool v_IsTranscoded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Reset@CMemoryCachedImage@@UEAAXXZ
    virtual void v_Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMemoryCachedImage@@UEAA@XZ
    virtual ~CMemoryCachedImage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWICImagingFactory@CMemoryCachedImage@@IEAAJXZ
    long EnsureWICImagingFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateImageResources@CMemoryCachedImage@@IEAAJPEAX@Z
    long _CreateImageResources(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DecodeImage@CMemoryCachedImage@@IEAAJPEBG@Z
    long _DecodeImage(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFileStat@CMemoryCachedImage@@IEBAJPEAUIStream@@_NPEAUtagSTATSTG@@@Z
    long _GetFileStat(IStream *, bool, tagSTATSTG *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadFileIntoMemory@CMemoryCachedImage@@IEAAJPEBGPEAX@Z
    long _LoadFileIntoMemory(unsigned short const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveFileToDisk@CMemoryCachedImage@@IEAAJPEBG@Z
    long _SaveFileToDisk(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateImageFile@CMemoryCachedImage@@IEAAJPEBG@Z
    long _ValidateImageFile(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMemoryCachedImage@@AEAAXXZ
    void Reset();
};
