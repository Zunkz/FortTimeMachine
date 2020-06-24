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

// BlueprintGeneratedClass GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C
// 0x0008 (0x0A48 - 0x0A40)
class UGAB_ShielderAttachPawnDies_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C");
		return ptr;
	}


	void Completed_E6AA24FA40A80C2024C99E9EDD469296(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_E6AA24FA40A80C2024C99E9EDD469296(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_E6AA24FA40A80C2024C99E9EDD469296(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_ShielderAttachPawnDies(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
