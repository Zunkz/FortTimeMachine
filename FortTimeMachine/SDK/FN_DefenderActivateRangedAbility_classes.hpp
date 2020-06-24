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

// BlueprintGeneratedClass DefenderActivateRangedAbility.DefenderActivateRangedAbility_C
// 0x0058 (0x00F0 - 0x0098)
class UDefenderActivateRangedAbility_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_AbilityToActivate;                                     // 0x00A0(0x0020) (Edit, BlueprintVisible)
	class ADefender_C*                                 DefenderPawn;                                             // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilitySystemComponent*                 DefenderAbilitySystemComponent;                           // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortAIController*                           DefenderAIController;                                     // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UDefenderAnimBlueprint_C*                    DefenderAnimBlueprint;                                    // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanAttackTarget;                                          // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              LastTimeCouldHitTarget;                                   // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CurrentGoalActor;                                         // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefenderActivateRangedAbility.DefenderActivateRangedAbility_C");
		return ptr;
	}


	void HasAvailableAmmo(bool* HasAvailableAmmo);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveActivation(class AActor** OwnerActor);
	void ExecuteUbergraph_DefenderActivateRangedAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
