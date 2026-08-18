#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 16 member(s).
class CAppletAndTaskEnum {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CAppletAndTaskEnum@@SAJKPEBGPEAUICondition@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned long, unsigned short const *, ICondition *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CAppletAndTaskEnum@@QEAAJKPEBGPEAUICondition@@@Z
    long Init(unsigned long, unsigned short const *, ICondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CAppletAndTaskEnum@@UEAAJKPEAPEAU_ITEMID_CHILD@@PEAK@Z
    virtual long Next(unsigned long, _ITEMID_CHILD * *, unsigned long *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplet@CAppletAndTaskEnum@@AEAAPEAVCControlPanelItem@@H@Z
    CControlPanelItem * GetApplet(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShowableTask@CAppletAndTaskEnum@@AEAAPEAUCONTROLPANELTASK@@H@Z
    CONTROLPANELTASK * GetShowableTask(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRankedAppletsToResultList@CAppletAndTaskEnum@@AEAAXPEAV?$CDSA@USEARCHRESULTAPPLET@CAppletAndTaskEnum@@@@@Z
    void _AddRankedAppletsToResultList(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRankedTasksToResultList@CAppletAndTaskEnum@@AEAAXPEAV?$CDSA@USEARCHRESULTAPPLET@CAppletAndTaskEnum@@@@W4TASKMATCH@@@Z
    void _AddRankedTasksToResultList(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FilterAndSortAppletsAndTasks@CAppletAndTaskEnum@@AEAAJXZ
    long _FilterAndSortAppletsAndTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppletFromTask@CAppletAndTaskEnum@@AEAAPEBVCControlPanelItem@@PEBUCONTROLPANELTASK@@@Z
    CControlPanelItem const * _GetAppletFromTask(CONTROLPANELTASK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextSearchResult@CAppletAndTaskEnum@@AEAAJPEAPEAU_ITEMID_CHILD@@@Z
    long _NextSearchResult(_ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextTask@CAppletAndTaskEnum@@AEAAJPEAPEAU_ITEMID_CHILD@@@Z
    long _NextTask(_ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DestroySearchResultAppletCB@CAppletAndTaskEnum@@CAHPEAUSEARCHRESULTAPPLET@1@PEAX@Z
    static int s_DestroySearchResultAppletCB(WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SortAppletsInSearchResultsRank@CAppletAndTaskEnum@@CAHPEBUSEARCHRESULTAPPLET@1@0_J@Z
    static int s_SortAppletsInSearchResultsRank(WindissectOpaque const *, WindissectOpaque const *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppletAndTaskEnum@@EEAA@XZ
    virtual ~CAppletAndTaskEnum();
};
