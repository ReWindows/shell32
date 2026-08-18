#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 32 member(s).
class CControlPanelTasks {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControlPanelTasks@@QEAA@XZ
    CControlPanelTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowTask@CControlPanelTasks@@QEAA_NPEBUCONTROLPANELTASK@@@Z
    bool CanShowTask(CONTROLPANELTASK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHomePageTasksLoaded@CControlPanelTasks@@QEAAJXZ
    long EnsureHomePageTasksLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLoaded@CControlPanelTasks@@QEAAJPEAUIShellFolder2@@PEAUIEnumIDList@@K@Z
    long EnsureLoaded(IShellFolder2*, IEnumIDList *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteTask@CControlPanelTasks@@SAJPEAUIUnknown@@PEBG_NPEFBU_ITEMID_CHILD@@2@Z
    static long ExecuteTask(IUnknown *, unsigned short const *, bool, _ITEMID_CHILD & volatile *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CControlPanelTasks@@QEAAHXZ
    int GetCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskIndex@CControlPanelTasks@@QEAAHAEBU_GUID@@@Z
    int GetTaskIndex(_GUID const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CControlPanelTasks@@QEAAKXZ
    unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_APPLETTASKS_Destroy@CControlPanelTasks@@AEAAXPEAUAPPLETTASKS@@@Z
    void _APPLETTASKS_Destroy(APPLETTASKS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTaskIdsToCategoryDSA@CControlPanelTasks@@AEAAJPEAUIXmlReader@@QEAV?$CDSA@UTASKWITHOVERRIDE@@@@@Z
    long _AddTaskIdsToCategoryDSA(IXmlReader *, WindissectOpaque * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyTask@CControlPanelTasks@@CAXPEBUCONTROLPANELTASK@@PEBGPEAU2@@Z
    static void _CopyTask(CONTROLPANELTASK const *, unsigned short const *, CONTROLPANELTASK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateEnum@CControlPanelTasks@@AEAAJPEAV?$CDSA@UTASKWITHOVERRIDE@@@@PEAUICondition@@PEBGPEAW4TASKMATCH@@PEAPEAVCControlPanelTaskEnum@@@Z
    long _CreateEnum(WindissectOpaque *, ICondition *, unsigned short const *, int *, CControlPanelTaskEnum * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyTaskCB@CControlPanelTasks@@CAHPEAUCONTROLPANELTASK@@PEAX@Z
    static int _DestroyTaskCB(CONTROLPANELTASK *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyTaskIdsCB@CControlPanelTasks@@CAHPEAUTASKWITHOVERRIDE@@PEAX@Z
    static int _DestroyTaskIdsCB(TASKWITHOVERRIDE *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesCommandInvokeDialog@CControlPanelTasks@@CA_NPEBG0@Z
    static bool _DoesCommandInvokeDialog(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppletEnum@CControlPanelTasks@@AEAAJPEBGW4tagCPCAT@@PEAUICondition@@0PEAW4TASKMATCH@@PEAPEAVCControlPanelTaskEnum@@@Z
    long _GetAppletEnum(unsigned short const *, int, ICondition *, unsigned short const *, int *, CControlPanelTaskEnum * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetControlPanelName@CControlPanelTasks@@CAPEAGPEBG@Z
    static unsigned short * _GetControlPanelName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetElementText@CControlPanelTasks@@AEAAJPEAUIXmlReader@@PEAPEBG@Z
    long _GetElementText(IXmlReader *, unsigned short const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IncreaseTaskKeywordsBuffer@CControlPanelTasks@@AEAAJPEAPEAGPEAH@Z
    long _IncreaseTaskKeywordsBuffer(unsigned short * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadAppletTasks@CControlPanelTasks@@AEAAJPEAUIShellFolder2@@KPEAUIEnumIDList@@@Z
    long _LoadAppletTasks(IShellFolder2*, unsigned long, IEnumIDList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadAppletTasksFromXml@CControlPanelTasks@@AEAAJPEAUIXmlReader@@PEBG@Z
    long _LoadAppletTasksFromXml(IXmlReader *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadCategoryTasks@CControlPanelTasks@@AEAAJPEAUIXmlReader@@PEBGQEAV?$CDSA@UTASKWITHOVERRIDE@@@@H@Z
    long _LoadCategoryTasks(IXmlReader *, unsigned short const *, WindissectOpaque * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadHomePageTasks@CControlPanelTasks@@AEAAJXZ
    long _LoadHomePageTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadTaskCondition@CControlPanelTasks@@AEAAJPEAUIXmlReader@@PEAPEAUITaskCondition@@@Z
    long _LoadTaskCondition(IXmlReader *, ITaskCondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadTaskConditionParams@CControlPanelTasks@@AEAAJPEAUIXmlReader@@PEAPEAUINamedPropertyStore@@@Z
    long _LoadTaskConditionParams(IXmlReader *, INamedPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadTasksFromXml@CControlPanelTasks@@AEAAJPEAUIXmlReader@@PEAV?$CDPACoTaskMem@G@@@Z
    long _LoadTasksFromXml(IXmlReader *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadXMLFromExternalFile@CControlPanelTasks@@CAJPEBGPEAPEAUIXmlReader@@@Z
    static long _LoadXMLFromExternalFile(unsigned short const *, IXmlReader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadXMLFromExternalResource@CControlPanelTasks@@CAJPEBGPEAPEAUIXmlReader@@@Z
    static long _LoadXMLFromExternalResource(unsigned short const *, IXmlReader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReachedCategoryOrEndElement@CControlPanelTasks@@AEAAJPEAUIXmlReader@@PEBG@Z
    long _ReachedCategoryOrEndElement(IXmlReader *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReachedEndElement@CControlPanelTasks@@AEAA_NPEAUIXmlReader@@@Z
    bool _ReachedEndElement(IXmlReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchTask@CControlPanelTasks@@CA_NPEAUCONTROLPANELTASK@@PEAUTASKWITHOVERRIDE@@PEAUICondition@@PEBGPEAW4TASKMATCH@@@Z
    static bool _SearchTask(CONTROLPANELTASK *, TASKWITHOVERRIDE *, ICondition *, unsigned short const *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControlPanelTasks@@AEAA@XZ
    ~CControlPanelTasks();
};
