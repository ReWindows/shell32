#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 6 member(s).
class CDummyRowsetListener {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?OnChangedItem@CDummyRowsetListener@@UEAAJAEBUtagPROPVARIANT@@W4__MIDL___MIDL_itf_searchapi_0000_0024_0001@@1@Z
    virtual long OnChangedItem(tagPROPVARIANT const &, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDeletedItem@CDummyRowsetListener@@UEAAJAEBUtagPROPVARIANT@@W4__MIDL___MIDL_itf_searchapi_0000_0024_0001@@@Z
    virtual long OnDeletedItem(tagPROPVARIANT const &, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNewItem@CDummyRowsetListener@@UEAAJAEBUtagPROPVARIANT@@W4__MIDL___MIDL_itf_searchapi_0000_0024_0001@@@Z
    virtual long OnNewItem(tagPROPVARIANT const &, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRowsetEvent@CDummyRowsetListener@@UEAAJW4__MIDL___MIDL_itf_searchapi_0000_0024_0002@@AEBUtagPROPVARIANT@@@Z
    virtual long OnRowsetEvent(int, tagPROPVARIANT const &);
};
