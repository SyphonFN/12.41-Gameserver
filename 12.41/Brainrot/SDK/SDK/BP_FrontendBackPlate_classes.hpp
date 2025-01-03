#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrontendBackPlate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrontendBackPlate.BP_FrontendBackPlate_C
// 0x0170 (0x0388 - 0x0218)
class ABP_FrontendBackPlate_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_DudeBro_MultiHomingProj_Trail;                   // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem11;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem1;                                   // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FrontendBackPlate_Floor;                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_fog;                                    // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         StopHyperSpeed_BlurControl_740818E745B3B8A476EC3CA79F88917D; // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StopHyperSpeed_LessBrightFlash_740818E745B3B8A476EC3CA79F88917D; // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StopHyperSpeed_Flash_740818E745B3B8A476EC3CA79F88917D; // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            StopHyperSpeed__Direction_740818E745B3B8A476EC3CA79F88917D; // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CAE[0x3];                                     // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     StopHyperSpeed;                                    // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_StarUVScale_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_StarFieldFade_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_StarBloom_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_NumStarLoops_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_UVScale_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_ShowStarLines_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_bloom_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_Tunnel_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_flash_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_starlines_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            HyperSpace__Direction_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CAF[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     HyperSpace;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UISpecailEventTransition_UsingUISpecialEventColors_26FA49894E4D045B21346598A2D837C2; // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            UISpecailEventTransition__Direction_26FA49894E4D045B21346598A2D837C2; // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CB0[0x3];                                     // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     UISpecailEventTransition;                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               BackgroundTexture;                                 // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Material_background;                               // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Material_Fog;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BlurMaterial;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdateFoginRealTime;                               // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB1[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_Floor;                                         // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     PreBlurMaterial;                                   // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget_preblur;                              // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Background;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Preblur;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BeginRockyRidge;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRockyRidgeFinished;                              // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             HidePlayer;                                        // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             RequestLobbyColorChanges;                          // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           CurrentUIColorScheme;                              // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasUIColorOverride;                               // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB2[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         FloatingShapes;                                    // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UAudioComponent*                        LoopingAudio;                                      // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowMatchmakingInteraction;                       // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void BeginRockyRidge__DelegateSignature();
	void OnRockyRidgeFinished__DelegateSignature();
	void HidePlayer__DelegateSignature();
	void RequestLobbyColorChanges__DelegateSignature(const struct FLinearColor& Color_A, bool UseDefaultScheme);
	void ExecuteUbergraph_BP_FrontendBackPlate(int32 EntryPoint);
	void EnteringMatchmaking();
	void MatchmakingEnded(bool bWasSuccess);
	void ReceiveBeginPlay();
	void HandleSpecialEventAudioOnMatchmakingEnd(bool Success);
	void TestBlur();
	void SetAllowMatchmakingInteraction(bool AllowInteraction);
	void ResetMatchmakingAnim();
	void PlayEnterMatchmakingAnim();
	void ReceiveTick(float DeltaSeconds);
	void PlayUISpecialEventTransition(bool bTransitionToSpecialEvent);
	void SetEnableBlackMondayFX(bool IsEnabled);
	void UpdateSettings();
	void StopHyperSpeed__UpdateFunc();
	void StopHyperSpeed__FinishedFunc();
	void HyperSpace__UpdateFunc();
	void HyperSpace__FinishedFunc();
	void UISpecailEventTransition__UpdateFunc();
	void UISpecailEventTransition__FinishedFunc();
	void UserConstructionScript();
	void SetBackgroundTexture(class UTexture* Texture, class UMaterialInterface* Material, class UMaterialInterface* Param_PreBlurMaterial);
	void UpdateRenderTarget();
	void EnableRealtimeUpdate(bool Enabled);
	void UpdateRenderTargetRealtime();
	void RequestUIColorScheme(const struct FLinearColor& MainUIColor);
	void GetUIColorScheme(struct FLinearColor* ColorScheme, bool* bHasOverride);
	void ResetUIColorScheme();
	void HasUIColorOverride(bool* Param_HasUIColorOverride);
	void SetSpecialEventUIColorScheme(bool SetUIPanelColors, const struct FLinearColor& Backing, const struct FLinearColor& Backing_Hover, const struct FLinearColor& Backing_Selection, bool SetFontColors, const struct FLinearColor& Primary, const struct FLinearColor& Secondary, const struct FLinearColor& Tertiary, const struct FLinearColor& Quaternary);
	void SetFloatingShapeVisibility(bool Show);
	void CreateUniqueMaterialName(const class FString& PostFix, class FString* UniqueString);
	void HasMatcmakingInteraction(bool* HasInteraction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrontendBackPlate_C">();
	}
	static class ABP_FrontendBackPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FrontendBackPlate_C>();
	}
};
static_assert(alignof(ABP_FrontendBackPlate_C) == 0x000008, "Wrong alignment on ABP_FrontendBackPlate_C");
static_assert(sizeof(ABP_FrontendBackPlate_C) == 0x000388, "Wrong size on ABP_FrontendBackPlate_C");
static_assert(offsetof(ABP_FrontendBackPlate_C, UberGraphFrame) == 0x000218, "Member 'ABP_FrontendBackPlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, P_DudeBro_MultiHomingProj_Trail) == 0x000220, "Member 'ABP_FrontendBackPlate_C::P_DudeBro_MultiHomingProj_Trail' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, ParticleSystem11) == 0x000228, "Member 'ABP_FrontendBackPlate_C::ParticleSystem11' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, ParticleSystem1) == 0x000230, "Member 'ABP_FrontendBackPlate_C::ParticleSystem1' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, SM_FrontendBackPlate_Floor) == 0x000238, "Member 'ABP_FrontendBackPlate_C::SM_FrontendBackPlate_Floor' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StaticMesh_fog) == 0x000240, "Member 'ABP_FrontendBackPlate_C::StaticMesh_fog' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StaticMesh) == 0x000248, "Member 'ABP_FrontendBackPlate_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, DefaultSceneRoot) == 0x000250, "Member 'ABP_FrontendBackPlate_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StopHyperSpeed_BlurControl_740818E745B3B8A476EC3CA79F88917D) == 0x000258, "Member 'ABP_FrontendBackPlate_C::StopHyperSpeed_BlurControl_740818E745B3B8A476EC3CA79F88917D' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StopHyperSpeed_LessBrightFlash_740818E745B3B8A476EC3CA79F88917D) == 0x00025C, "Member 'ABP_FrontendBackPlate_C::StopHyperSpeed_LessBrightFlash_740818E745B3B8A476EC3CA79F88917D' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StopHyperSpeed_Flash_740818E745B3B8A476EC3CA79F88917D) == 0x000260, "Member 'ABP_FrontendBackPlate_C::StopHyperSpeed_Flash_740818E745B3B8A476EC3CA79F88917D' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StopHyperSpeed__Direction_740818E745B3B8A476EC3CA79F88917D) == 0x000264, "Member 'ABP_FrontendBackPlate_C::StopHyperSpeed__Direction_740818E745B3B8A476EC3CA79F88917D' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, StopHyperSpeed) == 0x000268, "Member 'ABP_FrontendBackPlate_C::StopHyperSpeed' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_StarUVScale_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000270, "Member 'ABP_FrontendBackPlate_C::HyperSpace_StarUVScale_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_StarFieldFade_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000274, "Member 'ABP_FrontendBackPlate_C::HyperSpace_StarFieldFade_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_StarBloom_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000278, "Member 'ABP_FrontendBackPlate_C::HyperSpace_StarBloom_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_NumStarLoops_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x00027C, "Member 'ABP_FrontendBackPlate_C::HyperSpace_NumStarLoops_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_UVScale_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000280, "Member 'ABP_FrontendBackPlate_C::HyperSpace_UVScale_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_ShowStarLines_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000284, "Member 'ABP_FrontendBackPlate_C::HyperSpace_ShowStarLines_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_bloom_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000288, "Member 'ABP_FrontendBackPlate_C::HyperSpace_bloom_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_Tunnel_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x00028C, "Member 'ABP_FrontendBackPlate_C::HyperSpace_Tunnel_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_flash_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000290, "Member 'ABP_FrontendBackPlate_C::HyperSpace_flash_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace_starlines_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000294, "Member 'ABP_FrontendBackPlate_C::HyperSpace_starlines_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace__Direction_BA3E59114EDDA7E96C3E87A6A52D0356) == 0x000298, "Member 'ABP_FrontendBackPlate_C::HyperSpace__Direction_BA3E59114EDDA7E96C3E87A6A52D0356' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HyperSpace) == 0x0002A0, "Member 'ABP_FrontendBackPlate_C::HyperSpace' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, UISpecailEventTransition_UsingUISpecialEventColors_26FA49894E4D045B21346598A2D837C2) == 0x0002A8, "Member 'ABP_FrontendBackPlate_C::UISpecailEventTransition_UsingUISpecialEventColors_26FA49894E4D045B21346598A2D837C2' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, UISpecailEventTransition__Direction_26FA49894E4D045B21346598A2D837C2) == 0x0002AC, "Member 'ABP_FrontendBackPlate_C::UISpecailEventTransition__Direction_26FA49894E4D045B21346598A2D837C2' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, UISpecailEventTransition) == 0x0002B0, "Member 'ABP_FrontendBackPlate_C::UISpecailEventTransition' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, BackgroundTexture) == 0x0002B8, "Member 'ABP_FrontendBackPlate_C::BackgroundTexture' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, Material_background) == 0x0002C0, "Member 'ABP_FrontendBackPlate_C::Material_background' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, Material_Fog) == 0x0002C8, "Member 'ABP_FrontendBackPlate_C::Material_Fog' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, BlurMaterial) == 0x0002D0, "Member 'ABP_FrontendBackPlate_C::BlurMaterial' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, RenderTarget) == 0x0002D8, "Member 'ABP_FrontendBackPlate_C::RenderTarget' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, UpdateFoginRealTime) == 0x0002E0, "Member 'ABP_FrontendBackPlate_C::UpdateFoginRealTime' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, MID_Floor) == 0x0002E8, "Member 'ABP_FrontendBackPlate_C::MID_Floor' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, PreBlurMaterial) == 0x0002F0, "Member 'ABP_FrontendBackPlate_C::PreBlurMaterial' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, RenderTarget_preblur) == 0x0002F8, "Member 'ABP_FrontendBackPlate_C::RenderTarget_preblur' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, MID_Background) == 0x000300, "Member 'ABP_FrontendBackPlate_C::MID_Background' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, MID_Preblur) == 0x000308, "Member 'ABP_FrontendBackPlate_C::MID_Preblur' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, BeginRockyRidge) == 0x000310, "Member 'ABP_FrontendBackPlate_C::BeginRockyRidge' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, OnRockyRidgeFinished) == 0x000320, "Member 'ABP_FrontendBackPlate_C::OnRockyRidgeFinished' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, HidePlayer) == 0x000330, "Member 'ABP_FrontendBackPlate_C::HidePlayer' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, RequestLobbyColorChanges) == 0x000340, "Member 'ABP_FrontendBackPlate_C::RequestLobbyColorChanges' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, CurrentUIColorScheme) == 0x000350, "Member 'ABP_FrontendBackPlate_C::CurrentUIColorScheme' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, bHasUIColorOverride) == 0x000360, "Member 'ABP_FrontendBackPlate_C::bHasUIColorOverride' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, FloatingShapes) == 0x000368, "Member 'ABP_FrontendBackPlate_C::FloatingShapes' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, LoopingAudio) == 0x000378, "Member 'ABP_FrontendBackPlate_C::LoopingAudio' has a wrong offset!");
static_assert(offsetof(ABP_FrontendBackPlate_C, AllowMatchmakingInteraction) == 0x000380, "Member 'ABP_FrontendBackPlate_C::AllowMatchmakingInteraction' has a wrong offset!");

}

