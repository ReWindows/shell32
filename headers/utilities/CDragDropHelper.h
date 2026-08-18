#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 56 member(s).
class CDragDropHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDragDropHelper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDragDropHelper@@QEAA@XZ
    CDragDropHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CDragDropHelper@@UEAAJPEAUHWND__@@PEAUIDataObject@@PEAUtagPOINT@@K@Z
    virtual long DragEnter(HWND__*, IDataObject *, tagPOINT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnterWithScroll@CDragDropHelper@@UEAAJPEAUHWND__@@PEAUIScrollingWindow@@PEAUIDataObject@@PEAUtagPOINT@@K@Z
    virtual long DragEnterWithScroll(HWND__*, IScrollingWindow *, IDataObject *, tagPOINT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CDragDropHelper@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CDragDropHelper@@UEAAJPEAUtagPOINT@@K@Z
    virtual long DragOver(tagPOINT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CDragDropHelper@@UEAAJPEAUIDataObject@@PEAUtagPOINT@@K@Z
    virtual long Drop(IDataObject *, tagPOINT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDragDropHelper@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromBitmap@CDragDropHelper@@UEAAJPEAUSHDRAGIMAGE@@PEAUIDataObject@@@Z
    virtual long InitializeFromBitmap(SHDRAGIMAGE *, IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromWindow@CDragDropHelper@@UEAAJPEAUHWND__@@PEAUtagPOINT@@PEAUIDataObject@@@Z
    virtual long InitializeFromWindow(HWND__*, tagPOINT *, IDataObject *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDragDropHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CDragDropHelper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CDragDropHelper@@UEAAJK@Z
    virtual long SetFlags(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Show@CDragDropHelper@@UEAAJH@Z
    virtual long Show(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDragDropHelper@@QEAA@XZ
    ~CDragDropHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeRectOpaqueOnBitmap@CDragDropHelper@@AEAAXAEBUtagRECT@@@Z
    void MakeRectOpaqueOnBitmap(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddInfoToWindow@CDragDropHelper@@AEAAJXZ
    long _AddInfoToWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyAlphaToDragBitmap@CDragDropHelper@@AEAAHHPEAPEAX@Z
    int _ApplyAlphaToDragBitmap(int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AutoScroll@CDragDropHelper@@AEAAHPEAUHWND__@@PEBUtagPOINT@@@Z
    int _AutoScroll(HWND__*, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeFinalSize@CDragDropHelper@@AEAAXXZ
    void _ComputeFinalSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDefaultDragImage@CDragDropHelper@@AEAAJPEAUIDataObject@@PEAUSHDRAGIMAGE@@@Z
    long _CreateDefaultDragImage(IDataObject *, SHDRAGIMAGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDragWindow@CDragDropHelper@@AEAAHXZ
    int _CreateDragWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CurrentVelocity@CDragDropHelper@@AEAAHXZ
    int _CurrentVelocity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawCustomImageAndDescription@CDragDropHelper@@AEAAXXZ
    void _DrawCustomImageAndDescription();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawDefaultImageAndDescription@CDragDropHelper@@AEAAXXZ
    void _DrawDefaultImageAndDescription();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawDescriptionLine@CDragDropHelper@@AEAAXHHPEBGPEBUtagRECT@@@Z
    void _DrawDescriptionLine(int, int, unsigned short const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawTooltipBg@CDragDropHelper@@AEAAXPEAUtagRECT@@0J@Z
    void _DrawTooltipBg(tagRECT *, tagRECT *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDescriptionOnScreen@CDragDropHelper@@AEAAXPEAUtagRECT@@0@Z
    void _EnsureDescriptionOnScreen(tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractContinualData@CDragDropHelper@@AEAAXXZ
    void _ExtractContinualData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExtractOneTimeData@CDragDropHelper@@AEAAXXZ
    void _ExtractOneTimeData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeDragData@CDragDropHelper@@AEAAXXZ
    void _FreeDragData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeSourceDragImage@CDragDropHelper@@AEAAXXZ
    void _FreeSourceDragImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEffectImageRect@CDragDropHelper@@AEAAJPEAUtagRECT@@@Z
    long _GetEffectImageRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImageBackgroundRect@CDragDropHelper@@AEAAJPEAUtagRECT@@@Z
    long _GetImageBackgroundRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTTipRect@CDragDropHelper@@AEAAXPEAUtagRECT@@00@Z
    void _GetTTipRect(tagRECT *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTextRect@CDragDropHelper@@AEAAJPEAUtagRECT@@@Z
    long _GetTextRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDescriptionAllowed@CDragDropHelper@@AEAAHXZ
    int _IsDescriptionAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadFromDataObject@CDragDropHelper@@AEAAJPEAUIDataObject@@@Z
    long _LoadFromDataObject(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadLayeredBitmapBits@CDragDropHelper@@AEAAJPEAXH@Z
    long _LoadLayeredBitmapBits(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapCoordsWindowToScreen@CDragDropHelper@@AEAAXPEAUHWND__@@PEAUtagPOINT@@@Z
    void _MapCoordsWindowToScreen(HWND__*, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapDropImageTypeToThemePart@CDragDropHelper@@AEAAHW4DROPIMAGETYPE@@@Z
    int _MapDropImageTypeToThemePart(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RepositionRectIfRTL@CDragDropHelper@@AEAAXPEAUtagRECT@@0@Z
    void _RepositionRectIfRTL(tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveLayeredBitmapBits@CDragDropHelper@@AEAAJPEAPEAXH@Z
    long _SaveLayeredBitmapBits(void * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveToDataObject@CDragDropHelper@@AEAAJPEAUIDataObject@@@Z
    long _SaveToDataObject(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetLayeredDragging@CDragDropHelper@@AEAAJPEAUSHDRAGIMAGE@@@Z
    long _SetLayeredDragging(SHDRAGIMAGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SizeDescriptionLine@CDragDropHelper@@AEAAJHPEBG00PEAUtagRECT@@111@Z
    long _SizeDescriptionLine(int, unsigned short const *, unsigned short const *, unsigned short const *, tagRECT *, tagRECT *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartExtractionThread@CDragDropHelper@@AEAAXXZ
    void _StartExtractionThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DetermineThumbnailFlags@CDragDropHelper@@CAXPEAUIShellItemArray@@PEAW4ITSIF@@@Z
    static void s_DetermineThumbnailFlags(IShellItemArray *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DragWndProc@CDragDropHelper@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_DragWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ExtractThumbnailThreadProc@CDragDropHelper@@CAKPEAX@Z
    static unsigned long s_ExtractThumbnailThreadProc(void *);
};
