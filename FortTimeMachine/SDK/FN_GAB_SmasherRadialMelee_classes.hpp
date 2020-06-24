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

// BlueprintGeneratedClass GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C
// 0x0020 (0x0A70 - 0x0A50)
class UGAB_SmasherRadialMelee_C : public UGAB_AIBaseMelee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GE_SmasherMeleeSuccess;                                   // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmasherRotationRate;                                      // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A64(0x0004) MISSED OFFSET
	class UFortAbilityTask_MoveAI*                     Move;                                                     // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C");
		return ptr;
	}


	void Completed_2EFEB45748E11A8A846C14AD7ADF164D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_2EFEB45748E11A8A846C14AD7ADF164D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_2EFEB45748E11A8A846C14AD7ADF164D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void OnInterrupted_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void OnComplete_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void K2_ActivateAbility();
	void MoveToLoop();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_SmasherRadialMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
