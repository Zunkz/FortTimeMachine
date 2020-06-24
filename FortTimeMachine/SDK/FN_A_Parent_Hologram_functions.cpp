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

// Function A_Parent_Hologram.A_Parent_Hologram_C.InteractionHint
// (Public, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::InteractionHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.InteractionHint");

	AA_Parent_Hologram_C_InteractionHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.InitialRotationSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::InitialRotationSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.InitialRotationSet");

	AA_Parent_Hologram_C_InitialRotationSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.TextureSet
// (Public, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::TextureSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.TextureSet");

	AA_Parent_Hologram_C_TextureSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.PlayAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.PlayAudio");

	AA_Parent_Hologram_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.LightSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::LightSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.LightSet");

	AA_Parent_Hologram_C_LightSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.IsActive
// (Public, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.IsActive");

	AA_Parent_Hologram_C_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.WobbleShader
// (Public, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::WobbleShader()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.WobbleShader");

	AA_Parent_Hologram_C_WobbleShader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.OnRep_WarmupActive
// (BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::OnRep_WarmupActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.OnRep_WarmupActive");

	AA_Parent_Hologram_C_OnRep_WarmupActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AA_Parent_Hologram_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.BlueprintGetInteractionString");

	AA_Parent_Hologram_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.ParticleSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::ParticleSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.ParticleSet");

	AA_Parent_Hologram_C_ParticleSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AA_Parent_Hologram_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.BlueprintCanInteract");

	AA_Parent_Hologram_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.SetHologramMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::SetHologramMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.SetHologramMaterial");

	AA_Parent_Hologram_C_SetHologramMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.SkeletalMeshSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::SkeletalMeshSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.SkeletalMeshSet");

	AA_Parent_Hologram_C_SkeletalMeshSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.StaticMeshSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::StaticMeshSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.StaticMeshSet");

	AA_Parent_Hologram_C_StaticMeshSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.OnRep_bMeshCollision
// (BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::OnRep_bMeshCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.OnRep_bMeshCollision");

	AA_Parent_Hologram_C_OnRep_bMeshCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.UserConstructionScript");

	AA_Parent_Hologram_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.RotateSM__FinishedFunc
// (BlueprintEvent)

void AA_Parent_Hologram_C::RotateSM__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.RotateSM__FinishedFunc");

	AA_Parent_Hologram_C_RotateSM__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.RotateSM__UpdateFunc
// (BlueprintEvent)

void AA_Parent_Hologram_C::RotateSM__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.RotateSM__UpdateFunc");

	AA_Parent_Hologram_C_RotateSM__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.RotateSK__FinishedFunc
// (BlueprintEvent)

void AA_Parent_Hologram_C::RotateSK__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.RotateSK__FinishedFunc");

	AA_Parent_Hologram_C_RotateSK__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.RotateSK__UpdateFunc
// (BlueprintEvent)

void AA_Parent_Hologram_C::RotateSK__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.RotateSK__UpdateFunc");

	AA_Parent_Hologram_C_RotateSK__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.wobble__FinishedFunc
// (BlueprintEvent)

void AA_Parent_Hologram_C::wobble__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.wobble__FinishedFunc");

	AA_Parent_Hologram_C_wobble__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.wobble__UpdateFunc
// (BlueprintEvent)

void AA_Parent_Hologram_C::wobble__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.wobble__UpdateFunc");

	AA_Parent_Hologram_C_wobble__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AA_Parent_Hologram_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.Timeline_0__FinishedFunc");

	AA_Parent_Hologram_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AA_Parent_Hologram_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.Timeline_0__UpdateFunc");

	AA_Parent_Hologram_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AA_Parent_Hologram_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.ReceiveBeginPlay");

	AA_Parent_Hologram_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AA_Parent_Hologram_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.BlueprintOnInteract");

	AA_Parent_Hologram_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.Rotation
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.Rotation");

	AA_Parent_Hologram_C_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.StopAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::StopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.StopAudio");

	AA_Parent_Hologram_C_StopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.ActivateAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::ActivateAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.ActivateAudio");

	AA_Parent_Hologram_C_ActivateAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.Used
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::Used()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.Used");

	AA_Parent_Hologram_C_Used_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.StartWobble
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::StartWobble()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.StartWobble");

	AA_Parent_Hologram_C_StartWobble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.EndWobble
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::EndWobble()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.EndWobble");

	AA_Parent_Hologram_C_EndWobble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.Activated
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.Activated");

	AA_Parent_Hologram_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.InteractionHintOn
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AA_Parent_Hologram_C::InteractionHintOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.InteractionHintOn");

	AA_Parent_Hologram_C_InteractionHintOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Parent_Hologram.A_Parent_Hologram_C.ExecuteUbergraph_A_Parent_Hologram
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AA_Parent_Hologram_C::ExecuteUbergraph_A_Parent_Hologram(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Parent_Hologram.A_Parent_Hologram_C.ExecuteUbergraph_A_Parent_Hologram");

	AA_Parent_Hologram_C_ExecuteUbergraph_A_Parent_Hologram_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
