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

// BlueprintGeneratedClass GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C
// 0x0008 (0x0A48 - 0x0A40)
class UGAB_SurvivorDBNORevive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C");
		return ptr;
	}


	void OnCancelled_2491B74745BECED77F7B838860EC4602();
	void OnInterrupted_2491B74745BECED77F7B838860EC4602();
	void OnBlendOut_2491B74745BECED77F7B838860EC4602();
	void OnCompleted_2491B74745BECED77F7B838860EC4602();
	void K2_OnEndAbility();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_SurvivorDBNORevive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
