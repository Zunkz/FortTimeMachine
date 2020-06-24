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

// BlueprintGeneratedClass GAB_SurvivorCower.GAB_SurvivorCower_C
// 0x0031 (0x0A71 - 0x0A40)
class UGAB_SurvivorCower_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	float                                              CowerTimeMin;                                             // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CowerTimeMax;                                             // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                TC_NPCAbilityNonAttackCowerTrue;                          // 0x0A50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackCowerFalse;                         // 0x0A58(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackCowerIndefiniteTrue;                // 0x0A60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackCowerIndefiniteFalse;               // 0x0A68(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CowerIndefinitely;                                        // 0x0A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorCower.GAB_SurvivorCower_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void CowerFalse();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_SurvivorCower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
