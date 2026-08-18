#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CImageFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CImageFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIShellImageData@CImageFactory@@UEAAJPEAPEAUIShellImageData@@@Z
    virtual long CreateIShellImageData(IShellImageData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateImageFromFile@CImageFactory@@UEAAJPEBGPEAPEAUIShellImageData@@@Z
    virtual long CreateImageFromFile(unsigned short const *, IShellImageData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateImageFromStream@CImageFactory@@UEAAJPEAUIStream@@PEAPEAUIShellImageData@@@Z
    virtual long CreateImageFromStream(IStream *, IShellImageData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataFormatFromPath@CImageFactory@@UEAAJPEBGPEAU_GUID@@@Z
    virtual long GetDataFormatFromPath(unsigned short const *, _GUID *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CImageFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CImageFactory@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageFactory@@EEAA@XZ
    virtual ~CImageFactory();
};
