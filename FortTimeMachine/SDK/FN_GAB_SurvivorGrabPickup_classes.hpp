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

// BlueprintGeneratedClass GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C
// 0x0020 (0x0A60 - 0x0A40)
class UGAB_SurvivorGrabPickup_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	class AFortPickup*                                 PickupToGrab;                                             // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortAIPawn*                                 ActivatingAI;                                             // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     GrabPickupMove;                                           // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorGrabPickup.GAB_SurvivorGrabPickup_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnCancelled_B3CE3AFB4C57F932694B73A2B89DEE1C();
	void OnInterrupted_B3CE3AFB4C57F932694B73A2B89DEE1C();
	void OnComplete_B3CE3AFB4C57F932694B73A2B89DEE1C();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void OnEndPlay_Event_1(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_GAB_SurvivorGrabPickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
