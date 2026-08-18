#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class DragTrayShellHostHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DragTrayShellHostHandler@@QEAAXPEAUIDataObject@@@Z
    void Initialize(IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDragAsync@DragTrayShellHostHandler@@QEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque NotifyDragAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDropAsync@DragTrayShellHostHandler@@QEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque NotifyDropAsync();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragTrayShellHostHandler@@QEAA@XZ
    ~DragTrayShellHostHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDataObjectAsync@DragTrayShellHostHandler@@AEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUIDataObject@@@Z
    WindissectOpaque CheckDataObjectAsync(IDataObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlKeysState@DragTrayShellHostHandler@@AEAAGXZ
    unsigned short GetControlKeysState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDragTrayHostProcess@DragTrayShellHostHandler@@AEAAXAEBUValueSet@Collections@Foundation@Windows@winrt@@@Z
    void InvokeDragTrayHostProcess(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDragTrayViaConversation@DragTrayShellHostHandler@@AEAA?AUfire_and_forget@winrt@@XZ
    WindissectOpaque InvokeDragTrayViaConversation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDragTrayEnabled@DragTrayShellHostHandler@@AEAA_NXZ
    bool IsDragTrayEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDragEventAsync@DragTrayShellHostHandler@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@XZ
    WindissectOpaque ProcessDragEventAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDropEventAsync@DragTrayShellHostHandler@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@XZ
    WindissectOpaque ProcessDropEventAsync();
};
