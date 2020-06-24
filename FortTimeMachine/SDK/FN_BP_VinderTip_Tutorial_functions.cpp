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

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.VinderTipFaceClients
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::VinderTipFaceClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.VinderTipFaceClients");

	ABP_VinderTip_Tutorial_C_VinderTipFaceClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.OnRep_HasBeenPlayed
// (BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::OnRep_HasBeenPlayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.OnRep_HasBeenPlayed");

	ABP_VinderTip_Tutorial_C_OnRep_HasBeenPlayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.SetPlayed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasBeenPlayed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VinderTip_Tutorial_C::SetPlayed(bool HasBeenPlayed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.SetPlayed");

	ABP_VinderTip_Tutorial_C_SetPlayed_Params params;
	params.HasBeenPlayed = HasBeenPlayed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.CleanupMovieData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::CleanupMovieData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.CleanupMovieData");

	ABP_VinderTip_Tutorial_C_CleanupMovieData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.OnRep_IsActive
// (BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::OnRep_IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.OnRep_IsActive");

	ABP_VinderTip_Tutorial_C_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.Analytics
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::Analytics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.Analytics");

	ABP_VinderTip_Tutorial_C_Analytics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanPlayerInteract              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VinderTip_Tutorial_C::Interaction(bool CanPlayerInteract)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.Interaction");

	ABP_VinderTip_Tutorial_C_Interaction_Params params;
	params.CanPlayerInteract = CanPlayerInteract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.SetWhichVinderTipToPlay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::SetWhichVinderTipToPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.SetWhichVinderTipToPlay");

	ABP_VinderTip_Tutorial_C_SetWhichVinderTipToPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_VinderTip_Tutorial_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BlueprintGetInteractionString");

	ABP_VinderTip_Tutorial_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_VinderTip_Tutorial_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BlueprintCanInteract");

	ABP_VinderTip_Tutorial_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.UserConstructionScript");

	ABP_VinderTip_Tutorial_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VinderTip_Tutorial_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BlueprintOnInteract");

	ABP_VinderTip_Tutorial_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.PlayVindertipOnClients
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::PlayVindertipOnClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.PlayVindertipOnClients");

	ABP_VinderTip_Tutorial_C_PlayVindertipOnClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.VindertipFinishedPlaying
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::VindertipFinishedPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.VindertipFinishedPlaying");

	ABP_VinderTip_Tutorial_C_VindertipFinishedPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.MovieFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::MovieFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.MovieFinished");

	ABP_VinderTip_Tutorial_C_MovieFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ResetPlayOnce
// (BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::ResetPlayOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ResetPlayOnce");

	ABP_VinderTip_Tutorial_C_ResetPlayOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_78_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_VinderTip_Tutorial_C::BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_78_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_78_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_VinderTip_Tutorial_C_BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_78_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_83_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VinderTip_Tutorial_C::BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_83_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_83_ComponentEndOverlapSignature__DelegateSignature");

	ABP_VinderTip_Tutorial_C_BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_83_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.FadeAudioIn
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::FadeAudioIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.FadeAudioIn");

	ABP_VinderTip_Tutorial_C_FadeAudioIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.FadeAudioOut
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::FadeAudioOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.FadeAudioOut");

	ABP_VinderTip_Tutorial_C_FadeAudioOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.UpdateVinderTipMovie
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::UpdateVinderTipMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.UpdateVinderTipMovie");

	ABP_VinderTip_Tutorial_C_UpdateVinderTipMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ResetVinderTipColor
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::ResetVinderTipColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ResetVinderTipColor");

	ABP_VinderTip_Tutorial_C_ResetVinderTipColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.FaceClients
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::FaceClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.FaceClients");

	ABP_VinderTip_Tutorial_C_FaceClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.Face
// (BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::Face()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.Face");

	ABP_VinderTip_Tutorial_C_Face_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.PauseFaceTimer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::PauseFaceTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.PauseFaceTimer");

	ABP_VinderTip_Tutorial_C_PauseFaceTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ReceiveBeginPlay");

	ABP_VinderTip_Tutorial_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.SpawnInEffects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::SpawnInEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.SpawnInEffects");

	ABP_VinderTip_Tutorial_C_SpawnInEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.PlayVinderTip
// (BlueprintCallable, BlueprintEvent)

void ABP_VinderTip_Tutorial_C::PlayVinderTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.PlayVinderTip");

	ABP_VinderTip_Tutorial_C_PlayVinderTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.VinderTipMediaOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenedUrl                      (Parm, ZeroConstructor)

void ABP_VinderTip_Tutorial_C::VinderTipMediaOpened(const struct FString& OpenedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.VinderTipMediaOpened");

	ABP_VinderTip_Tutorial_C_VinderTipMediaOpened_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ExecuteUbergraph_BP_VinderTip_Tutorial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VinderTip_Tutorial_C::ExecuteUbergraph_BP_VinderTip_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ExecuteUbergraph_BP_VinderTip_Tutorial");

	ABP_VinderTip_Tutorial_C_ExecuteUbergraph_BP_VinderTip_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
