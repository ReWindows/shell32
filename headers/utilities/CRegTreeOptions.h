#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 30 member(s).
class CRegTreeOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRegTreeOptions@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitTree@CRegTreeOptions@@UEAAJPEAUHWND__@@PEAUHKEY__@@PEBD2@Z
    virtual long InitTree(HWND__*, HKEY__*, char const *, char const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRegTreeOptions@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRegTreeOptions@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventListener@CRegTreeOptions@@UEAAJPEAUIRegTreeOptionsEventListener@@@Z
    virtual long SetEventListener(IRegTreeOptionsEventListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHelp@CRegTreeOptions@@UEAAJPEAU_TREEITEM@@K@Z
    virtual long ShowHelp(_TREEITEM *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleItem@CRegTreeOptions@@UEAAJPEAU_TREEITEM@@@Z
    virtual long ToggleItem(_TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkTree@CRegTreeOptions@@UEAAJW4tagWALK_TREE_CMD@@@Z
    virtual long WalkTree(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStandardImageList@CRegTreeOptions@@IEAAXXZ
    void CreateStandardImageList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultByCLSID@CRegTreeOptions@@IEAAJAEBU_GUID@@PEAH@Z
    long GetDefaultByCLSID(_GUID const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadDefaultIconImage@CRegTreeOptions@@IEAAHPEBG@Z
    int LoadDefaultIconImage(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadDefaultIconImageFromRegKey@CRegTreeOptions@@IEAAHPEAX@Z
    int LoadDefaultIconImageFromRegKey(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDPIChanged@CRegTreeOptions@@IEAAXXZ
    void OnDPIChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIncludeViewOption@CRegTreeOptions@@IEAA_NPEBG@Z
    bool ShouldIncludeViewOption(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCheckStatus@CRegTreeOptions@@IEAAJPEAXPEAHH@Z
    long _GetCheckStatus(void *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSetByCLSID@CRegTreeOptions@@IEAAJAEBU_GUID@@PEAHH@Z
    long _GetSetByCLSID(_GUID const &, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSetByRegKey@CRegTreeOptions@@IEAAJPEAXPEAKPEAE1W4REG_CMD@@@Z
    long _GetSetByRegKey(void *, unsigned long *, unsigned char *, unsigned long *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegEnumTree@CRegTreeOptions@@IEAAXPEAXPEAU_TREEITEM@@1@Z
    void _RegEnumTree(void *, _TREEITEM *, _TREEITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegGetSetSetting@CRegTreeOptions@@IEAAJPEAXPEAKPEAE1W4REG_CMD@@@Z
    long _RegGetSetSetting(void *, unsigned long *, unsigned char *, unsigned long *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegIsRestricted@CRegTreeOptions@@IEAAHPEAX@Z
    int _RegIsRestricted(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveCheckStatus@CRegTreeOptions@@IEAAJPEAXH@Z
    long _SaveCheckStatus(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WalkTreeRecursive@CRegTreeOptions@@IEAAHPEAU_TREEITEM@@W4tagWALK_TREE_CMD@@@Z
    int _WalkTreeRecursive(_TREEITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TreeViewSubclassWndProc@CRegTreeOptions@@KA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_TreeViewSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRegTreeOptions@@MEAA@XZ
    virtual ~CRegTreeOptions();
};
