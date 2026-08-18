#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 22 member(s).
class CPropertyThumbnailHandler {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPropertyThumbnailHandler@@QEAA@XZ
    CPropertyThumbnailHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extract@CPropertyThumbnailHandler@@UEAAJPEAPEAUHBITMAP__@@@Z
    virtual long Extract(HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extract@CPropertyThumbnailHandler@@UEAAJPEBGIPEAPEAUHICON__@@1I@Z
    virtual long Extract(unsigned short const *, unsigned int, HICON__* *, HICON__* *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CPropertyThumbnailHandler@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFile@CPropertyThumbnailHandler@@UEAAJPEAPEAG@Z
    virtual long GetCurFile(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconLocation@CPropertyThumbnailHandler@@UEAAJIPEAGIPEAHPEAI@Z
    virtual long GetIconLocation(unsigned int, unsigned short *, unsigned int, int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CPropertyThumbnailHandler@@UEAAJPEAGKPEAKPEBUtagSIZE@@K1@Z
    virtual long GetLocation(unsigned short *, unsigned long, unsigned long *, tagSIZE const *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnail@CPropertyThumbnailHandler@@UEAAJIPEAPEAUHBITMAP__@@PEAW4WTS_ALPHATYPE@@@Z
    virtual long GetThumbnail(unsigned int, HBITMAP__* *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitNew@CPropertyThumbnailHandler@@UEAAJXZ
    virtual long InitNew();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPropertyThumbnailHandler@@UEAAJPEAUIShellItem@@K@Z
    virtual long Initialize(IShellItem *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CPropertyThumbnailHandler@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CPropertyThumbnailHandler@@UEAAJPEAUIPropertyBag@@PEAUIErrorLog@@@Z
    virtual long Load(IPropertyBag *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CPropertyThumbnailHandler@@UEAAJPEBGK@Z
    virtual long Load(unsigned short const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CPropertyThumbnailHandler@@UEAAJPEAUIPropertyBag@@HH@Z
    virtual long Save(IPropertyBag *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?Save@CPropertyThumbnailHandler@@UEAAJPEBGH@Z
    virtual long Save(unsigned short const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?SaveCompleted@CPropertyThumbnailHandler@@UEAAJPEBG@Z
    virtual long SaveCompleted(unsigned short const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetThumbnailInternal@CPropertyThumbnailHandler@@IEAAJPEAPEAUHBITMAP__@@PEAW4WTS_ALPHATYPE@@@Z
    long _GetThumbnailInternal(HBITMAP__* *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertyThumbnailHandler@@MEAA@XZ
    virtual ~CPropertyThumbnailHandler();
};
