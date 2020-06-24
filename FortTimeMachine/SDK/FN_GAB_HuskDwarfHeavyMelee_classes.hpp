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

// BlueprintGeneratedClass GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C
// 0x0008 (0x0A80 - 0x0A78)
class UGAB_HuskDwarfHeavyMelee_C : public UGAB_HuskMelee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A78(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskDwarfHeavyMelee.GAB_HuskDwarfHeavyMelee_C");
		return ptr;
	}


	void Completed_B2C8F1484A19A7577F3A6BA3168D0723(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B2C8F1484A19A7577F3A6BA3168D0723(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B2C8F1484A19A7577F3A6BA3168D0723(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_HuskDwarfHeavyMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
