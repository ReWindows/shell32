#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 71 member(s).
class CImageData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CImageData@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageData@@QEAA@XZ
    CImageData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneFrame@CImageData@@UEAAJPEAPEAVImage@Gdiplus@@@Z
    virtual long CloneFrame(::Gdiplus::Image * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@CImageData@@UEAAJKKK@Z
    virtual long Decode(unsigned long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardEdit@CImageData@@UEAAJXZ
    virtual long DiscardEdit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@CImageData@@UEAAJPEAGI@Z
    virtual long DisplayName(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CImageData@@UEAAJPEAUHDC__@@PEAUtagRECT@@1@Z
    virtual long Draw(HDC__*, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CImageData@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFile@CImageData@@UEAAJPEAPEAG@Z
    virtual long GetCurFile(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPage@CImageData@@UEAAJPEAK@Z
    virtual long GetCurrentPage(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDelay@CImageData@@UEAAJPEAK@Z
    virtual long GetDelay(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEncoderParams@CImageData@@UEAAJPEAU_GUID@@PEAPEAVEncoderParameters@Gdiplus@@@Z
    virtual long GetEncoderParams(_GUID *, ::Gdiplus::EncoderParameters * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageCount@CImageData@@UEAAJPEAK@Z
    virtual long GetPageCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@CImageData@@UEAAJPEAH@Z
    virtual long GetPixelFormat(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProperties@CImageData@@UEAAJKPEAPEAUIPropertySetStorage@@@Z
    virtual long GetProperties(unsigned long, IPropertySetStorage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawDataFormat@CImageData@@UEAAJPEAU_GUID@@@Z
    virtual long GetRawDataFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolution@CImageData@@UEAAJPEAK0@Z
    virtual long GetResolution(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CImageData@@UEAAJPEAUtagSIZE@@@Z
    virtual long GetSize(tagSIZE *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSizeMax@CImageData@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImageData@@UEAAJPEAUIStream@@K@Z
    virtual long Initialize(IStream *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimated@CImageData@@UEAAJXZ
    virtual long IsAnimated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDecoded@CImageData@@UEAAJXZ
    virtual long IsDecoded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CImageData@@UEAAJXZ
    virtual long IsDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEditable@CImageData@@UEAAJXZ
    virtual long IsEditable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMultipage@CImageData@@UEAAJXZ
    virtual long IsMultipage();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPrintable@CImageData@@UEAAJXZ
    virtual long IsPrintable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransparent@CImageData@@UEAAJXZ
    virtual long IsTransparent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVector@CImageData@@UEAAJXZ
    virtual long IsVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CImageData@@UEAAJPEBGK@Z
    virtual long Load(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CImageData@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextFrame@CImageData@@UEAAJXZ
    virtual long NextFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextPage@CImageData@@UEAAJXZ
    virtual long NextPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrevPage@CImageData@@UEAAJXZ
    virtual long PrevPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAbort@CImageData@@SAHPEAX@Z
    static int QueryAbort(void *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CImageData@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAbort@CImageData@@UEAAJPEAUIShellImageDataAbort@@PEAPEAU2@@Z
    virtual long RegisterAbort(IShellImageDataAbort *, IShellImageDataAbort * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CImageData@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceFrame@CImageData@@UEAAJPEAVImage@Gdiplus@@@Z
    virtual long ReplaceFrame(::Gdiplus::Image *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate@CImageData@@UEAAJK@Z
    virtual long Rotate(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CImageData@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CImageData@@UEAAJPEBGH@Z
    virtual long Save(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?SaveCompleted@CImageData@@UEAAJPEBG@Z
    virtual long SaveCompleted(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale@CImageData@@UEAAJKKW4InterpolationMode@Gdiplus@@@Z
    virtual long Scale(unsigned long, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectPage@CImageData@@UEAAJK@Z
    virtual long SelectPage(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEncoderParams@CImageData@@UEAAJPEAUIPropertyBag@@@Z
    virtual long SetEncoderParams(IPropertyBag *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyImageProperties@CImageData@@AEAAXPEAVImage@Gdiplus@@0@Z
    void _CopyImageProperties(::Gdiplus::Image *, ::Gdiplus::Image *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureImage@CImageData@@AEAAJXZ
    long _EnsureImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayedImage@CImageData@@AEAAJXZ
    long _GetDisplayedImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProperty@CImageData@@AEAAJKPEAUtagVARIANT@@G@Z
    long _GetProperty(unsigned long, tagVARIANT *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeTempFile@CImageData@@AEAAJPEAG@Z
    long _MakeTempFile(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropImgToVariant@CImageData@@AEAAJPEAVPropertyItem@Gdiplus@@PEAUtagVARIANT@@@Z
    long _PropImgToVariant(::Gdiplus::PropertyItem *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceFile@CImageData@@AEAAJPEBG@Z
    long _ReplaceFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveImages@CImageData@@AEAAJPEAUIStream@@AEBU_GUID@@@Z
    long _SaveImages(IStream *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDecodeStream@CImageData@@AEAAJPEAVCDecodeStream@@@Z
    long _SetDecodeStream(CDecodeStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEditImage@CImageData@@AEAAXPEAVImage@Gdiplus@@@Z
    void _SetEditImage(::Gdiplus::Image *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SuspendStream@CImageData@@AEAAJXZ
    long _SuspendStream();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageData@@EEAA@XZ
    virtual ~CImageData();
};
