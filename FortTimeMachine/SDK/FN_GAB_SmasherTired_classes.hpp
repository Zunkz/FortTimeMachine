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

// BlueprintGeneratedClass GAB_SmasherTired.GAB_SmasherTired_C
// 0x0010 (0x0A58 - 0x0A48)
class UGAB_SmasherTired_C : public UGAB_AIBaseSimpleMontage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A48(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GE_SmasherClearChargeEffects;                             // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherTired.GAB_SmasherTired_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_SmasherTired(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
