#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 5 member(s).
class EdpHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanCallerAccessFileContents@EdpHelpers@@YAJPEAUIShellItem@@@Z
    long CanCallerAccessFileContents(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateEdpPolicyOnBehalfOfDropTargetIfNeeded@EdpHelpers@@YAJPEAUHWND__@@PEAUIDropTarget@@PEAUIDataObject@@PEBG@Z
    long EvaluateEdpPolicyOnBehalfOfDropTargetIfNeeded(HWND__*, IDropTarget *, IDataObject *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllEnrolledEnterpriseIdentities@EdpHelpers@@YAJPEAUtagPROPVARIANT@@@Z
    long GetAllEnrolledEnterpriseIdentities(tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEdpProtected@EdpHelpers@@YA_NPEAUIShellItem2@@@Z
    bool IsEdpProtected(IShellItem2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnterpriseIdFromDataObjectOrClipboard@EdpHelpers@@YAJPEAUIDataObject@@PEAUIDropTarget@@@Z
    long SetEnterpriseIdFromDataObjectOrClipboard(IDataObject *, IDropTarget *);
};
