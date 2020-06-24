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

// BlueprintGeneratedClass OB_Special_Mine_wall.OB_Special_Mine_wall_C
// 0x0009 (0x10C9 - 0x10C0)
class AOB_Special_Mine_wall_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10C0(0x0008) (Transient, DuplicateTransient)
	bool                                               BlockHealthRegen;                                         // 0x10C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OB_Special_Mine_wall.OB_Special_Mine_wall_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void HandleMissionEvent_HuskHasBeenKilled(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ExecuteUbergraph_OB_Special_Mine_wall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
