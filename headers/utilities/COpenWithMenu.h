#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 32 member(s).
class COpenWithMenu {
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COpenWithMenu@@IEAA@XZ
    COpenWithMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitMenuPopup@COpenWithMenu@@IEAAHPEAUHMENU__@@@Z
    int InitMenuPopup(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateAndInsertStore@COpenWithMenu@@IEAAJPEAUHMENU__@@@Z
    long PopulateAndInsertStore(HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHelpText@COpenWithMenu@@IEAAJIIPEADI@Z
    long _GetHelpText(unsigned int, unsigned int, char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchMenuItem@COpenWithMenu@@IEAAJGPEA_J@Z
    long _MatchMenuItem(unsigned short, int64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenWithMenu@@MEAA@XZ
    virtual ~COpenWithMenu();
private:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COpenWithMenu@@EEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandString@COpenWithMenu@@EEAAJ_KIPEAIPEADI@Z
    virtual long GetCommandString(uint64_t, unsigned int, unsigned int *, char *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenWithTypeOverride@COpenWithMenu@@EEAAJPEAPEAG@Z
    virtual long GetOpenWithTypeOverride(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg@COpenWithMenu@@EEAAJI_K_J@Z
    virtual long HandleMenuMsg(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMenuMsg2@COpenWithMenu@@EEAAJI_K_JPEA_J@Z
    virtual long HandleMenuMsg2(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@COpenWithMenu@@EEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@COpenWithMenu@@EEAAJPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@COpenWithMenu@@EEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COpenWithMenu@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@COpenWithMenu@@EEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COpenWithMenu@@EEAAKXZ
    virtual unsigned long Release();
};
