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

// BlueprintGeneratedClass AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C
// 0x0020 (0x0B18 - 0x0AF8)
class AAbilityDecoTool_SupplyDrop_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF8(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      NewVar_1;                                                 // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortDecoHelper*                             Helper;                                                   // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HideTimerHandle;                                          // 0x0B10(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C");
		return ptr;
	}


	void HideMeshAndPlacement(bool bInHide);
	void UserConstructionScript();
	void BPOnSetDecoObjectPreview(class AFortDecoHelper** FortDecoHelper);
	void Show();
	void HideFor(float InTime);
	void ExecuteUbergraph_AbilityDecoTool_SupplyDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
