#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 23 member(s).
class CFormatEngine {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFormatEngine@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CFormatEngine@@SAJPEAPEAV1@@Z
    static long CreateInstance(CFormatEngine * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteFormat@CFormatEngine@@QEAAXHW4_FMIFS_MEDIA_TYPE@@PEBGP6AEW4_FMIFS_PACKET_TYPE@@KPEAX@Z@Z
    void ExecuteFormat(int, int, unsigned short const *, unsigned char ( *)(int, unsigned long, void *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?FSComboPopulateUDFOptions@CFormatEngine@@QEAAJPEAUHWND__@@H@Z
    long FSComboPopulateUDFOptions(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FSComboSelectFS@CFormatEngine@@QEAAXPEAUHWND__@@K@Z
    void FSComboSelectFS(HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatSucceeded@CFormatEngine@@UEAAJPEAH@Z
    virtual long FormatSucceeded(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatWasCancelled@CFormatEngine@@UEAAJPEAH@Z
    virtual long FormatWasCancelled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFormatCallbackErrorPackets@CFormatEngine@@QEAAHW4_FMIFS_PACKET_TYPE@@PEAHPEAI@Z
    int HandleFormatCallbackErrorPackets(int, int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFormatCallbackLongTimeFormatPacket@CFormatEngine@@QEAAHPEBG@Z
    int HandleFormatCallbackLongTimeFormatPacket(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFormatEngine@@UEAAJIII@Z
    virtual long Initialize(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFormatCompleted@CFormatEngine@@QEAAXPEBG@Z
    void OnFormatCompleted(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateFormatInfo@CFormatEngine@@QEAAJPEAGKPEAH@Z
    long PopulateFormatInfo(unsigned short *, unsigned long, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFormatEngine@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFormatEngine@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CFormatEngine@@UEAAJPEAUHWND__@@@Z
    virtual long Run(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFormatErrorMessage@CFormatEngine@@QEAAXW4_FMIFS_PACKET_TYPE@@IPEBG@Z
    void ShowFormatErrorMessage(int, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVolumeName@CFormatEngine@@QEAAHPEBG0PEAUHWND__@@1H@Z
    int ValidateVolumeName(unsigned short const *, unsigned short const *, HWND__*, HWND__*, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumFileSystems@CFormatEngine@@AEAAJPEAPEAUFORMATINFO@@PEAK@Z
    long _EnumFileSystems(FORMATINFO * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillFormatEx2Param@CFormatEngine@@AEAAXPEAUFMIFS_FORMATEX2_PARAM@@HH@Z
    void _FillFormatEx2Param(FMIFS_FORMATEX2_PARAM *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFormatInfoDeviceInfo@CFormatEngine@@AEAAXXZ
    void _GetFormatInfoDeviceInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFormatInfoFilteredMediaTypes@CFormatEngine@@AEAAXXZ
    void _GetFormatInfoFilteredMediaTypes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFormatInfoSupportedMedia@CFormatEngine@@AEAAJXZ
    long _GetFormatInfoSupportedMedia();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFormatEngine@@AEAA@XZ
    ~CFormatEngine();
};
