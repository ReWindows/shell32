#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 17 member(s).
class CFONProps {
public:
    class CNameList;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuthor@CFONProps@@UEAAJPEAPEAG@Z
    virtual long GetAuthor(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCopyright@CFONProps@@UEAAJPEAPEAG@Z
    virtual long GetCopyright(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CFONProps@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddability@CFONProps@@UEAAJPEAPEAG@Z
    virtual long GetEmbeddability(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLicense@CFONProps@@UEAAJPEAPEAG@Z
    virtual long GetLicense(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManufacturer@CFONProps@@UEAAJPEAPEAG@Z
    virtual long GetManufacturer(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CFONProps@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetTitle(tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrademark@CFONProps@@UEAAJPEAPEAG@Z
    virtual long GetTrademark(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@CFONProps@@UEAAJPEAPEAG@Z
    virtual long GetVersion(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CFONProps@@UEAAJPEBG@Z
    virtual long Load(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFONProps@@UEAA@XZ
    virtual ~CFONProps();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadFontDirEntry@CFONProps@@AEAAJPEAXKK@Z
    long _ReadFontDirEntry(void *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadResourceTableEntry@CFONProps@@AEAAJPEAXG@Z
    long _ReadResourceTableEntry(void *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadResourceTables@CFONProps@@AEAAJPEAXK@Z
    long _ReadResourceTables(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SkipNullTermString@CFONProps@@AEAAJPEAPEADPEBX@Z
    long _SkipNullTermString(char * *, void const *);
};
