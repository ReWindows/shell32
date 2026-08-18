#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 36 member(s).
class CLinguisticAlternativeGenerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseImeCompatible@CLinguisticAlternativeGenerator@@UEAAJPEAUIImeCompatibleChangedSink@@PEAK@Z
    virtual long AdviseImeCompatible(IImeCompatibleChangedSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseImeComposition@CLinguisticAlternativeGenerator@@UEAAJPEAUICompositionChangedSink@@PEAK@Z
    virtual long AdviseImeComposition(ICompositionChangedSink *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLinguisticAlternativeGenerator@@QEAA@XZ
    CLinguisticAlternativeGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanGenerateAlternatives@CLinguisticAlternativeGenerator@@UEAAJPEAH@Z
    virtual long CanGenerateAlternatives(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositionContainsConvertedText@CLinguisticAlternativeGenerator@@UEAAHXZ
    virtual int CompositionContainsConvertedText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositionOccurred@CLinguisticAlternativeGenerator@@UEAAHXZ
    virtual int CompositionOccurred();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConversionOccurred@CLinguisticAlternativeGenerator@@UEAAHXZ
    virtual int ConversionOccurred();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAlternatives@CLinguisticAlternativeGenerator@@UEAAJPEBGIIPEAPEAUIQueryWithLinguisticAlternatives@@@Z
    virtual long GenerateAlternatives(unsigned short const *, unsigned int, unsigned int, IQueryWithLinguisticAlternatives * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostControlHasFocus@CLinguisticAlternativeGenerator@@UEAAJPEAH@Z
    virtual long HostControlHasFocus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImeCompatible@CLinguisticAlternativeGenerator@@UEAAHXZ
    virtual int IsImeCompatible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImeComposing@CLinguisticAlternativeGenerator@@UEAAHXZ
    virtual int IsImeComposing();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessingPossibleFocusLossKey@CLinguisticAlternativeGenerator@@UEAAHXZ
    virtual int IsProcessingPossibleFocusLossKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivated@CLinguisticAlternativeGenerator@@UEAAJAEBU_GUID@@0H@Z
    virtual long OnActivated(_GUID const &, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndEdit@CLinguisticAlternativeGenerator@@UEAAJPEAUITfContext@@KPEAUITfEditRecord@@@Z
    virtual long OnEndEdit(ITfContext *, unsigned long, ITfEditRecord *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetUsageHistory@CLinguisticAlternativeGenerator@@UEAAXXZ
    virtual void ResetUsageHistory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEditContext@CLinguisticAlternativeGenerator@@UEAAJPEAUIUnknown@@PEAUHWND__@@@Z
    virtual long SetEditContext(IUnknown *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostControlHasFocusOverride@CLinguisticAlternativeGenerator@@UEAAXH@Z
    virtual void SetHostControlHasFocusOverride(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessingPossibleFocusLossKey@CLinguisticAlternativeGenerator@@UEAAXH@Z
    virtual void SetProcessingPossibleFocusLossKey(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseImeCompatible@CLinguisticAlternativeGenerator@@UEAAJK@Z
    virtual long UnadviseImeCompatible(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseImeComposition@CLinguisticAlternativeGenerator@@UEAAJK@Z
    virtual long UnadviseImeComposition(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BuildOrQuery@CLinguisticAlternativeGenerator@@SAJPEBGIIPEAPEBGPEAPEAG@Z
    static long s_BuildOrQuery(unsigned short const *, unsigned int, unsigned int, unsigned short const * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FreeAlternatives@CLinguisticAlternativeGenerator@@SAXIPEAPEAG@Z
    static void s_FreeAlternatives(unsigned int, unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLinguisticAlternativeGenerator@@UEAA@XZ
    virtual ~CLinguisticAlternativeGenerator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CandiateListToAlternatives@CLinguisticAlternativeGenerator@@AEAAJPEAUITfCandidateList@@PEBGII1PEAIPEAPEAPEAG@Z
    long _CandiateListToAlternatives(ITfCandidateList *, unsigned short const *, unsigned int, unsigned int, unsigned short const *, unsigned int *, unsigned short * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ContainsConvertedText@CLinguisticAlternativeGenerator@@AEAA_NPEAUITfContext@@KPEAUITfRange@@@Z
    bool _ContainsConvertedText(ITfContext *, unsigned long, ITfRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCompatible@CLinguisticAlternativeGenerator@@AEAAXXZ
    void _EnsureCompatible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTextServiceInfo@CLinguisticAlternativeGenerator@@AEAAJXZ
    long _EnsureTextServiceInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCandidates@CLinguisticAlternativeGenerator@@AEAAJPEBGPEAPEAUITfCandidateList@@@Z
    long _GetCandidates(unsigned short const *, ITfCandidateList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFirstCompositionRange@CLinguisticAlternativeGenerator@@AEAAJPEAUITfContext@@PEAPEAUITfRange@@@Z
    long _GetFirstCompositionRange(ITfContext *, ITfRange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetQueryAndCompositionInfo@CLinguisticAlternativeGenerator@@AEAAJPEAPEAGPEAI1PEAPEAUITfRange@@@Z
    long _GetQueryAndCompositionInfo(unsigned short * *, unsigned int *, unsigned int *, ITfRange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetQueryFromRange@CLinguisticAlternativeGenerator@@AEAAJPEAUITfRange@@KPEAPEAG@Z
    long _GetQueryFromRange(ITfRange *, unsigned long, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSafeAlternativeString@CLinguisticAlternativeGenerator@@AEAA_NPEBG@Z
    bool _IsSafeAlternativeString(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUILessModeSupported@CLinguisticAlternativeGenerator@@AEAA_NAEBU_GUID@@@Z
    bool _IsUILessModeSupported(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubstituteAlternative@CLinguisticAlternativeGenerator@@AEAAJPEBG_K10PEAPEAG@Z
    long _SubstituteAlternative(unsigned short const *, uint64_t, uint64_t, unsigned short const *, unsigned short * *);
};
