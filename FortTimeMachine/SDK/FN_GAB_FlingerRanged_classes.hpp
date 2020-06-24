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

// BlueprintGeneratedClass GAB_FlingerRanged.GAB_FlingerRanged_C
// 0x0030 (0x0A98 - 0x0A68)
class UGAB_FlingerRanged_C : public UGAB_AIBaseRanged_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A68(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ThrowFX;                                                  // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ThrowFXTemplate;                                          // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      FlingerMesh;                                              // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_NPCRangedGrab;                                         // 0x0A88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_NPCRangedThrow;                                        // 0x0A90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_FlingerRanged.GAB_FlingerRanged_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void SpawnFX();
	void StopFX();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_FlingerRanged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
