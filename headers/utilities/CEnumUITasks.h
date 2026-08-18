#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 7 member(s).
class CEnumUITasks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitTasks@CEnumUITasks@@QEAAJQEBQEBU_GUID@@K@Z
    long InitTasks(_GUID const * const * const, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumUITasks@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumUITasks@@UEAAJXZ
    virtual long Reset();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Next@CEnumUITasks@@MEAAHPEAPEAUIUICommand@@@Z
    virtual int _Next(IUICommand * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumUITasks@@EEAA@XZ
    virtual ~CEnumUITasks();
};
