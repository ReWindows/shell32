#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 14 member(s).
class CEncryptionContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init_FolderContentsInfo@CEncryptionContextMenu@@QEAAJXZ
    long Init_FolderContentsInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CEncryptionContextMenu@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIDataObject@@PEAUHKEY__@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *, IDataObject *, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CEncryptionContextMenu@@UEAAJPEAUHMENU__@@IIII@Z
    virtual long QueryContextMenu(HMENU__*, unsigned int, unsigned int, unsigned int, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInvokeCommand@CEncryptionContextMenu@@MEAAJIPEAU_CMINVOKECOMMANDINFO@@@Z
    virtual long _OnInvokeCommand(unsigned int, _CMINVOKECOMMANDINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MappingArray@CEncryptionContextMenu@@MEAAPEBUICIVERBTOIDMAP@@XZ
    virtual ICIVERBTOIDMAP const * get_MappingArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MenuID@CEncryptionContextMenu@@MEAAIXZ
    virtual unsigned int get_MenuID();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEncryptionContextMenu@@MEAA@XZ
    virtual ~CEncryptionContextMenu();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncryptThreadProc@CEncryptionContextMenu@@CAKPEAX@Z
    static unsigned long EncryptThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Encrypt@CEncryptionContextMenu@@AEAAKXZ
    unsigned long _Encrypt();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFirstFileOnEncryptableVolume@CEncryptionContextMenu@@AEAA_NAEBV?$ComPtr@UIShellItemArray@@@WRL@Microsoft@@@Z
    bool _IsFirstFileOnEncryptableVolume(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StoreItemPath@CEncryptionContextMenu@@AEAAJV?$ComPtr@UIShellItem@@@WRL@Microsoft@@@Z
    long _StoreItemPath(WindissectOpaque);
};
