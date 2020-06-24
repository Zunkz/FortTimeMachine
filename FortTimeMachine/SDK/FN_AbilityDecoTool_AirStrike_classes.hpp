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

// BlueprintGeneratedClass AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C
// 0x0160 (0x0C58 - 0x0AF8)
class AAbilityDecoTool_AirStrike_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF8(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayAttribute                          firingRangeSubBuilding3;                                  // 0x0B08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                PowerLevel;                                               // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B2C(0x0004) MISSED OFFSET
	struct FAirStrikeLeveledPatterns                   DONOTEDIT_LeveledAirStrikeArrays;                         // 0x0B30(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Current_Air_Strike_Sub_Tier_Selection;                    // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Current_Level_Max;                                        // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             Current_Unprocessed_Positions_Array;                      // 0x0B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Position_Array_Cleaned_of_duplicates;                     // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Duplicate_Positions;                                      // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Double_Entries;                                           // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Spacing_Between_the_Impacts;                              // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B8C(0x0004) MISSED OFFSET
	class AFortDecoHelper*                             FortDecoHelper;                                           // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Old_Power_Level;                                          // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Pattern_Needs_to_change;                                  // 0x0B9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B9D(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       TC_BombUpgrade1;                                          // 0x0BA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BombUpgrade2;                                          // 0x0BC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BombUpgrade3;                                          // 0x0BE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BombUpgrade4;                                          // 0x0C00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BombUpgrade5;                                          // 0x0C20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Onboarding;                                               // 0x0C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0C41(0x0007) MISSED OFFSET
	class AFortDecoHelper*                             Helper;                                                   // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HideTimerHandle;                                          // 0x0C50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C");
		return ptr;
	}


	void HideMeshAndPlacement(bool InHide);
	void PopulatePositionArrays();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BPOnSetDecoObjectPreview(class AFortDecoHelper** FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper** FortDecoHelper);
	void PassInfo(int Power_Level);
	void HideFor(float InTime);
	void Show();
	void ExecuteUbergraph_AbilityDecoTool_AirStrike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
