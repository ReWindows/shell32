#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CTaskConditionCombiner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCondition@CTaskConditionCombiner@@UEAAJPEAUITaskCondition@@@Z
    virtual long AddCondition(ITaskCondition *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTaskConditionCombiner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Eval@CTaskConditionCombiner@@UEAAJPEAW4tagCACHEDTASKCONDITION@@HPEAH@Z
    virtual long Eval(int *, int, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTaskConditionCombiner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTaskConditionCombiner@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInvert@CTaskConditionCombiner@@UEAAXH@Z
    virtual void SetInvert(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsAnd@CTaskConditionCombiner@@UEAAXH@Z
    virtual void SetIsAnd(int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTaskConditionCombiner@@MEAA@XZ
    virtual ~CTaskConditionCombiner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DPAEvalConditionCB@CTaskConditionCombiner@@CAHPEAUITaskCondition@@PEAUTASK_COMBINE_STATE@@@Z
    static int s_DPAEvalConditionCB(ITaskCondition *, TASK_COMBINE_STATE *);
};
