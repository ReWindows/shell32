#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 11 member(s).
class TelemetryCorrelationVectorServiceProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChainSite@TelemetryCorrelationVectorServiceProvider@@SA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@PEAV1@PEAUIUnknown@@@Z
    static WindissectOpaque ChainSite(TelemetryCorrelationVectorServiceProvider *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Increment@TelemetryCorrelationVectorServiceProvider@@UEAAJPEAPEAD@Z
    virtual long Increment(char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertIntoSiteObject@TelemetryCorrelationVectorServiceProvider@@SA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@PEAV1@PEAUIUnknown@@PEAUIServiceProvider@@@Z
    static WindissectOpaque InsertIntoSiteObject(TelemetryCorrelationVectorServiceProvider *, IUnknown *, IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Make@TelemetryCorrelationVectorServiceProvider@@SA?AV?$ComPtr@VTelemetryCorrelationVectorServiceProvider@@@WRL@Microsoft@@PEAUIUnknown@@@Z
    static WindissectOpaque Make(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Make@TelemetryCorrelationVectorServiceProvider@@SA?AV?$ComPtr@VTelemetryCorrelationVectorServiceProvider@@@WRL@Microsoft@@PEAUIUnknown@@AEBU_GUID@@@Z
    static WindissectOpaque Make(IUnknown *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSeed@TelemetryCorrelationVectorServiceProvider@@SA?AV?$ComPtr@VTelemetryCorrelationVectorServiceProvider@@@WRL@Microsoft@@XZ
    static WindissectOpaque MakeSeed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@TelemetryCorrelationVectorServiceProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@TelemetryCorrelationVectorServiceProvider@@UEAAJPEAPEAD@Z
    virtual long ToString(char * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TelemetryCorrelationVectorServiceProvider@@UEAA@XZ
    virtual ~TelemetryCorrelationVectorServiceProvider();
};
