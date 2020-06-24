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

// BlueprintGeneratedClass DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C
// 0x0048 (0x00E0 - 0x0098)
class UDefenderAmmoAndWeaponCallouts_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	class ADefender_C*                                 DefenderPawn;                                             // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortAIController*                           AIController;                                             // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      GoalActor;                                                // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortWeapon*                                 weapon;                                                   // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetNeedWeaponCallout;                                    // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FName                                       NeedWeaponCalloutName;                                    // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetNeedAmmoCallout;                                      // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FGameplayTag                                AmmoCalloutTag;                                           // 0x00D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_DefenderAmmoAndWeaponCallouts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
