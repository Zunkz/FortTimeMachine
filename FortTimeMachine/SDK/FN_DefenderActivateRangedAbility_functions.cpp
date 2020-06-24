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

// Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.HasAvailableAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           HasAvailableAmmo               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDefenderActivateRangedAbility_C::HasAvailableAmmo(bool* HasAvailableAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.HasAvailableAmmo");

	UDefenderActivateRangedAbility_C_HasAvailableAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAvailableAmmo != nullptr)
		*HasAvailableAmmo = params.HasAvailableAmmo;
}


// Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderActivateRangedAbility_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ReceiveDeactivation");

	UDefenderActivateRangedAbility_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderActivateRangedAbility_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ReceiveTick");

	UDefenderActivateRangedAbility_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderActivateRangedAbility_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ReceiveActivation");

	UDefenderActivateRangedAbility_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ExecuteUbergraph_DefenderActivateRangedAbility
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderActivateRangedAbility_C::ExecuteUbergraph_DefenderActivateRangedAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderActivateRangedAbility.DefenderActivateRangedAbility_C.ExecuteUbergraph_DefenderActivateRangedAbility");

	UDefenderActivateRangedAbility_C_ExecuteUbergraph_DefenderActivateRangedAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
