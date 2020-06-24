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

// BlueprintGeneratedClass GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C
// 0x0010 (0x0A50 - 0x0A40)
class UGAB_SurvivorMoveToSpawnSpot_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	class UFortAbilityTask_MoveAI*                     SpawnSpotMove;                                            // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorMoveToSpawnSpot.GAB_SurvivorMoveToSpawnSpot_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnCancelled_7777C42B4A977A34DD6FB2A03D4ED3A6();
	void OnInterrupted_7777C42B4A977A34DD6FB2A03D4ED3A6();
	void OnComplete_7777C42B4A977A34DD6FB2A03D4ED3A6();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void OnMoveFinished_Event_1(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void ExecuteUbergraph_GAB_SurvivorMoveToSpawnSpot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
