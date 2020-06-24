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

// Function mToD_SubMix.mToD_SubMix_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.UserConstructionScript");

	AmToD_SubMix_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.Day_Start
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::Day_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.Day_Start");

	AmToD_SubMix_C_Day_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.Evening_Start
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::Evening_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.Evening_Start");

	AmToD_SubMix_C_Evening_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.Night_Start
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::Night_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.Night_Start");

	AmToD_SubMix_C_Night_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.Morning_Start
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::Morning_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.Morning_Start");

	AmToD_SubMix_C_Morning_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_68_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AmToD_SubMix_C::BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_68_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_68_ComponentBeginOverlapSignature__DelegateSignature");

	AmToD_SubMix_C_BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_68_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function mToD_SubMix.mToD_SubMix_C.BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_84_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AmToD_SubMix_C::BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_84_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_84_ComponentEndOverlapSignature__DelegateSignature");

	AmToD_SubMix_C_BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_84_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.PlayCrossfadeAB
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::PlayCrossfadeAB()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.PlayCrossfadeAB");

	AmToD_SubMix_C_PlayCrossfadeAB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.PlayCrossfadeBA
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::PlayCrossfadeBA()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.PlayCrossfadeBA");

	AmToD_SubMix_C_PlayCrossfadeBA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.BndEvt__TriggerRange_K2Node_ComponentBoundEvent_104_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AmToD_SubMix_C::BndEvt__TriggerRange_K2Node_ComponentBoundEvent_104_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.BndEvt__TriggerRange_K2Node_ComponentBoundEvent_104_ComponentBeginOverlapSignature__DelegateSignature");

	AmToD_SubMix_C_BndEvt__TriggerRange_K2Node_ComponentBoundEvent_104_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function mToD_SubMix.mToD_SubMix_C.BndEvt__TriggerRange_K2Node_ComponentBoundEvent_109_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AmToD_SubMix_C::BndEvt__TriggerRange_K2Node_ComponentBoundEvent_109_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.BndEvt__TriggerRange_K2Node_ComponentBoundEvent_109_ComponentEndOverlapSignature__DelegateSignature");

	AmToD_SubMix_C_BndEvt__TriggerRange_K2Node_ComponentBoundEvent_109_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.Update attenuation
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::Update_attenuation()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.Update attenuation");

	AmToD_SubMix_C_Update_attenuation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.PlayRandomSounds
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::PlayRandomSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.PlayRandomSounds");

	AmToD_SubMix_C_PlayRandomSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.StopRandomSounds
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::StopRandomSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.StopRandomSounds");

	AmToD_SubMix_C_StopRandomSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.Entering_subzone
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::Entering_subzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.Entering_subzone");

	AmToD_SubMix_C_Entering_subzone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.Leaving_subzone
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::Leaving_subzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.Leaving_subzone");

	AmToD_SubMix_C_Leaving_subzone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AmToD_SubMix_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.ReceiveBeginPlay");

	AmToD_SubMix_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.DefineTileAmbient
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::DefineTileAmbient()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.DefineTileAmbient");

	AmToD_SubMix_C_DefineTileAmbient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.SubzoneLeaved_RoofsDestroyed
// (BlueprintCallable, BlueprintEvent)

void AmToD_SubMix_C::SubzoneLeaved_RoofsDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.SubzoneLeaved_RoofsDestroyed");

	AmToD_SubMix_C_SubzoneLeaved_RoofsDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mToD_SubMix.mToD_SubMix_C.ExecuteUbergraph_mToD_SubMix
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AmToD_SubMix_C::ExecuteUbergraph_mToD_SubMix(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mToD_SubMix.mToD_SubMix_C.ExecuteUbergraph_mToD_SubMix");

	AmToD_SubMix_C_ExecuteUbergraph_mToD_SubMix_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
