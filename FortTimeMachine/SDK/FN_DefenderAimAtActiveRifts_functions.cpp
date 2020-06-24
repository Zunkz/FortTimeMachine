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

// Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderAimAtActiveRifts_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ReceiveTick");

	UDefenderAimAtActiveRifts_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderAimAtActiveRifts_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ReceiveActivation");

	UDefenderAimAtActiveRifts_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderAimAtActiveRifts_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ReceiveDeactivation");

	UDefenderAimAtActiveRifts_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ExecuteUbergraph_DefenderAimAtActiveRifts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderAimAtActiveRifts_C::ExecuteUbergraph_DefenderAimAtActiveRifts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderAimAtActiveRifts.DefenderAimAtActiveRifts_C.ExecuteUbergraph_DefenderAimAtActiveRifts");

	UDefenderAimAtActiveRifts_C_ExecuteUbergraph_DefenderAimAtActiveRifts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
