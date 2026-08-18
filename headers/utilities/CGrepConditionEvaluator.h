#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 8 member(s).
class CGrepConditionEvaluator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesContentMatchCondition@CGrepConditionEvaluator@@QEAAJPEAW4TRIBIT@@@Z
    long DoesContentMatchCondition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CGrepConditionEvaluator@@UEAAJPEBUCONDITIONEVALINFO@@H@Z
    virtual long Initialize(CONDITIONEVALINFO const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGrepConditionEvaluator@@UEAA@XZ
    virtual ~CGrepConditionEvaluator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DoesItemMatchLeafCondition@CGrepConditionEvaluator@@MEAAJAEBUtagPROPVARIANT@@AEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEAUICondition@@HPEAW4TRIBIT@@PEAH@Z
    virtual long v_DoesItemMatchLeafCondition(tagPROPVARIANT const &, _tagpropertykey const &, int, ICondition *, int, int *, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvalValueChunk@CGrepConditionEvaluator@@AEAAJPEAUICondition@@PEAW4TRIBIT@@@Z
    long EvalValueChunk(ICondition *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFilter@CGrepConditionEvaluator@@AEAAJXZ
    long _InitFilter();
};
