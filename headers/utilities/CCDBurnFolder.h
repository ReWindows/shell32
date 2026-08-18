#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 63 member(s).
class CCDBurnFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCDBurnFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CCDBurnFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCDBurnFolder@@QEAA@PEAV0@@Z
    CCDBurnFolder(CCDBurnFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CCDBurnFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CCDBurnFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDListRoot@CCDBurnFolder@@QEAAPEBU_ITEMIDLIST_ABSOLUTE@@XZ
    _ITEMIDLIST_ABSOLUTE const * GetIDListRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CCDBurnFolder@@UEAAJPEBGPEAH@Z
    virtual long GetMaxLength(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIconIndex@CCDBurnFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAH@Z
    virtual long GetOverlayIconIndex(_ITEMID_CHILD & volatile *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayIndex@CCDBurnFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEAH@Z
    virtual long GetOverlayIndex(_ITEMID_CHILD & volatile *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneState@CCDBurnFolder@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetPaneState(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValidCharacters@CCDBurnFolder@@UEAAJPEAPEAG0@Z
    virtual long GetValidCharacters(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCDBurnFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCDBurnFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCDBurnFolder@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckDriveRestriction@CCDBurnFolder@@IEAAJPEAUHWND__@@@Z
    long _CheckDriveRestriction(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create@CCDBurnFolder@@MEAAJPEAPEAVCMergedFolder@@@Z
    virtual long _Create(CMergedFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOverlayInfo@CCDBurnFolder@@IEAAJPEFBU_ITEMID_CHILD@@PEAHK@Z
    long _GetOverlayInfo(_ITEMID_CHILD & volatile *, int *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryParseNameWithNamespace@CCDBurnFolder@@MEAAJPEBVCMergedFldrNamespace@@PEAUHWND__@@PEAUIBindCtx@@PEBGPEAPEAU_ITEMID_CHILD@@@Z
    virtual long _TryParseNameWithNamespace(CMergedFldrNamespace const *, HWND__*, IBindCtx *, unsigned short const *, _ITEMID_CHILD * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCDBurnFolder@@MEAA@XZ
    virtual ~CCDBurnFolder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCDBurnBackgroundMenu@CCDBurnFolder@@AEAAJPEAPEAUIContextMenu@@@Z
    long _CreateCDBurnBackgroundMenu(IContextMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseNameWithRestriction@CCDBurnFolder@@AEAAJPEBGPEBVCMergedFldrNamespace@@PEAUHWND__@@PEAUIBindCtx@@0PEAPEAU_ITEMID_CHILD@@@Z
    long _ParseNameWithRestriction(unsigned short const *, CMergedFldrNamespace const *, HWND__*, IBindCtx *, unsigned short const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RevokeSimpleParseBindCtx@CCDBurnFolder@@AEAAHPEAUIBindCtx@@PEAPEAUIFileSystemBindData@@@Z
    int _RevokeSimpleParseBindCtx(IBindCtx *, IFileSystemBindData * *);
};
