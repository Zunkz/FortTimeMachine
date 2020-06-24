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

// BlueprintGeneratedClass BP_FirstFightEffects.BP_FirstFightEffects_C
// 0x0010 (0x0398 - 0x0388)
class ABP_FirstFightEffects_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FirstFightEffects.BP_FirstFightEffects_C");
		return ptr;
	}


	void UserConstructionScript();
	void HandleMissionEvent_Cine_Ramirez_Complete(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void playfx();
	void ExecuteUbergraph_BP_FirstFightEffects(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
