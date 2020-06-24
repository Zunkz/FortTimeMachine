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

// BlueprintGeneratedClass GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C
// 0x0048 (0x0A88 - 0x0A40)
class UGAB_SurvivorLockInPlace_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                TC_NPCAbilityNonAttackLockInPlaceTrue;                    // 0x0A48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackLockInPlaceFalse;                   // 0x0A50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackLockInPlaceIndefiniteTrue;          // 0x0A58(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackLockInPlaceIndefiniteFalse;         // 0x0A60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LockIndefinitely;                                         // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A69(0x0007) MISSED OFFSET
	class UClass*                                      GE_SurvivorLockInPlace;                                   // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GE_SurvivorLockInPlaceHandel;                             // 0x0A78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      FocalPoint;                                               // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_SurvivorLockInPlace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
