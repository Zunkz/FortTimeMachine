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

// Function BP_LightningController.BP_LightningController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LightningController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.UserConstructionScript");

	ABP_LightningController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningController.BP_LightningController_C.HandleMissionEvent_PlayerAtBalcony
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

void ABP_LightningController_C::HandleMissionEvent_PlayerAtBalcony(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.HandleMissionEvent_PlayerAtBalcony");

	ABP_LightningController_C_HandleMissionEvent_PlayerAtBalcony_Params params;
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


// Function BP_LightningController.BP_LightningController_C.Lightning
// (BlueprintCallable, BlueprintEvent)

void ABP_LightningController_C::Lightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.Lightning");

	ABP_LightningController_C_Lightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningController.BP_LightningController_C.startlightning
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_LightningController_C::startlightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.startlightning");

	ABP_LightningController_C_startlightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningController.BP_LightningController_C.HandleMissionEvent_StopLightning
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

void ABP_LightningController_C::HandleMissionEvent_StopLightning(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.HandleMissionEvent_StopLightning");

	ABP_LightningController_C_HandleMissionEvent_StopLightning_Params params;
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


// Function BP_LightningController.BP_LightningController_C.HandleMissionEvent_RocketPreLaunchActivate
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

void ABP_LightningController_C::HandleMissionEvent_RocketPreLaunchActivate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.HandleMissionEvent_RocketPreLaunchActivate");

	ABP_LightningController_C_HandleMissionEvent_RocketPreLaunchActivate_Params params;
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


// Function BP_LightningController.BP_LightningController_C.GateLightning
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_LightningController_C::GateLightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.GateLightning");

	ABP_LightningController_C_GateLightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningController.BP_LightningController_C.HandleMissionEvent_PlayerApproachingFort
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

void ABP_LightningController_C::HandleMissionEvent_PlayerApproachingFort(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.HandleMissionEvent_PlayerApproachingFort");

	ABP_LightningController_C_HandleMissionEvent_PlayerApproachingFort_Params params;
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


// Function BP_LightningController.BP_LightningController_C.HandleMissionEvent_ShowMinimapObjective
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

void ABP_LightningController_C::HandleMissionEvent_ShowMinimapObjective(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.HandleMissionEvent_ShowMinimapObjective");

	ABP_LightningController_C_HandleMissionEvent_ShowMinimapObjective_Params params;
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


// Function BP_LightningController.BP_LightningController_C.stoplighting
// (BlueprintCallable, BlueprintEvent)

void ABP_LightningController_C::stoplighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.stoplighting");

	ABP_LightningController_C_stoplighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningController.BP_LightningController_C.ExecuteUbergraph_BP_LightningController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightningController_C::ExecuteUbergraph_BP_LightningController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningController.BP_LightningController_C.ExecuteUbergraph_BP_LightningController");

	ABP_LightningController_C_ExecuteUbergraph_BP_LightningController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
