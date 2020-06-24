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

// Function BP_WarningLight.BP_WarningLight_C.OnRep_NewColorRed
// (BlueprintCallable, BlueprintEvent)

void ABP_WarningLight_C::OnRep_NewColorRed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningLight.BP_WarningLight_C.OnRep_NewColorRed");

	ABP_WarningLight_C_OnRep_NewColorRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarningLight.BP_WarningLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WarningLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningLight.BP_WarningLight_C.UserConstructionScript");

	ABP_WarningLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarningLight.BP_WarningLight_C.RotateLight__FinishedFunc
// (BlueprintEvent)

void ABP_WarningLight_C::RotateLight__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningLight.BP_WarningLight_C.RotateLight__FinishedFunc");

	ABP_WarningLight_C_RotateLight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarningLight.BP_WarningLight_C.RotateLight__UpdateFunc
// (BlueprintEvent)

void ABP_WarningLight_C::RotateLight__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningLight.BP_WarningLight_C.RotateLight__UpdateFunc");

	ABP_WarningLight_C_RotateLight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarningLight.BP_WarningLight_C.HandleMissionEvent_RocketHasBluglo
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

void ABP_WarningLight_C::HandleMissionEvent_RocketHasBluglo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningLight.BP_WarningLight_C.HandleMissionEvent_RocketHasBluglo");

	ABP_WarningLight_C_HandleMissionEvent_RocketHasBluglo_Params params;
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


// Function BP_WarningLight.BP_WarningLight_C.spin
// (BlueprintCallable, BlueprintEvent)

void ABP_WarningLight_C::spin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningLight.BP_WarningLight_C.spin");

	ABP_WarningLight_C_spin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarningLight.BP_WarningLight_C.spinlightonclients
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_WarningLight_C::spinlightonclients()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningLight.BP_WarningLight_C.spinlightonclients");

	ABP_WarningLight_C_spinlightonclients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarningLight.BP_WarningLight_C.OnMatchStarted
// (Event, Public, BlueprintEvent)

void ABP_WarningLight_C::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningLight.BP_WarningLight_C.OnMatchStarted");

	ABP_WarningLight_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarningLight.BP_WarningLight_C.ExecuteUbergraph_BP_WarningLight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WarningLight_C::ExecuteUbergraph_BP_WarningLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningLight.BP_WarningLight_C.ExecuteUbergraph_BP_WarningLight");

	ABP_WarningLight_C_ExecuteUbergraph_BP_WarningLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
