// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Boards_Ceiling.BP_Boards_Ceiling_C.OnRep_Allowtobedamaged
// (BlueprintCallable, BlueprintEvent)

void ABP_Boards_Ceiling_C::OnRep_Allowtobedamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boards_Ceiling.BP_Boards_Ceiling_C.OnRep_Allowtobedamaged");

	ABP_Boards_Ceiling_C_OnRep_Allowtobedamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boards_Ceiling.BP_Boards_Ceiling_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Boards_Ceiling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boards_Ceiling.BP_Boards_Ceiling_C.UserConstructionScript");

	ABP_Boards_Ceiling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boards_Ceiling.BP_Boards_Ceiling_C.HandleMissionEvent_PlayerEscapedPit
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_Boards_Ceiling_C::HandleMissionEvent_PlayerEscapedPit(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boards_Ceiling.BP_Boards_Ceiling_C.HandleMissionEvent_PlayerEscapedPit");

	ABP_Boards_Ceiling_C_HandleMissionEvent_PlayerEscapedPit_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boards_Ceiling.BP_Boards_Ceiling_C.ExecuteUbergraph_BP_Boards_Ceiling
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boards_Ceiling_C::ExecuteUbergraph_BP_Boards_Ceiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boards_Ceiling.BP_Boards_Ceiling_C.ExecuteUbergraph_BP_Boards_Ceiling");

	ABP_Boards_Ceiling_C_ExecuteUbergraph_BP_Boards_Ceiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
