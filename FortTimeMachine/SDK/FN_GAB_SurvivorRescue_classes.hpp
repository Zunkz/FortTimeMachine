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

// BlueprintGeneratedClass GAB_SurvivorRescue.GAB_SurvivorRescue_C
// 0x0020 (0x0A60 - 0x0A40)
class UGAB_SurvivorRescue_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      BP_VictoryDrone;                                          // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RescueCompleted;                                          // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A51(0x0007) MISSED OFFSET
	class AFortPlayerController*                       Rescuer;                                                  // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorRescue.GAB_SurvivorRescue_C");
		return ptr;
	}


	void Completed_8BD132F745BDCD15EBF232861F392E7B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_8BD132F745BDCD15EBF232861F392E7B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_8BD132F745BDCD15EBF232861F392E7B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_AE3E49574CEC70DFC62B01973CCF7515(const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void SpawnVictoryDrone();
	void RescueComplete();
	void PlayRescueAnimation();
	void K2_OnEndAbility();
	void WaitForFinishRescueEvent();
	void ExecuteUbergraph_GAB_SurvivorRescue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
