#include "TDCore.h"
#include "Modules/ModuleManager.h"

#include "Log.h"

void FTDCore::StartupModule()
{
    UE_LOG(LogTDCore, Log, TEXT("FTDCore::StartupModule"));
}

void FTDCore::ShutdownModule()
{
    UE_LOG(LogTDCore, Log, TEXT("FTDCore::ShutdownModule"));
}

IMPLEMENT_PRIMARY_GAME_MODULE(FTDCore, TDCore, "TDCore");