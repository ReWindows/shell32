#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CQueryCscPropertyInfoTask {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CQueryCscPropertyInfoTask@@UEAA@XZ
    virtual ~CQueryCscPropertyInfoTask();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?_CoInitFlags@CQueryCscPropertyInfoTask@@EEAAKXZ
    virtual unsigned long _CoInitFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Exec@CQueryCscPropertyInfoTask@@EEAAJPEAVCCscComTaskContext@@@Z
    virtual long _Exec(CCscComTaskContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsItemAutoCached@CQueryCscPropertyInfoTask@@AEAAJPEAUIOfflineFilesItem@@PEAH@Z
    long _IsItemAutoCached(IOfflineFilesItem *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsItemPinned@CQueryCscPropertyInfoTask@@AEAAJPEAUIOfflineFilesItem@@PEAH1@Z
    long _IsItemPinned(IOfflineFilesItem *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSettingEnabled@CQueryCscPropertyInfoTask@@AEAAJPEAUIOfflineFilesCache@@PEBGPEAH@Z
    long _IsSettingEnabled(IOfflineFilesCache *, unsigned short const *, int *);
};
