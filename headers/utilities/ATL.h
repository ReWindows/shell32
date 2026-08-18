#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class ATL {
public:
    class CComBSTR;
    class CComControlBase;
    class CComDispatchDriver;
    class CComDynamicUnkArray;
    class CComObjectRootBase;
    class CComTypeInfoHolder;
    class CComVariant;
    class CDynamicStdCallThunk2;
    class _ATL_SAFE_ALLOCA_IMPL;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z
    IUnknown * AtlComPtrAssign(IUnknown * *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z
    IUnknown * AtlComQIPtrAssign(IUnknown * *, IUnknown *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlHiMetricToPixel@ATL@@YAXPEBUtagSIZE@@PEAU2@@Z
    void AtlHiMetricToPixel(tagSIZE const *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlIPersistStreamInit_GetSizeMax2@ATL@@YAJPEAUATL_PROPMAP_ENTRY@1@PEAXPEAUIUnknown@@PEAT_ULARGE_INTEGER@@_N@Z
    long AtlIPersistStreamInit_GetSizeMax2(WindissectOpaque *, void *, IUnknown *, _ULARGE_INTEGER *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlIPersistStreamInit_Load2@ATL@@YAJPEAUIStream@@PEAUATL_PROPMAP_ENTRY@1@PEAXPEAUIUnknown@@_N@Z
    long AtlIPersistStreamInit_Load2(IStream *, WindissectOpaque *, void *, IUnknown *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlIPersistStreamInit_Save2@ATL@@YAJPEAUIStream@@HPEAUATL_PROPMAP_ENTRY@1@PEAXPEAUIUnknown@@_N@Z
    long AtlIPersistStreamInit_Save2(IStream *, int, WindissectOpaque *, void *, IUnknown *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z
    long AtlInternalQueryInterface(void *, WindissectOpaque const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlModuleInit@ATL@@YAJPEAU_ATL_MODULE@1@PEAU_ATL_OBJMAP_ENTRY@1@PEAUHINSTANCE__@@@Z
    long AtlModuleInit(WindissectOpaque *, WindissectOpaque *, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlModuleRegisterWndClassInfoW@ATL@@YAGPEAU_ATL_MODULE@1@PEAU_ATL_WNDCLASSINFOW@@PEAP6A_JPEAUHWND__@@I_K_J@Z@Z
    unsigned short AtlModuleRegisterWndClassInfoW(WindissectOpaque *, _ATL_WNDCLASSINFOW *, int64_t ( * *)(HWND__*, unsigned int, uint64_t, int64_t));
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlModuleTerm@ATL@@YAJPEAU_ATL_MODULE@1@@Z
    long AtlModuleTerm(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z
    int InlineIsEqualUnknown(_GUID const &);
};
