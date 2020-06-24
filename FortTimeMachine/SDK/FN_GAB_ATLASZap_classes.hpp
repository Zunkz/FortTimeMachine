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

// BlueprintGeneratedClass GAB_ATLASZap.GAB_ATLASZap_C
// 0x0010 (0x0A50 - 0x0A40)
class UGAB_ATLASZap_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                TC_GameplayEffectInstantDeath;                            // 0x0A48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_ATLASZap.GAB_ATLASZap_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_ATLASZap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
