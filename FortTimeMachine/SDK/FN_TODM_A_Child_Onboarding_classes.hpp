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

// BlueprintGeneratedClass TODM_A_Child_Onboarding.TODM_A_Child_Onboarding_C
// 0x0008 (0x0DC8 - 0x0DC0)
class ATODM_A_Child_Onboarding_C : public ATODM_A_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DC0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TODM_A_Child_Onboarding.TODM_A_Child_Onboarding_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TODM_A_Child_Onboarding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
