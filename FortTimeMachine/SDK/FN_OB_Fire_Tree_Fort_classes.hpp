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

// BlueprintGeneratedClass OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C
// 0x0020 (0x10F8 - 0x10D8)
class AOB_Fire_Tree_Fort_C : public ATree_Craggy_03_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_LightningStrike_Pit;                                    // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    treefire2;                                                // 0x10E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    treefire1;                                                // 0x10F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OB_Fire_Tree_Fort.OB_Fire_Tree_Fort_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void Treefire();
	void ExecuteUbergraph_OB_Fire_Tree_Fort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
