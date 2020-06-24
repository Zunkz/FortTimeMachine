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

// BlueprintGeneratedClass GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C
// 0x0008 (0x0A48 - 0x0A40)
class UGAB_DefenderNeedsAmmo_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_DefenderNeedsAmmo.GAB_DefenderNeedsAmmo_C");
		return ptr;
	}


	void OnMoveFinished_60C03C1F4256EA9FADC94D8900D2F075(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_60C03C1F4256EA9FADC94D8900D2F075();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_DefenderNeedsAmmo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
