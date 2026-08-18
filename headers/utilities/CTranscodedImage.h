#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 34 member(s).
class CTranscodedImage {
public:
    class AsyncTranscodeCallback;
    class TRANSCODED_IMAGE_DATA;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTranscodedImage@@QEAA@H@Z
    CTranscodedImage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaledDIB@CTranscodedImage@@UEAAJPEAUHDC__@@IIW4WICBitmapInterpolationMode@@PEAPEAUHBITMAP__@@W4DESKTOP_WALLPAPER_POSITION@@@Z
    virtual long CreateScaledDIB(HDC__*, unsigned int, unsigned int, int, HBITMAP__* *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteFileW@CTranscodedImage@@QEAAJ_N@Z
    long DeleteFileW(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteHDRFiles@CTranscodedImage@@QEAAJXZ
    long DeleteHDRFiles();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHDRSourcePath@CTranscodedImage@@QEBAJPEAGIPEAM@Z
    long GetHDRSourcePath(unsigned short *, unsigned int, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPath@CTranscodedImage@@UEBAJPEAGI@Z
    virtual long GetPath(unsigned short *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CTranscodedImage@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTranscodedImage@@UEAAJPEBG_N1@Z
    virtual long Init(unsigned short const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromCache@CTranscodedImage@@QEAAJXZ
    long InitFromCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInvalidSurfaces@CTranscodedImage@@QEAAXXZ
    void RemoveInvalidSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckSystemWallpaperForBestMatch@CTranscodedImage@@QEAAJPEBGPEAGI@Z
    long _CheckSystemWallpaperForBestMatch(unsigned short const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CommitTranscodeResult@CTranscodedImage@@QEAAJAEBUAsyncTranscodeResult@1@@Z
    long _CommitTranscodeResult(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CheckSystemWallpaperForBestMatch@CTranscodedImage@@SAJPEBGPEAGIPEA_N@Z
    static long s_CheckSystemWallpaperForBestMatch(unsigned short const *, unsigned short *, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetTranscodedImagePath@CTranscodedImage@@SAPEAGXZ
    static unsigned short * s_GetTranscodedImagePath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsTranscoded@CTranscodedImage@@UEBA_NXZ
    virtual bool v_IsTranscoded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Reset@CTranscodedImage@@UEAAXXZ
    virtual void v_Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTranscodedImage@@UEAA@XZ
    virtual ~CTranscodedImage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForRetranscode@CTranscodedImage@@IEAAJII@Z
    long _CheckForRetranscode(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearTranscodedImageData@CTranscodedImage@@IEAAJXZ
    long _ClearTranscodedImageData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EncodeBitmapAsJpeg@CTranscodedImage@@KAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@IIPEBGIM@Z
    static long _EncodeBitmapAsJpeg(IWICImagingFactory *, IWICBitmapSource *, unsigned int, unsigned int, unsigned short const *, unsigned int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTranscodedImageData@CTranscodedImage@@IEBAJPEAUTRANSCODED_IMAGE_DATA@1@@Z
    long _GetTranscodedImageData(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTranscodedImagePath@CTranscodedImage@@KAJHPEAGI@Z
    static long _GetTranscodedImagePath(int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitTranscodedDataRegValueName@CTranscodedImage@@IEAAJXZ
    long _InitTranscodedDataRegValueName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTranscodedWallpaperLoaded@CTranscodedImage@@IEBA_NXZ
    bool _IsTranscodedWallpaperLoaded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReencodeTranscodedAsJpeg@CTranscodedImage@@IEAAJPEBGI@Z
    long _ReencodeTranscodedAsJpeg(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshRemoteWallpaperCache@CTranscodedImage@@IEAAJPEBG@Z
    long _RefreshRemoteWallpaperCache(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTranscodedImageData@CTranscodedImage@@IEAAJPEBUTRANSCODED_IMAGE_DATA@1@@Z
    long _SetTranscodedImageData(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartAsyncInit@CTranscodedImage@@IEAAJPEBG0_NK110@Z
    long _StartAsyncInit(unsigned short const *, unsigned short const *, bool, unsigned long, bool, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TranscodeFile@CTranscodedImage@@IEAAJPEBG0PEAM@Z
    long _TranscodeFile(unsigned short const *, unsigned short const *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetTranscodedImageData@CTranscodedImage@@KAJPEBGPEAUTRANSCODED_IMAGE_DATA@1@@Z
    static long s_GetTranscodedImageData(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RefreshRemoteWallpaperCacheWorker@CTranscodedImage@@KAJAEBURemoteRefreshContext@1@@Z
    static long s_RefreshRemoteWallpaperCacheWorker(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TranscodeFile@CTranscodedImage@@KAJPEBG0PEAI1PEAM@Z
    static long s_TranscodeFile(unsigned short const *, unsigned short const *, unsigned int *, unsigned int *, float *);
};
