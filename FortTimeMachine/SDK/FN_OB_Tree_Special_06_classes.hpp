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

// BlueprintGeneratedClass OB_Tree_Special_06.OB_Tree_Special_06_C
// 0x0021 (0x10F9 - 0x10D8)
class AOB_Tree_Special_06_C : public ATree_Craggy_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    treeire4;                                                 // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    treefire2;                                                // 0x10E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    treefire1;                                                // 0x10F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnoughTwine;                                              // 0x10F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OB_Tree_Special_06.OB_Tree_Special_06_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ExecuteUbergraph_OB_Tree_Special_06(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
