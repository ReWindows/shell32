#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 37 member(s).
class CFTAssocInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFTAssocInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFTAssocInfo@@QEAA@XZ
    CFTAssocInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFTAssocInfo@@UEAAJXZ
    virtual long Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelString@CFTAssocInfo@@UEAAJK@Z
    virtual long DelString(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CFTAssocInfo@@UEAAJK@Z
    virtual long Delete(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBOOL@CFTAssocInfo@@UEAAJKPEAH@Z
    virtual long GetBOOL(unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDWORD@CFTAssocInfo@@UEAAJKPEAK@Z
    virtual long GetDWORD(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@CFTAssocInfo@@UEAAJKPEAEPEAK@Z
    virtual long GetData(unsigned long, unsigned char *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CFTAssocInfo@@UEAAJKPEAGPEAK@Z
    virtual long GetString(unsigned long, unsigned short *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CFTAssocInfo@@UEAAJKPEBG@Z
    virtual long Init(unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitComplex@CFTAssocInfo@@UEAAJKPEBGK0@Z
    virtual long InitComplex(unsigned long, unsigned short const *, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWithClassKey@CFTAssocInfo@@UEAAJPEAUHKEY__@@KPEBG@Z
    virtual long InitWithClassKey(HKEY__*, unsigned long, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFTAssocInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFTAssocInfo@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBOOL@CFTAssocInfo@@UEAAJKH@Z
    virtual long SetBOOL(unsigned long, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDWORD@CFTAssocInfo@@UEAAJKK@Z
    virtual long SetDWORD(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@CFTAssocInfo@@UEAAJKPEAEK@Z
    virtual long SetData(unsigned long, unsigned char *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CFTAssocInfo@@UEAAJKPEBG@Z
    virtual long SetString(unsigned long, unsigned short const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClassIDToProgID@CFTAssocInfo@@IEAAJPEBGPEAGK@Z
    long _ClassIDToProgID(unsigned short const *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClassKeyToProgID@CFTAssocInfo@@IEAAJPEAUHKEY__@@PEAGK@Z
    long _ClassKeyToProgID(HKEY__*, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateProgID@CFTAssocInfo@@IEAAJXZ
    long _CreateProgID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppIcon@CFTAssocInfo@@IEAAJHPEAH@Z
    long _GetAppIcon(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExtDocIcon@CFTAssocInfo@@IEAAJPEBGHPEAH@Z
    long _GetExtDocIcon(unsigned short const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOpenWithInfo@CFTAssocInfo@@IEAAJPEAGK@Z
    long _GetOpenWithInfo(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProgIDDescr@CFTAssocInfo@@IEAAJPEAGK@Z
    long _GetProgIDDescr(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProgIDDocIcon@CFTAssocInfo@@IEAAJHPEAH@Z
    long _GetProgIDDocIcon(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProgIDEditFlags@CFTAssocInfo@@IEAAJPEAK@Z
    long _GetProgIDEditFlags(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsBrowseInPlace@CFTAssocInfo@@IEAAJPEAH@Z
    long _IsBrowseInPlace(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsEditFlagSet@CFTAssocInfo@@IEAAJKPEAH@Z
    long _IsEditFlagSet(unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsValidProgID@CFTAssocInfo@@IEAAHPEBG@Z
    int _IsValidProgID(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBrowseInPlace@CFTAssocInfo@@IEAAJH@Z
    long _SetBrowseInPlace(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEditFlagSet@CFTAssocInfo@@IEAAJKH@Z
    long _SetEditFlagSet(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIconLocation@CFTAssocInfo@@IEAAJPEBG@Z
    long _SetIconLocation(unsigned short const *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFTAssocInfo@@EEAA@XZ
    virtual ~CFTAssocInfo();
};
