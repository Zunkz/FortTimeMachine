#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C
// 0x0030 (0x0870 - 0x0840)
class ABP_MinimapHighlight_Trees_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_HarvestingHelpers_Cars;                                 // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Minimap;                                                  // 0x0860(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowExtraHints;                                           // 0x0861(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnoughTwine;                                              // 0x0862(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DestroyExtraHints;                                        // 0x0863(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Highlights;                                               // 0x0864(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0865(0x0003) MISSED OFFSET
	class ABuildingActor*                              BuildingActorRef;                                         // 0x0868(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MinimapHighlight_Trees.BP_MinimapHighlight_Trees_C");
		return ptr;
	}


	void OnRep_Highlights();
	void OnRep_DestroyExtraHints();
	void OnRep_ShowExtraHints();
	void OnRep_Minimap();
	void UserConstructionScript();
	void Check();
	void SetMinimapOn();
	void SetMinimapOff();
	void HandleMissionEvent_OBJ_24_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_OBJ_3_Complete(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void Input(class ABuildingActor* ActorRef);
	void Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void StartHints();
	void timeup();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void nukeeffects();
	void findreminder();
	void ExecuteUbergraph_BP_MinimapHighlight_Trees(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
