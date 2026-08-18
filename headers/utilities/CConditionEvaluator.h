#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
class CConditionEvaluator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesItemMatchCondition@CConditionEvaluator@@QEAAJPEAW4TRIBIT@@@Z
    long DoesItemMatchCondition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterConditionCompareValues@CConditionEvaluator@@QEAAJAEBUtagPROPVARIANT@@0AEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@HHPEAUIPropertyInfoProvider@@HPEAUIPropertyChangeArray@@W4BITSSET@@PEAGKPEAH7@Z
    long FilterConditionCompareValues(tagPROPVARIANT const &, tagPROPVARIANT const &, _tagpropertykey const &, int, int, int, IPropertyInfoProvider *, int, IPropertyChangeArray *, int, unsigned short *, unsigned long, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeDeferredConditions@CConditionEvaluator@@QEAAJXZ
    long FinalizeDeferredConditions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CConditionEvaluator@@UEAAJPEBUCONDITIONEVALINFO@@H@Z
    virtual long Initialize(CONDITIONEVALINFO const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LikeOpCompareValues@CConditionEvaluator@@QEAAJAEBUtagPROPVARIANT@@0W4tagCONDITION_OPERATION@@AEBU_tagpropertykey@@HHPEAUIPropertyInfoProvider@@HKPEAH@Z
    long LikeOpCompareValues(tagPROPVARIANT const &, tagPROPVARIANT const &, int, _tagpropertykey const &, int, int, IPropertyInfoProvider *, int, unsigned long, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConditionEvaluator@@UEAA@XZ
    virtual ~CConditionEvaluator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInputLocale@CConditionEvaluator@@IEAAKXZ
    unsigned long _GetInputLocale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DoesItemMatchLeafCondition@CConditionEvaluator@@MEAAJAEBUtagPROPVARIANT@@AEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEAUICondition@@HPEAW4TRIBIT@@PEAH@Z
    virtual long v_DoesItemMatchLeafCondition(tagPROPVARIANT const &, _tagpropertykey const &, int, ICondition *, int, int *, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesItemMatchAnd@CConditionEvaluator@@AEAAJPEAUICondition@@HPEAW4TRIBIT@@PEAH@Z
    long _DoesItemMatchAnd(ICondition *, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesItemMatchConditionWorker@CConditionEvaluator@@AEAAJPEAUICondition@@HPEAW4TRIBIT@@PEAH@Z
    long _DoesItemMatchConditionWorker(ICondition *, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesItemMatchLeafCondition@CConditionEvaluator@@AEAAJPEAUICondition@@HPEAW4TRIBIT@@PEAH@Z
    long _DoesItemMatchLeafCondition(ICondition *, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesItemMatchOr@CConditionEvaluator@@AEAAJPEAUICondition@@HPEAW4TRIBIT@@PEAH@Z
    long _DoesItemMatchOr(ICondition *, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EvaluateProperty@CConditionEvaluator@@AEAAJAEBUtagPROPVARIANT@@0AEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEAUICondition@@HPEAH4@Z
    long _EvaluateProperty(tagPROPVARIANT const &, tagPROPVARIANT const &, _tagpropertykey const &, int, ICondition *, int, int *, int *);
};
