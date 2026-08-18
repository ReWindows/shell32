#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 123 member(s).
class CMVPEditControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMVPEditControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMVPEditControl@@QEAA@XZ
    CMVPEditControl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositioningRect@CMVPEditControl@@UEAAJPEAUtagRECT@@@Z
    virtual long GetPositioningRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CMVPEditControl@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMVPEditControl@@UEAAJPEAUIUnknown@@W4tagPROPDESC_CONTROL_TYPE@@@Z
    virtual long Initialize(IUnknown *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsModified@CMVPEditControl@@UEAAJPEAH@Z
    virtual long IsModified(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CMVPEditControl@@UEAAJH@Z
    virtual long OnDestroy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemPreview@CMVPEditControl@@UEAAJPEBG@Z
    virtual long OnItemPreview(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemSelected@CMVPEditControl@@UEAAJPEBG@Z
    virtual long OnItemSelected(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemUnSelected@CMVPEditControl@@UEAAJPEBG@Z
    virtual long OnItemUnSelected(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostCreate@CMVPEditControl@@UEAAJJ@Z
    virtual long PostCreate(long);
    // Category: Method | Source: PE Export
    // Symbol: ?PreCreate@CMVPEditControl@@UEAAJXZ
    virtual long PreCreate();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMVPEditControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMVPEditControl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowTheme@CMVPEditControl@@UEAAJPEBG0@Z
    virtual long SetWindowTheme(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMVPEditControl@@UEAA@XZ
    virtual ~CMVPEditControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustPosition@CMVPEditControl@@AEAAXPEAU_charrange@@JJJ@Z
    void _AdjustPosition(_charrange *, long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CharacterPositionFromPoint@CMVPEditControl@@AEAAJUtagPOINT@@@Z
    long _CharacterPositionFromPoint(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CorrectPosLanguageOption@CMVPEditControl@@AEAAXXZ
    void _CorrectPosLanguageOption();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateEditWindow@CMVPEditControl@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    long _CreateEditWindow(HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CursorInFreeText@CMVPEditControl@@AEAAHJ@Z
    int _CursorInFreeText(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DetectUserChanges@CMVPEditControl@@AEAAJXZ
    long _DetectUserChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DropTokens@CMVPEditControl@@AEAAJPEBV?$CDSA@UMVPTOKENDATA@@@@H@Z
    long _DropTokens(WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EditSubclassProc@CMVPEditControl@@AEAA_JPEAUHWND__@@I_K_J1@Z
    int64_t _EditSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandSelectedTokens@CMVPEditControl@@AEAAXXZ
    void _ExpandSelectedTokens();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillDSAFromSelection@CMVPEditControl@@AEAAJPEBU_charrange@@PEAV?$CDSA@UMVPTOKENDATA@@@@@Z
    long _FillDSAFromSelection(_charrange const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChangeOperation@CMVPEditControl@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetChangeOperation(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCharacterSelRange@CMVPEditControl@@AEAAXPEAU_charrange@@@Z
    void _GetCharacterSelRange(_charrange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentAMV@CMVPEditControl@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetCurrentAMV(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentSegment@CMVPEditControl@@AEAAJPEAPEAGPEAU_charrange@@@Z
    long _GetCurrentSegment(unsigned short * *, _charrange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentSegmentRange@CMVPEditControl@@AEAAJPEAU_charrange@@H@Z
    long _GetCurrentSegmentRange(_charrange *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayValueForValue@CMVPEditControl@@AEAAJPEBGGPEAPEAG@Z
    long _GetDisplayValueForValue(unsigned short const *, unsigned short, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEndOfTokenString@CMVPEditControl@@AEAAXPEBGJJPEAJ1PEAG@Z
    void _GetEndOfTokenString(unsigned short const *, long, long, long *, long *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFreeTextRange@CMVPEditControl@@AEAAXJPEAU_charrange@@@Z
    void _GetFreeTextRange(long, _charrange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPromptCharRange@CMVPEditControl@@AEAAXPEAU_charrange@@@Z
    void _GetPromptCharRange(_charrange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRestorableSelection@CMVPEditControl@@AEAAXPEAU_charrange@@@Z
    void _GetRestorableSelection(_charrange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTokenAfter@CMVPEditControl@@AEAAJJ@Z
    long _GetTokenAfter(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTokenSelRange@CMVPEditControl@@AEAAXPEAU_charrange@@@Z
    void _GetTokenSelRange(_charrange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideMCComplete@CMVPEditControl@@AEAAJXZ
    long _HideMCComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HidePromptText@CMVPEditControl@@AEAAXXZ
    void _HidePromptText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InIMEComposition@CMVPEditControl@@AEAAHXZ
    int _InIMEComposition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertToken@CMVPEditControl@@AEAAJPEBUMVPTOKENDATA@@@Z
    long _InsertToken(MVPTOKENDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertValue@CMVPEditControl@@AEAAJPEBGKG@Z
    long _InsertValue(unsigned short const *, unsigned long, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadControl@CMVPEditControl@@AEAAJPEAUIAggregateMultipleValues@@@Z
    long _LoadControl(IAggregateMultipleValues *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadControlFromIUnknown@CMVPEditControl@@AEAAJPEAUIUnknown@@@Z
    long _LoadControlFromIUnknown(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NeedsDelimiter@CMVPEditControl@@AEAAHJJ@Z
    int _NeedsDelimiter(long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDetectedChanges@CMVPEditControl@@AEAAXXZ
    void _OnDetectedChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditDoubleClick@CMVPEditControl@@AEAAHHHI@Z
    int _OnEditDoubleClick(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditExpandKey@CMVPEditControl@@AEAA_JH@Z
    int64_t _OnEditExpandKey(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditKeyDown@CMVPEditControl@@AEAA_JI_J@Z
    int64_t _OnEditKeyDown(unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditMouseButton@CMVPEditControl@@AEAAHI_KHH@Z
    int _OnEditMouseButton(unsigned int, uint64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditMouseMove@CMVPEditControl@@AEAAX_J@Z
    void _OnEditMouseMove(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditSize@CMVPEditControl@@AEAAXPEAUHWND__@@I_K_J@Z
    void _OnEditSize(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditStyleChanged@CMVPEditControl@@AEAAXXZ
    void _OnEditStyleChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEditThemeChanged@CMVPEditControl@@AEAAXPEAUHWND__@@@Z
    void _OnEditThemeChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOuterCommand@CMVPEditControl@@AEAA_JPEAUHWND__@@H0I@Z
    int64_t _OnOuterCommand(HWND__*, int, HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOuterCreate@CMVPEditControl@@AEAA_JPEAUHWND__@@PEBUtagCREATESTRUCTW@@@Z
    int64_t _OnOuterCreate(HWND__*, tagCREATESTRUCTW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOuterDelayedScrollBar@CMVPEditControl@@AEAAXPEAUHWND__@@JJ@Z
    void _OnOuterDelayedScrollBar(HWND__*, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOuterDragDropDone@CMVPEditControl@@AEAAXXZ
    void _OnOuterDragDropDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOuterNotify@CMVPEditControl@@AEAA_JPEAUHWND__@@HPEAUtagNMHDR@@@Z
    int64_t _OnOuterNotify(HWND__*, int, tagNMHDR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOuterRequestResize@CMVPEditControl@@AEAAXPEAUHWND__@@PEBU_reqresize@@@Z
    void _OnOuterRequestResize(HWND__*, _reqresize const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnOuterTTNeedText@CMVPEditControl@@AEAA_JPEAUtagNMTTDISPINFOW@@@Z
    int64_t _OnOuterTTNeedText(tagNMTTDISPINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OuterWindowProc@CMVPEditControl@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _OuterWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PlaceCursorInPromptText@CMVPEditControl@@AEAAXXZ
    void _PlaceCursorInPromptText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProtectAndSelectPromptText@CMVPEditControl@@AEAAXXZ
    void _ProtectAndSelectPromptText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProtectUndoRedoMessage@CMVPEditControl@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _ProtectUndoRedoMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveToken@CMVPEditControl@@AEAAJPEBGPEAH@Z
    long _RemoveToken(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceSel@CMVPEditControl@@AEAAXPEBGH@Z
    void _ReplaceSel(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceSelInSnapshot@CMVPEditControl@@AEAAJPEBG@Z
    long _ReplaceSelInSnapshot(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceTextAndRestoreSelection@CMVPEditControl@@AEAAXJJPEBG@Z
    void _ReplaceTextAndRestoreSelection(long, long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RespondToDelimiter@CMVPEditControl@@AEAAXPEBG0@Z
    void _RespondToDelimiter(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RespondToNewFreeText@CMVPEditControl@@AEAAXXZ
    void _RespondToNewFreeText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RespondToTextChange@CMVPEditControl@@AEAAXXZ
    void _RespondToTextChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectPromptText@CMVPEditControl@@AEAAXXZ
    void _SelectPromptText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSelEx@CMVPEditControl@@AEAAXPEBU_charrange@@@Z
    void _SetSelEx(_charrange const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowPromptText@CMVPEditControl@@AEAAXXZ
    void _ShowPromptText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TokenIndexToCharacterPosition@CMVPEditControl@@AEAAJJ@Z
    long _TokenIndexToCharacterPosition(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TokenizeFreeText@CMVPEditControl@@AEAAJJ@Z
    long _TokenizeFreeText(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TokenizeSelection@CMVPEditControl@@AEAAJPEAJPEAU_charrange@@@Z
    long _TokenizeSelection(long *, _charrange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCurrentText@CMVPEditControl@@AEAAJXZ
    long _UpdateCurrentText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateOnSelChange@CMVPEditControl@@AEAAXXZ
    void _UpdateOnSelChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePromptString@CMVPEditControl@@AEAAXXZ
    void _UpdatePromptString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSnapshots@CMVPEditControl@@AEAAJXZ
    long _UpdateSnapshots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EditSubclassProc@CMVPEditControl@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_EditSubclassProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OuterWindowProc@CMVPEditControl@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_OuterWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_AdjustWindowRect@CMVPEditControl@@EEAAJPEAUHWND__@@PEAUtagRECT@@PEBU3@H@Z
    virtual long v_AdjustWindowRect(HWND__*, tagRECT *, tagRECT const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_CanExpand@CMVPEditControl@@EEAAHXZ
    virtual int v_CanExpand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Cancel@CMVPEditControl@@EEAAXXZ
    virtual void v_Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Commit@CMVPEditControl@@EEAAXXZ
    virtual void v_Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CreateActiveWindow@CMVPEditControl@@EEAAPEAUHWND__@@PEAU2@PEBUtagRECT@@@Z
    virtual HWND__* v_CreateActiveWindow(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DestroyActiveWindow@CMVPEditControl@@EEAAXXZ
    virtual void v_DestroyActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DrawContent@CMVPEditControl@@EEAAJPEAUHDC__@@PEAUtagRECT@@HH@Z
    virtual long v_DrawContent(HDC__*, tagRECT *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ExpandNow@CMVPEditControl@@EEAAXPEAUHWND__@@H@Z
    virtual void v_ExpandNow(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetInternalPadding@CMVPEditControl@@EEAAXPEAUHWND__@@PEAUHDC__@@HPEAU_MARGINS@@@Z
    virtual void v_GetInternalPadding(HWND__*, HDC__*, int, _MARGINS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetValue@CMVPEditControl@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetValue(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsExpanded@CMVPEditControl@@EEAAHXZ
    virtual int v_IsExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetValue@CMVPEditControl@@EEAAJPEAUIUnknown@@@Z
    virtual long v_SetValue(IUnknown *);
};
