#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 2 member(s).
class ITEM_IMAGE_RESULT {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCB@ITEM_IMAGE_RESULT@@SAHPEAU1@PEAX@Z
    static int DestroyCB(ITEM_IMAGE_RESULT *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CloneFromItemEntryDSA@ITEM_IMAGE_RESULT@@SAJPEAV?$CDSA@UITEM_IMAGE_RESULT@@@@PEBV?$CDSA@UITEM_ENTRY@@@@PEAVCThumbnailLookupTable@@@Z
    static long s_CloneFromItemEntryDSA(WindissectOpaque *, WindissectOpaque const *, CThumbnailLookupTable *);
};
