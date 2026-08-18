#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 28 member(s).
class CTTFProps {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuthor@CTTFProps@@UEAAJPEAPEAG@Z
    virtual long GetAuthor(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCopyright@CTTFProps@@UEAAJPEAPEAG@Z
    virtual long GetCopyright(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CTTFProps@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddability@CTTFProps@@UEAAJPEAPEAG@Z
    virtual long GetEmbeddability(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLicense@CTTFProps@@UEAAJPEAPEAG@Z
    virtual long GetLicense(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManufacturer@CTTFProps@@UEAAJPEAPEAG@Z
    virtual long GetManufacturer(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CTTFProps@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetTitle(tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrademark@CTTFProps@@UEAAJPEAPEAG@Z
    virtual long GetTrademark(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@CTTFProps@@UEAAJPEAPEAG@Z
    virtual long GetVersion(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CTTFProps@@UEAAJPEBG@Z
    virtual long Load(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTTFProps@@UEAA@XZ
    virtual ~CTTFProps();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CacheNameStrings@CTTFProps@@AEAAJGG@Z
    long _CacheNameStrings(unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNameFromTable@CTTFProps@@AEAAJGPEAPEAG@Z
    long _GetNameFromTable(unsigned short, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNameString@CTTFProps@@AEAAJGGGPEAPEAGH@Z
    long _GetNameString(unsigned short, unsigned short, unsigned short, unsigned short * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNameTable@CTTFProps@@AEAAJPEAPEBUTTF_PARTIALNAMETABLE@1@PEAG1@Z
    long _GetNameTable(WindissectOpaque const * *, unsigned short *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSmartNameString@CTTFProps@@AEAAJGGPEAPEAG@Z
    long _GetSmartNameString(unsigned short, unsigned short, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsValidAddress@CTTFProps@@AEAAHPEAEK@Z
    int _IsValidAddress(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsValidOffset@CTTFProps@@AEAAH_KK@Z
    int _IsValidOffset(uint64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapFile@CTTFProps@@AEAAJPEBG@Z
    long _MapFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadOS2Table@CTTFProps@@AEAAJXZ
    long _ReadOS2Table();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TTCGetUniqueNames@CTTFProps@@AEAAJQEAPEAGKPEAK@Z
    long _TTCGetUniqueNames(unsigned short * * const, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TTFGetOffsetToTable@CTTFProps@@AEAAKKPEAK@Z
    unsigned long _TTFGetOffsetToTable(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TTFGetSfntFragment@CTTFProps@@AEAAPEAXKK@Z
    void * _TTFGetSfntFragment(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TTFGetTableData@CTTFProps@@AEAAJKKKPEAX@Z
    long _TTFGetTableData(unsigned long, unsigned long, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TTFSetTTCIndex@CTTFProps@@AEAAJK@Z
    long _TTFSetTTCIndex(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnMapFile@CTTFProps@@AEAAXXZ
    void _UnMapFile();
};
