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

// Function Onboarding_Sign.Onboarding_Sign_C.OnRep_Glow
// (BlueprintCallable, BlueprintEvent)

void AOnboarding_Sign_C::OnRep_Glow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_Sign.Onboarding_Sign_C.OnRep_Glow");

	AOnboarding_Sign_C_OnRep_Glow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Onboarding_Sign.Onboarding_Sign_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOnboarding_Sign_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_Sign.Onboarding_Sign_C.UserConstructionScript");

	AOnboarding_Sign_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Onboarding_Sign.Onboarding_Sign_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOnboarding_Sign_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_Sign.Onboarding_Sign_C.ReceiveBeginPlay");

	AOnboarding_Sign_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Onboarding_Sign.Onboarding_Sign_C.HandleMissionEvent_OBJ_8_Activate
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

void AOnboarding_Sign_C::HandleMissionEvent_OBJ_8_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_Sign.Onboarding_Sign_C.HandleMissionEvent_OBJ_8_Activate");

	AOnboarding_Sign_C_HandleMissionEvent_OBJ_8_Activate_Params params;
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


// Function Onboarding_Sign.Onboarding_Sign_C.ExecuteUbergraph_Onboarding_Sign
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOnboarding_Sign_C::ExecuteUbergraph_Onboarding_Sign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_Sign.Onboarding_Sign_C.ExecuteUbergraph_Onboarding_Sign");

	AOnboarding_Sign_C_ExecuteUbergraph_Onboarding_Sign_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
