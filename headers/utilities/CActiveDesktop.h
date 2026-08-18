#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 53 member(s).
class CActiveDesktop {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AddDesktopItem@CActiveDesktop@@UEAAJPEBU_tagCOMPONENT@@K@Z
    virtual long AddDesktopItem(_tagCOMPONENT const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?AddDesktopItemWithUI@CActiveDesktop@@UEAAJPEAUHWND__@@PEAU_tagCOMPONENT@@K@Z
    virtual long AddDesktopItemWithUI(HWND__*, _tagCOMPONENT *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CActiveDesktop@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?AddUrl@CActiveDesktop@@UEAAJPEAUHWND__@@PEBGPEAU_tagCOMPONENT@@K@Z
    virtual long AddUrl(HWND__*, unsigned short const *, _tagCOMPONENT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyChanges@CActiveDesktop@@UEAAJK@Z
    virtual long ApplyChanges(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?EnsureUpdateHTML@CActiveDesktop@@UEAAJXZ
    virtual long EnsureUpdateHTML();
    // Category: Method | Source: PE Export
    // Symbol: ?GenerateDesktopItemHtml@CActiveDesktop@@UEAAJPEBGPEAU_tagCOMPONENT@@K@Z
    virtual long GenerateDesktopItemHtml(unsigned short const *, _tagCOMPONENT *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetADObjectFlags@CActiveDesktop@@UEAAJPEAKK@Z
    virtual long GetADObjectFlags(unsigned long *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDesktopItem@CActiveDesktop@@UEAAJHPEAU_tagCOMPONENT@@K@Z
    virtual long GetDesktopItem(int, _tagCOMPONENT *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDesktopItemByID@CActiveDesktop@@UEAAJ_KPEAU_tagCOMPONENT@@K@Z
    virtual long GetDesktopItemByID(uint64_t, _tagCOMPONENT *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDesktopItemBySource@CActiveDesktop@@UEAAJPEBGPEAU_tagCOMPONENT@@K@Z
    virtual long GetDesktopItemBySource(unsigned short const *, _tagCOMPONENT *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDesktopItemCount@CActiveDesktop@@UEAAJPEAHK@Z
    virtual long GetDesktopItemCount(int *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDesktopItemOptions@CActiveDesktop@@UEAAJPEAU_tagCOMPONENTSOPT@@K@Z
    virtual long GetDesktopItemOptions(_tagCOMPONENTSOPT *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPattern@CActiveDesktop@@UEAAJPEAGIK@Z
    virtual long GetPattern(unsigned short *, unsigned int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScheme@CActiveDesktop@@UEAAJPEAGPEAKK@Z
    virtual long GetScheme(unsigned short *, unsigned long *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWallpaper@CActiveDesktop@@UEAAJPEAGIK@Z
    virtual long GetWallpaper(unsigned short *, unsigned int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWallpaperOptions@CActiveDesktop@@UEAAJPEAU_tagWALLPAPEROPT@@K@Z
    virtual long GetWallpaperOptions(_tagWALLPAPEROPT *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?MakeDynamicChanges@CActiveDesktop@@UEAAJPEAUIOleObject@@@Z
    virtual long MakeDynamicChanges(IOleObject *);
    // Category: Method | Source: PE Export
    // Symbol: ?ModifyDesktopItem@CActiveDesktop@@UEAAJPEBU_tagCOMPONENT@@K@Z
    virtual long ModifyDesktopItem(_tagCOMPONENT const *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CActiveDesktop@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ReReadWallpaper@CActiveDesktop@@UEAAJXZ
    virtual long ReReadWallpaper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CActiveDesktop@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CActiveDesktop@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveDesktopItem@CActiveDesktop@@UEAAJPEBU_tagCOMPONENT@@K@Z
    virtual long RemoveDesktopItem(_tagCOMPONENT const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunWallpaperHostSynchronous@CActiveDesktop@@UEAAJXZ
    virtual long RunWallpaperHostSynchronous();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDesktopItemOptions@CActiveDesktop@@UEAAJPEBU_tagCOMPONENTSOPT@@K@Z
    virtual long SetDesktopItemOptions(_tagCOMPONENTSOPT const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPattern@CActiveDesktop@@UEAAJPEBGK@Z
    virtual long SetPattern(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSafeMode@CActiveDesktop@@UEAAJK@Z
    virtual long SetSafeMode(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScheme@CActiveDesktop@@UEAAJPEBGK@Z
    virtual long SetScheme(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWallpaper@CActiveDesktop@@UEAAJPEBGK@Z
    virtual long SetWallpaper(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWallpaperOptions@CActiveDesktop@@UEAAJPEBU_tagWALLPAPEROPT@@K@Z
    virtual long SetWallpaperOptions(_tagWALLPAPEROPT const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateAllDesktopSubscriptions@CActiveDesktop@@UEAAJXZ
    virtual long UpdateAllDesktopSubscriptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CActiveDesktop@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyWallpaper@CActiveDesktop@@AEAAJPEBGK0@Z
    long _ApplyWallpaper(unsigned short const *, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWallpaperPath@CActiveDesktop@@AEAAJPEAUHKEY__@@PEBG1PEAGK@Z
    long _GetWallpaperPath(HKEY__*, unsigned short const *, unsigned short const *, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CActiveDesktop@@AEAAXXZ
    void _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadWallpaper@CActiveDesktop@@AEAAHXZ
    int _ReadWallpaper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveSettings@CActiveDesktop@@AEAAJK@Z
    long _SaveSettings(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveWallpaper@CActiveDesktop@@AEAAJPEBGK@Z
    long _SaveWallpaper(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveWallpaperOptions@CActiveDesktop@@AEAAJK@Z
    long _SaveWallpaperOptions(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CActiveDesktop@@AEAA@XZ
    ~CActiveDesktop();
};
