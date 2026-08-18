#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 60 member(s).
class CShellUrl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPath@CShellUrl@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long AddPath(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellUrl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CShellUrl@@QEAAJPEAV1@@Z
    long Clone(CShellUrl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CShellUrl@@UEAAJPEAUIShellNavigationTarget@@PEAHK@Z
    virtual long Execute(IShellNavigationTarget *, int *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArgs@CShellUrl@@UEAAPEAGXZ
    virtual unsigned short * GetArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@CShellUrl@@UEAAJPEAGK@Z
    virtual long GetDisplayName(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameAlloc@CShellUrl@@UEAAJPEAPEAG@Z
    virtual long GetDisplayNameAlloc(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavFlags@CShellUrl@@UEAAJPEAJ@Z
    virtual long GetNavFlags(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParseResult@CShellUrl@@UEAAJXZ
    virtual long GetParseResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPidl@CShellUrl@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetPidl(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPidlNoGenerate@CShellUrl@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetPidlNoGenerate(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestID@CShellUrl@@UEAAJPEAH@Z
    virtual long GetRequestID(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStandardParsingFlags@CShellUrl@@UEAAKH@Z
    virtual unsigned long GetStandardParsingFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUrl@CShellUrl@@UEAAJPEAGK@Z
    virtual long GetUrl(unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUrlAlloc@CShellUrl@@UEAAJPEAPEAG@Z
    virtual long GetUrlAlloc(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseFromOutsideSource@CShellUrl@@UEAAJPEBGK@Z
    virtual long ParseFromOutsideSource(unsigned short const *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellUrl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellUrl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CShellUrl@@QEAAJXZ
    long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCancelObject@CShellUrl@@UEAAXPEAUICancelMethodCalls@@@Z
    virtual void SetCancelObject(ICancelMethodCalls *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentWorkingDir@CShellUrl@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetCurrentWorkingDir(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMessageBoxParent@CShellUrl@@UEAAXPEAUHWND__@@@Z
    virtual void SetMessageBoxParent(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavFlags@CShellUrl@@UEAAJHH@Z
    virtual long SetNavFlags(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPidl@CShellUrl@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long SetPidl(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPidlAndArgs@CShellUrl@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBG@Z
    virtual long SetPidlAndArgs(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequestID@CShellUrl@@UEAAJH@Z
    virtual long SetRequestID(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUrl@CShellUrl@@UEAAJPEBGK@Z
    virtual long SetUrl(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsyncPathParse@CShellUrl@@UEAAJPEAUHWND__@@PEBGKPEAUICancelMethodCalls@@@Z
    virtual long StartAsyncPathParse(HWND__*, unsigned short const *, unsigned long, ICancelMethodCalls *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartAsyncParse@CShellUrl@@SAKPEAX@Z
    static unsigned long _StartAsyncParse(void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanContinue@CShellUrl@@AEAAJXZ
    long _CanContinue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanUseAdvParsing@CShellUrl@@AEAAHXZ
    int _CanUseAdvParsing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckItem@CShellUrl@@AEAAJPEAUIShellFolder@@PEBU_ITEMIDLIST_ABSOLUTE@@PEFBU_ITEMID_CHILD@@PEAPEAU3@PEBGPEAPEBGK@Z
    long _CheckItem(IShellFolder *, _ITEMIDLIST_ABSOLUTE const *, _ITEMID_CHILD & volatile *, _ITEMIDLIST_ABSOLUTE * *, unsigned short const *, unsigned short const * *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenDispNameFromPidl@CShellUrl@@AEAAJPEBG@Z
    long _GenDispNameFromPidl(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GeneratePidl@CShellUrl@@AEAAJPEBGK@Z
    long _GeneratePidl(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateUrl@CShellUrl@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _GenerateUrl(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextPossibleFullPath@CShellUrl@@AEAAJPEBGPEAPEBGPEAGKPEAH@Z
    long _GetNextPossibleFullPath(unsigned short const *, unsigned short const * *, unsigned short *, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextPossibleSegment@CShellUrl@@AEAAJPEBGPEAPEBGPEAGKH@Z
    long _GetNextPossibleSegment(unsigned short const *, unsigned short const * *, unsigned short *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDotDotSegment@CShellUrl@@AEAAHPEBG@Z
    int _IsDotDotSegment(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFilePidl@CShellUrl@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    int _IsFilePidl(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsNetworkServer@CShellUrl@@AEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    int _IsNetworkServer(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseCurrentDir@CShellUrl@@AEAAJPEBGPEAHK@Z
    long _ParseCurrentDir(unsigned short const *, int *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseCurrentDriveRoot@CShellUrl@@AEAAJPEBGK@Z
    long _ParseCurrentDriveRoot(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseDesktop@CShellUrl@@AEAAJPEBGK@Z
    long _ParseDesktop(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseDosAppPath@CShellUrl@@AEAAJPEBGK@Z
    long _ParseDosAppPath(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseDrive@CShellUrl@@AEAAJPEBG@Z
    long _ParseDrive(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseNextSegment@CShellUrl@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGPEAHH@Z
    long _ParseNextSegment(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseQuickParse@CShellUrl@@AEAAJPEBGK@Z
    long _ParseQuickParse(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseRelativePidl@CShellUrl@@AEAAJPEBGPEAHKPEBU_ITEMIDLIST_ABSOLUTE@@HH@Z
    long _ParseRelativePidl(unsigned short const *, int *, unsigned long, _ITEMIDLIST_ABSOLUTE const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseSeparator@CShellUrl@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBGPEAHH@Z
    long _ParseSeparator(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseShellPath@CShellUrl@@AEAAJPEBGPEAHK@Z
    long _ParseShellPath(unsigned short const *, int *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseUNC@CShellUrl@@AEAAJPEBGPEAHKH@Z
    long _ParseUNC(unsigned short const *, int *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseURLFromOutsideSource@CShellUrl@@AEAAJKW4PURLFOSFLAGS@@PEBGPEAGPEAKPEAH@Z
    long _ParseURLFromOutsideSource(unsigned long, int, unsigned short const *, unsigned short *, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseVirtualNamespace@CShellUrl@@AEAAJPEBGK@Z
    long _ParseVirtualNamespace(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PidlShellExec@CShellUrl@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@KPEAUIUnknown@@@Z
    long _PidlShellExec(_ITEMIDLIST_ABSOLUTE const *, unsigned long, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QualifyFromAppPath@CShellUrl@@AEAAJPEBGK@Z
    long _QualifyFromAppPath(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QualifyFromDOSPath@CShellUrl@@AEAAJPEBGK@Z
    long _QualifyFromDOSPath(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QuickParse@CShellUrl@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEBG1PEAHH@Z
    long _QuickParse(_ITEMIDLIST_ABSOLUTE const *, unsigned short const *, unsigned short const *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPidl@CShellUrl@@AEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    long _SetPidl(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUrl@CShellUrl@@AEAAJPEBGK@Z
    long _SetUrl(unsigned short const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellUrl@@AEAA@XZ
    ~CShellUrl();
};
