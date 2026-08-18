#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class CStackComposer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CStackComposer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStackComposer@@QEAA@XZ
    CStackComposer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalBitmap@CStackComposer@@UEAAJPEAPEAUHBITMAP__@@@Z
    virtual long GetFinalBitmap(HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortedItemBitmap@CStackComposer@@UEAAJKPEAPEAUHBITMAP__@@@Z
    virtual long GetSortedItemBitmap(unsigned long, HBITMAP__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CStackComposer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CStackComposer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgrounds@CStackComposer@@UEAAJKPEAKH@Z
    virtual long SetBackgrounds(unsigned long, unsigned long *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderStyle@CStackComposer@@UEAAJKK@Z
    virtual long SetBorderStyle(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForeground@CStackComposer@@UEAAJKH@Z
    virtual long SetForeground(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemBitmap@CStackComposer@@UEAAJKPEAUHBITMAP__@@H@Z
    virtual long SetItemBitmap(unsigned long, HBITMAP__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrixData@CStackComposer@@UEAAJKPEBUMATRIXDATA@@H@Z
    virtual long SetMatrixData(unsigned long, MATRIXDATA const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStackComposer@@QEAA@XZ
    ~CStackComposer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Sort@CStackComposer@@AEAAHXZ
    int _Sort();
};
