// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2023

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FImprovedQuestSystemModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
