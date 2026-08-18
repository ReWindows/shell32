#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CPreviewThumbnailDevirtualizeSelectionWorkItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPreviewThumbnailDevirtualizeSelectionWorkItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearThreadState@CPreviewThumbnailDevirtualizeSelectionWorkItem@@UEAAJXZ
    virtual long ClearThreadState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CPreviewThumbnailDevirtualizeSelectionWorkItem@@SAJAEBUSELECTION_DEVIRTUALIZATION_PARAMS@@PEAPEAUIFrameWorkItem@@@Z
    static long CreateInstance(SELECTION_DEVIRTUALIZATION_PARAMS const &, IFrameWorkItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CPreviewThumbnailDevirtualizeSelectionWorkItem@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CPreviewThumbnailDevirtualizeSelectionWorkItem@@UEAAJXZ
    virtual long DoWork();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPreviewThumbnailDevirtualizeSelectionWorkItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPreviewThumbnailDevirtualizeSelectionWorkItem@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDevirtualizedSelection@CPreviewThumbnailDevirtualizeSelectionWorkItem@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetDevirtualizedSelection(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPreviewThumbnailDevirtualizeSelectionWorkItem@@EEAA@XZ
    virtual ~CPreviewThumbnailDevirtualizeSelectionWorkItem();
};
