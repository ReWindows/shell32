#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CRegSupport {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSDeleteKey@CRegSupport@@UEAAHXZ
    virtual int RSDeleteKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSDeleteSubKey@CRegSupport@@UEAAHPEBG@Z
    virtual int RSDeleteSubKey(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSDeleteValue@CRegSupport@@UEAAHPEBG0@Z
    virtual int RSDeleteValue(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSDuplicateRootKey@CRegSupport@@UEAAPEAUHKEY__@@XZ
    virtual HKEY__* RSDuplicateRootKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSDuplicateSubKey@CRegSupport@@UEAAPEAUHKEY__@@PEBGHH@Z
    virtual HKEY__* RSDuplicateSubKey(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSGetDWORDValue@CRegSupport@@QEAAHPEBG0PEAK@Z
    int RSGetDWORDValue(unsigned short const *, unsigned short const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSGetTextValue@CRegSupport@@QEAAHPEBG0PEAGPEBK@Z
    int RSGetTextValue(unsigned short const *, unsigned short const *, unsigned short *, unsigned long const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSInitRoot@CRegSupport@@QEAAXPEAUHKEY__@@PEBG1KKK@Z
    void RSInitRoot(HKEY__*, unsigned short const *, unsigned short const *, unsigned long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSSetBinaryValue@CRegSupport@@QEAAHPEBG0PEAEKK@Z
    int RSSetBinaryValue(unsigned short const *, unsigned short const *, unsigned char *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSSetDWORDValue@CRegSupport@@QEAAHPEBG0KK@Z
    int RSSetDWORDValue(unsigned short const *, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSSetTextValue@CRegSupport@@QEAAHPEBG00K@Z
    int RSSetTextValue(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSSubKeyExist@CRegSupport@@UEAAHPEBG@Z
    virtual int RSSubKeyExist(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSValueExist@CRegSupport@@UEAAHPEBG0@Z
    virtual int RSValueExist(unsigned short const *, unsigned short const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseRegSubKey@CRegSupport@@MEAAXPEAUHKEY__@@@Z
    virtual void _CloseRegSubKey(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGeneric@CRegSupport@@MEAAHPEBG0PEAEPEAK@Z
    virtual int _GetGeneric(unsigned short const *, unsigned short const *, unsigned char *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRoot@CRegSupport@@MEAAPEBGPEAGK@Z
    virtual unsigned short const * _GetRoot(unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRootKey@CRegSupport@@MEAAPEAUHKEY__@@H@Z
    virtual HKEY__* _GetRootKey(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSubKey@CRegSupport@@IEAAPEAUHKEY__@@PEBGHK@Z
    HKEY__* _GetSubKey(unsigned short const *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitSetRoot@CRegSupport@@MEAAHPEBG0@Z
    virtual int _InitSetRoot(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegCreateKeyExHelper@CRegSupport@@KAPEAUHKEY__@@PEAU2@PEBGKK@Z
    static HKEY__* _RegCreateKeyExHelper(HKEY__*, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegOpenKeyExHelper@CRegSupport@@KAPEAUHKEY__@@PEAU2@PEBGK@Z
    static HKEY__* _RegOpenKeyExHelper(HKEY__*, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetGeneric@CRegSupport@@MEAAHPEBG0PEBEKKK@Z
    virtual int _SetGeneric(unsigned short const *, unsigned short const *, unsigned char const *, unsigned long, unsigned long, unsigned long);
};
