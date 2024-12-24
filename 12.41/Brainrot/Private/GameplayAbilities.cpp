#include "../Public/GameplayAbilities.h"

void Abilities::InternalServerTryActivateAbility(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData)
{
    FGameplayAbilitySpec* Spec = nullptr;

    for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); ++i) {
        auto& Handle = AbilitySystemComponent->ActivatableAbilities.Items[i].Handle;

        if (Handle.Handle == Handle.Handle)
        {
            Spec = &AbilitySystemComponent->ActivatableAbilities.Items[i];
        }
    }

    if (!Spec) { AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current); return; }

    Spec->InputPressed = true;
    UGameplayAbility* InstancedAbility = nullptr;

    if (!InternalTryActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData)) {
        AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
        Spec->InputPressed = false;
        AbilitySystemComponent->ActivatableAbilities.MarkItemDirty(*Spec);
    }
}

void Abilities::GiveAbility(AFortPlayerPawnAthena* Pawn, UGameplayAbility* GameplayAbility)
{
    if (!Pawn || !GameplayAbility)
    {
        std::cout << "Pawn || GameplayAbility is null" << std::endl;
        return;
    }

    auto AbilitySystemComponent = Pawn->AbilitySystemComponent;

    if (!AbilitySystemComponent) {
		std::cout << "AbilitySystemComponent is null" << std::endl;
        return;
    }

    FGameplayAbilitySpec Spec;
    SpecConstructor(&Spec, GameplayAbility, 1, -1, nullptr);
    InternalGiveAbility(AbilitySystemComponent, &Spec.Handle, Spec);
}