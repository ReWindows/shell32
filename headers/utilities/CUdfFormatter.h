#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class CUdfFormatter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPrepareDiscDialog@CUdfFormatter@@SA?AW4DialogResult@CPrepareDiscDialog@@PEAUHWND__@@HH@Z
    static int ShowPrepareDiscDialog(HWND__*, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoFormat@CUdfFormatter@@AEAA?AW4DialogResult@CPrepareDiscDialog@@PEBGG@Z
    int DoFormat(unsigned short const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatCallback@CUdfFormatter@@AEAAEW4_FMIFS_PACKET_TYPE@@KPEAX@Z
    unsigned char FormatCallback(int, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatThreadProc@CUdfFormatter@@AEAAKXZ
    unsigned long FormatThreadProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CUdfFormatter@@AEAAJH@Z
    long Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeInternal@CUdfFormatter@@AEAAJH@Z
    long _InitializeInternal(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenMutexForDrive@CUdfFormatter@@AEAAJXZ
    long _OpenMutexForDrive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EnumWindowsBringToForeground@CUdfFormatter@@CAHPEAUHWND__@@_J@Z
    static int s_EnumWindowsBringToForeground(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FormatCallback@CUdfFormatter@@CAEW4_FMIFS_PACKET_TYPE@@KPEAX@Z
    static unsigned char s_FormatCallback(int, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FormatThreadProc@CUdfFormatter@@CAKPEAX@Z
    static unsigned long s_FormatThreadProc(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUdfFormatter@@AEAA@XZ
    ~CUdfFormatter();
};
