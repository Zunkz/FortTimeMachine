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

// BlueprintGeneratedClass BP_WarningLight.BP_WarningLight_C
// 0x004D (0x101D - 0x0FD0)
class ABP_WarningLight_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight1;                                               // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        ambientlight;                                             // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        cebterspinmesh;                                           // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotateLight_rotatez_B983B2604A31E913A3C7D48BB2356B09;     // 0x0FF8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RotateLight__Direction_B983B2604A31E913A3C7D48BB2356B09;  // 0x0FFC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0FFD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RotateLight;                                              // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewColorRed;                                              // 0x1008(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1009(0x0003) MISSED OFFSET
	struct FRotator                                    StartRotation;                                            // 0x100C(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              randdelay;                                                // 0x1018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartSpinningWhenAlive;                                   // 0x101C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WarningLight.BP_WarningLight_C");
		return ptr;
	}


	void OnRep_NewColorRed();
	void UserConstructionScript();
	void RotateLight__FinishedFunc();
	void RotateLight__UpdateFunc();
	void HandleMissionEvent_RocketHasBluglo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void spin();
	void spinlightonclients();
	void OnMatchStarted();
	void ExecuteUbergraph_BP_WarningLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
