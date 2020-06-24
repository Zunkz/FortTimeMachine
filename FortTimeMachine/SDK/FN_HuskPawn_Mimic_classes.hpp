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

// BlueprintGeneratedClass HuskPawn_Mimic.HuskPawn_Mimic_C
// 0x0080 (0x2038 - 0x1FB8)
class AHuskPawn_Mimic_C : public AHuskPawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1FB8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Quad;                                                  // 0x1FC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Mimic_Trail_Right;                                      // 0x1FC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Mimic_Trail_Left;                                       // 0x1FD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Troll_Fleeing_Loop;                                       // 0x1FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap1;                                             // 0x1FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ChestTop;                                                 // 0x1FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x1FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ChestBottom;                                              // 0x1FF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBecomingChest;                                          // 0x2000(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2001(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             ActivatingPlayerPawn;                                     // 0x2008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeInSecondsBeforeReturningToSpawn;                      // 0x2010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2014(0x0004) MISSED OFFSET
	struct FName                                       ShouldBecomeChestBBKey;                                   // 0x2018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnRotationKey;                                         // 0x2020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnLocationKey;                                         // 0x2028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGen_Interact_UnregisterFocus_C*             UnregisterFocusParams_Kill;                               // 0x2030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn_Mimic.HuskPawn_Mimic_C");
		return ptr;
	}


	void KillPawnOnceTransformedToChest();
	void BecomeChest();
	void BecomeChestIfConditionsSatisfied();
	void InitMimic();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void TryToBecomeChest();
	void Event_LastTimeDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void ReturnToSpawnAndBecomeChest();
	void ResetTimerForBecomingChest();
	void ReceivePossessed(class AController** NewController);
	void DisableRibbons();
	void EnableRibbons();
	void ExecuteUbergraph_HuskPawn_Mimic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
