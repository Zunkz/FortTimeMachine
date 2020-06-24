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

// Function BP_ControlTerminal.BP_ControlTerminal_C.OnRep_InteractEffects
// (BlueprintCallable, BlueprintEvent)

void ABP_ControlTerminal_C::OnRep_InteractEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.OnRep_InteractEffects");

	ABP_ControlTerminal_C_OnRep_InteractEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_ControlTerminal_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.BlueprintGetInteractionString");

	ABP_ControlTerminal_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ControlTerminal_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.BlueprintCanInteract");

	ABP_ControlTerminal_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ControlTerminal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.UserConstructionScript");

	ABP_ControlTerminal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.Rotate__FinishedFunc
// (BlueprintEvent)

void ABP_ControlTerminal_C::Rotate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.Rotate__FinishedFunc");

	ABP_ControlTerminal_C_Rotate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.Rotate__UpdateFunc
// (BlueprintEvent)

void ABP_ControlTerminal_C::Rotate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.Rotate__UpdateFunc");

	ABP_ControlTerminal_C_Rotate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_ControlTerminal_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.Timeline_0__FinishedFunc");

	ABP_ControlTerminal_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_ControlTerminal_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.Timeline_0__UpdateFunc");

	ABP_ControlTerminal_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_OBJ_8_Activate
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

void ABP_ControlTerminal_C::HandleMissionEvent_OBJ_8_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_OBJ_8_Activate");

	ABP_ControlTerminal_C_HandleMissionEvent_OBJ_8_Activate_Params params;
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


// Function BP_ControlTerminal.BP_ControlTerminal_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControlTerminal_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.BlueprintOnInteract");

	ABP_ControlTerminal_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.loopsound
// (BlueprintCallable, BlueprintEvent)

void ABP_ControlTerminal_C::loopsound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.loopsound");

	ABP_ControlTerminal_C_loopsound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.PlayAlarm
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ControlTerminal_C::PlayAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.PlayAlarm");

	ABP_ControlTerminal_C_PlayAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_OBJ_10_Activate
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

void ABP_ControlTerminal_C::HandleMissionEvent_OBJ_10_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_OBJ_10_Activate");

	ABP_ControlTerminal_C_HandleMissionEvent_OBJ_10_Activate_Params params;
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


// Function BP_ControlTerminal.BP_ControlTerminal_C.PlayStartupSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ControlTerminal_C::PlayStartupSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.PlayStartupSound");

	ABP_ControlTerminal_C_PlayStartupSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.PlayAttentionSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ControlTerminal_C::PlayAttentionSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.PlayAttentionSound");

	ABP_ControlTerminal_C_PlayAttentionSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.OnMatchStarted
// (Event, Public, BlueprintEvent)

void ABP_ControlTerminal_C::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.OnMatchStarted");

	ABP_ControlTerminal_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_RocketHasBluglo
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

void ABP_ControlTerminal_C::HandleMissionEvent_RocketHasBluglo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_RocketHasBluglo");

	ABP_ControlTerminal_C_HandleMissionEvent_RocketHasBluglo_Params params;
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


// Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_OBJ_22_Activate
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

void ABP_ControlTerminal_C::HandleMissionEvent_OBJ_22_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_OBJ_22_Activate");

	ABP_ControlTerminal_C_HandleMissionEvent_OBJ_22_Activate_Params params;
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


// Function BP_ControlTerminal.BP_ControlTerminal_C.BlugloSpin
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ControlTerminal_C::BlugloSpin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.BlugloSpin");

	ABP_ControlTerminal_C_BlugloSpin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_PlayerInsideFort
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

void ABP_ControlTerminal_C::HandleMissionEvent_PlayerInsideFort(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.HandleMissionEvent_PlayerInsideFort");

	ABP_ControlTerminal_C_HandleMissionEvent_PlayerInsideFort_Params params;
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


// Function BP_ControlTerminal.BP_ControlTerminal_C.LerpMonitors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewCol                         (Parm, IsPlainOldData)
// float                          RotateSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BarProgress                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          MonitorOn                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            BackgroundCol                  (Parm, IsPlainOldData)
// struct FLinearColor            OutlineCol                     (Parm, IsPlainOldData)
// struct FLinearColor            BarCol                         (Parm, IsPlainOldData)

void ABP_ControlTerminal_C::LerpMonitors(const struct FLinearColor& NewCol, float RotateSpeed, float BarProgress, float MonitorOn, const struct FLinearColor& BackgroundCol, const struct FLinearColor& OutlineCol, const struct FLinearColor& BarCol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.LerpMonitors");

	ABP_ControlTerminal_C_LerpMonitors_Params params;
	params.NewCol = NewCol;
	params.RotateSpeed = RotateSpeed;
	params.BarProgress = BarProgress;
	params.MonitorOn = MonitorOn;
	params.BackgroundCol = BackgroundCol;
	params.OutlineCol = OutlineCol;
	params.BarCol = BarCol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.SetMonitorStage1
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ControlTerminal_C::SetMonitorStage1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.SetMonitorStage1");

	ABP_ControlTerminal_C_SetMonitorStage1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.SetMonitorStage2
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ControlTerminal_C::SetMonitorStage2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.SetMonitorStage2");

	ABP_ControlTerminal_C_SetMonitorStage2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlTerminal.BP_ControlTerminal_C.ExecuteUbergraph_BP_ControlTerminal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControlTerminal_C::ExecuteUbergraph_BP_ControlTerminal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlTerminal.BP_ControlTerminal_C.ExecuteUbergraph_BP_ControlTerminal");

	ABP_ControlTerminal_C_ExecuteUbergraph_BP_ControlTerminal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
