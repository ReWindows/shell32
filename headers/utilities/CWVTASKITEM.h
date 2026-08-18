#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class CWVTASKITEM {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CWVTASKITEM@@QEAAJPEBUtagWVTASKITEM@@PEAUIShellItemArray@@PEAPEAG@Z
    long get_Name(tagWVTASKITEM const *, IShellItemArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@CWVTASKITEM@@QEAAJPEBUtagWVTASKITEM@@PEAUIUnknown@@PEAUIShellItemArray@@HPEAH@Z
    long get_State(tagWVTASKITEM const *, IUnknown *, IShellItemArray *, int, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_get_String@CWVTASKITEM@@AEAAJPEBUtagWVTASKITEM@@KPEAPEAGKHW4SHSTOCKICONID@@@Z
    long _get_String(tagWVTASKITEM const *, unsigned long, unsigned short * *, unsigned long, int, int);
};
