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

// BlueprintGeneratedClass Onboarding_Sign.Onboarding_Sign_C
// 0x0009 (0x0FD9 - 0x0FD0)
class AOnboarding_Sign_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	bool                                               Glow;                                                     // 0x0FD8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Onboarding_Sign.Onboarding_Sign_C");
		return ptr;
	}


	void OnRep_Glow();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleMissionEvent_OBJ_8_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ExecuteUbergraph_Onboarding_Sign(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
