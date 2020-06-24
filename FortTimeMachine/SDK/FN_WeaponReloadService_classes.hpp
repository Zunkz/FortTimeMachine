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

// BlueprintGeneratedClass WeaponReloadService.WeaponReloadService_C
// 0x017F (0x0217 - 0x0098)
class UWeaponReloadService_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                TC_WeaponTypeToReload;                                    // 0x00A0(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       TC_DoNotReloadWhenTheseAbilitiesAreActive;                // 0x00A8(0x0020) (Edit, BlueprintVisible)
	float                                              PointBlankDamageThreshold;                                // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	class AFortAIPawn*                                 Pawn;                                                     // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortAIController*                           AIController;                                             // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      GoalActor;                                                // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortWeapon*                                 weapon;                                                   // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FFortBaseWeaponStats                        WeaponStats;                                              // 0x00F0(0x0120) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RangeToUse;                                               // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponCanPhysicallyBeReloaded;                            // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MagIsEmpty;                                               // 0x0215(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GoalActorAttackingUs;                                     // 0x0216(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponReloadService.WeaponReloadService_C");
		return ptr;
	}


	void HasFewAmmoLeftInMagazine(class AFortWeapon* WeaponUsed, bool* bCanReload);
	void ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_WeaponReloadService(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
