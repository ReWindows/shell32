#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 13 member(s).
class MetadataLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@MetadataLayout@@SAJPEAPEAVLayout@DirectUI@@@Z
    static long Create(::DirectUI::Layout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLayout@MetadataLayout@@UEAAXPEAVElement@DirectUI@@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSize@MetadataLayout@@UEAA?AUtagSIZE@@PEAVElement@DirectUI@@HHPEAVSurface@4@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MetadataLayout@@UEAA@XZ
    virtual ~MetadataLayout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSaveCancelButtons@MetadataLayout@@AEAAXPEAVElement@DirectUI@@PEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@3@I@Z
    void _AddSaveCancelButtons(::DirectUI::Element *, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSpacerIfNeeded@MetadataLayout@@AEAAXPEAVElement@DirectUI@@PEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@3@@Z
    void _AddSpacerIfNeeded(::DirectUI::Element *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeLayoutObjects@MetadataLayout@@AEAAXXZ
    void _FreeLayoutObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLayoutList@MetadataLayout@@AEAAPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@DirectUI@@PEAVElement@3@@Z
    WindissectOpaque * _GetLayoutList(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideElements@MetadataLayout@@AEAAXPEAVElement@DirectUI@@PEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@3@HH@Z
    void _HideElements(::DirectUI::Element *, WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeVerticalFlag@MetadataLayout@@AEAAXPEAVElement@DirectUI@@@Z
    void _InitializeVerticalFlag(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetWidth@MetadataLayout@@AEAAXPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@DirectUI@@@Z
    void _ResetWidth(WindissectOpaque *);
};
