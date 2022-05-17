#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

class FTDCore : public IModuleInterface
{
public:
    static inline FTDCore &Get()
    {
        return FModuleManager::LoadModuleChecked<FTDCore>("TDCore");
    }

    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("TDCore");
    }

    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};