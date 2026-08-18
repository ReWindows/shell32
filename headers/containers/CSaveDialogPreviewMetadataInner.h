#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 36 member(s).
// Base evidence: CPreviewMetadataInner (likely; classinfo-template-instantiation).
class CSaveDialogPreviewMetadataInner {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CSaveDialogPreviewMetadataInner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSaveDialogPreviewMetadataInner@@QEAA@XZ
    CSaveDialogPreviewMetadataInner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSaveDialogPreviewMetadataInner@@SAJPEAVElement@DirectUI@@PEAKPEAPEAV23@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSaveDialogPreviewMetadataInner@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectedPropertiesChanged@CSaveDialogPreviewMetadataInner@@UEAAJXZ
    virtual long OnCollectedPropertiesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentsChanged@CSaveDialogPreviewMetadataInner@@UEAAJXZ
    virtual long OnContentsChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnFileOk@CSaveDialogPreviewMetadataInner@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnFileOk(IFileDialog *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnFolderChange@CSaveDialogPreviewMetadataInner@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnFolderChange(IFileDialog *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnFolderChanged@CSaveDialogPreviewMetadataInner@@UEAAJXZ
    virtual long OnFolderChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnFolderChanging@CSaveDialogPreviewMetadataInner@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@@Z
    virtual long OnFolderChanging(IFileDialog *, IShellItem *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnOverwrite@CSaveDialogPreviewMetadataInner@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@PEAW4FDE_OVERWRITE_RESPONSE@@@Z
    virtual long OnOverwrite(IFileDialog *, IShellItem *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectedItemChanged@CSaveDialogPreviewMetadataInner@@UEAAJXZ
    virtual long OnSelectedItemChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectionChange@CSaveDialogPreviewMetadataInner@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnSelectionChange(IFileDialog *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectionChanged@CSaveDialogPreviewMetadataInner@@UEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnShareViolation@CSaveDialogPreviewMetadataInner@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@PEAW4FDE_SHAREVIOLATION_RESPONSE@@@Z
    virtual long OnShareViolation(IFileDialog *, IShellItem *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTypeChange@CSaveDialogPreviewMetadataInner@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnTypeChange(IFileDialog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSaveDialogPreviewMetadataInner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CSaveDialogPreviewMetadataInner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CSaveDialogPreviewMetadataInner@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Remember@CSaveDialogPreviewMetadataInner@@MEAAXPEAVCMetadataElement@@@Z
    virtual void _Remember(CMetadataElement *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillSaveDialogPreviewPane@CSaveDialogPreviewMetadataInner@@AEAAJXZ
    long _FillSaveDialogPreviewPane();
};
