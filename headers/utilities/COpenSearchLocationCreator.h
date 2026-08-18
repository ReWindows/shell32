#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class COpenSearchLocationCreator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COpenSearchLocationCreator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLocationFromURL@COpenSearchLocationCreator@@UEAAJPEAUHWND__@@PEBGAEBU_GUID@@PEAPEAX@Z
    virtual long CreateLocationFromURL(HWND__*, unsigned short const *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COpenSearchLocationCreator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COpenSearchLocationCreator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenSearchLocationCreator@@QEAA@XZ
    ~COpenSearchLocationCreator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateLocationFromStream@COpenSearchLocationCreator@@AEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    long _CreateLocationFromStream(IStream *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinalizeLocation@COpenSearchLocationCreator@@AEAAJXZ
    long _FinalizeLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetElementText@COpenSearchLocationCreator@@AEAAJPEAUIXmlReader@@PEAPEAG@Z
    long _GetElementText(IXmlReader *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeLocation@COpenSearchLocationCreator@@AEAAJXZ
    long _InitializeLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseMSExtensionElement@COpenSearchLocationCreator@@AEAAJPEAUIXmlReader@@@Z
    long _ParseMSExtensionElement(IXmlReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseMSExtensionResultsProcessingElement@COpenSearchLocationCreator@@AEAAJPEAUIXmlReader@@@Z
    long _ParseMSExtensionResultsProcessingElement(IXmlReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseOpenSearchElement@COpenSearchLocationCreator@@AEAAJPEAUIXmlReader@@@Z
    long _ParseOpenSearchElement(IXmlReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseTemplate@COpenSearchLocationCreator@@AEAAJPEAUIXmlReader@@H@Z
    long _ParseTemplate(IXmlReader *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateTemplate@COpenSearchLocationCreator@@AEAAJPEBG@Z
    long _ValidateTemplate(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteFragmentToString@COpenSearchLocationCreator@@AEAAJPEAUIUnknown@@PEAPEAG@Z
    long _WriteFragmentToString(IUnknown *, unsigned short * *);
};
