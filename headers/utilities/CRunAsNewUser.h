#pragma once
#include "../windissect_forwards.h"

// Reconstructed from shell32.dll by Windissect. 9 member(s).
class CRunAsNewUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CRunAsNewUser@@UEAAJXZ
    virtual long Execute();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BuildRundll32Commandline@CRunAsNewUser@@CAJPEBG0PEAPEAG@Z
    static long s_BuildRundll32Commandline(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PromptForCreds@CRunAsNewUser@@CAJJPEBGPEAPEAXPEAK@Z
    static long s_PromptForCreds(long, unsigned short const *, void * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RunAsThreadProc@CRunAsNewUser@@CAKPEAX@Z
    static unsigned long s_RunAsThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ShareMemory@CRunAsNewUser@@CAJPEBGPEBXKPEAPEAX@Z
    static long s_ShareMemory(unsigned short const *, void const *, unsigned long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ShellExecuteWithCreds@CRunAsNewUser@@CAJPEAXPEBG0K@Z
    static long s_ShellExecuteWithCreds(void *, unsigned short const *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UnpackCredsFromBuffer@CRunAsNewUser@@CAJPEAXKPEAVCSizeCountSecureStringResult@@11@Z
    static long s_UnpackCredsFromBuffer(void *, unsigned long, CSizeCountSecureStringResult *, CSizeCountSecureStringResult *, CSizeCountSecureStringResult *);
};
