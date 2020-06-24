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

// BlueprintGeneratedClass OB_Tree_Special_04.OB_Tree_Special_04_C
// 0x0008 (0x10E0 - 0x10D8)
class AOB_Tree_Special_04_C : public ATree_Pine_02_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OB_Tree_Special_04.OB_Tree_Special_04_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ExecuteUbergraph_OB_Tree_Special_04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
