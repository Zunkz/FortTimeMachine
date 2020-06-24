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

// BlueprintGeneratedClass GAB_SmasherApplyFullBodyHit.GAB_SmasherApplyFullBodyHit_C
// 0x0018 (0x0AB0 - 0x0A98)
class UGAB_SmasherApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A98(0x0008) (Transient, DuplicateTransient)
	struct FName                                       Front;                                                    // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentNum;                                               // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PreviousNum;                                              // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherApplyFullBodyHit.GAB_SmasherApplyFullBodyHit_C");
		return ptr;
	}


	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_SmasherApplyFullBodyHit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
