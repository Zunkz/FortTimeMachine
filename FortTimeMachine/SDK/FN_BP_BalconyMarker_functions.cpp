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

// Function BP_BalconyMarker.BP_BalconyMarker_C.OnRep_Minimapdistance
// (BlueprintCallable, BlueprintEvent)

void ABP_BalconyMarker_C::OnRep_Minimapdistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BalconyMarker.BP_BalconyMarker_C.OnRep_Minimapdistance");

	ABP_BalconyMarker_C_OnRep_Minimapdistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BalconyMarker.BP_BalconyMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BalconyMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BalconyMarker.BP_BalconyMarker_C.UserConstructionScript");

	ABP_BalconyMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BalconyMarker.BP_BalconyMarker_C.HandleMissionEvent_RocketHasBluglo
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

void ABP_BalconyMarker_C::HandleMissionEvent_RocketHasBluglo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BalconyMarker.BP_BalconyMarker_C.HandleMissionEvent_RocketHasBluglo");

	ABP_BalconyMarker_C_HandleMissionEvent_RocketHasBluglo_Params params;
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


// Function BP_BalconyMarker.BP_BalconyMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BalconyMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BalconyMarker.BP_BalconyMarker_C.ReceiveBeginPlay");

	ABP_BalconyMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BalconyMarker.BP_BalconyMarker_C.ShowMinimapMarker
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_BalconyMarker_C::ShowMinimapMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BalconyMarker.BP_BalconyMarker_C.ShowMinimapMarker");

	ABP_BalconyMarker_C_ShowMinimapMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BalconyMarker.BP_BalconyMarker_C.HideMinimapMarker
// (BlueprintCallable, BlueprintEvent)

void ABP_BalconyMarker_C::HideMinimapMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BalconyMarker.BP_BalconyMarker_C.HideMinimapMarker");

	ABP_BalconyMarker_C_HideMinimapMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BalconyMarker.BP_BalconyMarker_C.HandleMissionEvent_ShowMinimapObjective
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

void ABP_BalconyMarker_C::HandleMissionEvent_ShowMinimapObjective(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BalconyMarker.BP_BalconyMarker_C.HandleMissionEvent_ShowMinimapObjective");

	ABP_BalconyMarker_C_HandleMissionEvent_ShowMinimapObjective_Params params;
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


// Function BP_BalconyMarker.BP_BalconyMarker_C.HandleMissionEvent_PlayerAtFort
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

void ABP_BalconyMarker_C::HandleMissionEvent_PlayerAtFort(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BalconyMarker.BP_BalconyMarker_C.HandleMissionEvent_PlayerAtFort");

	ABP_BalconyMarker_C_HandleMissionEvent_PlayerAtFort_Params params;
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


// Function BP_BalconyMarker.BP_BalconyMarker_C.ExecuteUbergraph_BP_BalconyMarker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BalconyMarker_C::ExecuteUbergraph_BP_BalconyMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BalconyMarker.BP_BalconyMarker_C.ExecuteUbergraph_BP_BalconyMarker");

	ABP_BalconyMarker_C_ExecuteUbergraph_BP_BalconyMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
