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

// BlueprintGeneratedClass GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C
// 0x0008 (0x0A48 - 0x0A40)
class UGAB_ShielderTeleportIn_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C");
		return ptr;
	}


	void Completed_B576F3AF456E16FEAB9BCCB307590576(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B576F3AF456E16FEAB9BCCB307590576(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B576F3AF456E16FEAB9BCCB307590576(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_ShielderTeleportIn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
