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

// Function ShielderSpringArm.ShielderSpringArm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShielderSpringArm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.UserConstructionScript");

	AShielderSpringArm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AShielderSpringArm_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.ReceiveTick");

	AShielderSpringArm_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShielderSpringArm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.ReceiveBeginPlay");

	AShielderSpringArm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderSpringArm.ShielderSpringArm_C.HitFlashFX
// (BlueprintCallable, BlueprintEvent)

void AShielderSpringArm_C::HitFlashFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.HitFlashFX");

	AShielderSpringArm_C_HitFlashFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderSpringArm.ShielderSpringArm_C.ExecuteUbergraph_ShielderSpringArm
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShielderSpringArm_C::ExecuteUbergraph_ShielderSpringArm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.ExecuteUbergraph_ShielderSpringArm");

	AShielderSpringArm_C_ExecuteUbergraph_ShielderSpringArm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
