#pragma once
#include "../../framework.h"

namespace Abilities {
    inline FGameplayAbilitySpecHandle* (*InternalGiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, const FGameplayAbilitySpec& Spec) = decltype(InternalGiveAbility)(InSDKUtils::GetImageBase() + 0x6B19E0);
    inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle Handle, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData) = decltype(InternalTryActivateAbility)((InSDKUtils::GetImageBase() + 0x6B33F0));
    inline void (*SpecConstructor)(FGameplayAbilitySpec*, UGameplayAbility*, int, int, UObject*) = decltype(SpecConstructor)(InSDKUtils::GetImageBase() + 0x6D6DD0);
    inline FGameplayAbilitySpecHandle(*GiveAbilityAndActivateOnce)(UAbilitySystemComponent* ASC, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec) = decltype(GiveAbilityAndActivateOnce)(InSDKUtils::GetImageBase() + 0x6B1B00);

    void InternalServerTryActivateAbility(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData);
    void GiveAbility(AFortPlayerPawnAthena* Pawn, UGameplayAbility* GameplayAbility);
}