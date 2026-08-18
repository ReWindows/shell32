#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 15 member(s).
namespace DirectUI {
class ClassInfoBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@ClassInfoBase@DirectUI@@UEAAXXZ
    virtual void AddChild();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ClassInfoBase@DirectUI@@UEAAXXZ
    virtual void AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssertPIZeroRef@ClassInfoBase@DirectUI@@UEBAXXZ
    virtual void AssertPIZeroRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumPropertyInfo@ClassInfoBase@DirectUI@@UEAAPEBUPropertyInfo@2@I@Z
    virtual ::DirectUI::PropertyInfo const * EnumPropertyInfo(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByClassIndex@ClassInfoBase@DirectUI@@UEAAPEBUPropertyInfo@2@I@Z
    virtual ::DirectUI::PropertyInfo const * GetByClassIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@ClassInfoBase@DirectUI@@UEBAHXZ
    virtual int GetChildren() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalIndex@ClassInfoBase@DirectUI@@UEBAIXZ
    virtual unsigned int GetGlobalIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModule@ClassInfoBase@DirectUI@@UEBAPEAUHINSTANCE__@@XZ
    virtual HINSTANCE__* GetModule() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@ClassInfoBase@DirectUI@@UEBAPEBGXZ
    virtual unsigned short const * GetName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPICount@ClassInfoBase@DirectUI@@UEBAIXZ
    virtual unsigned int GetPICount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGlobal@ClassInfoBase@DirectUI@@UEBA_NXZ
    virtual bool IsGlobal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSubclassOf@ClassInfoBase@DirectUI@@UEBA_NPEAUIClassInfo@2@@Z
    virtual bool IsSubclassOf(::DirectUI::IClassInfo *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidProperty@ClassInfoBase@DirectUI@@UEBA_NPEBUPropertyInfo@2@@Z
    virtual bool IsValidProperty(::DirectUI::PropertyInfo const *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ClassInfoBase@DirectUI@@UEAAHXZ
    virtual int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@ClassInfoBase@DirectUI@@UEAAXXZ
    virtual void RemoveChild();
};
} // namespace DirectUI
