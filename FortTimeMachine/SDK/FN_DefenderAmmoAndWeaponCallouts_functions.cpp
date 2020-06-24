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

// Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderAmmoAndWeaponCallouts_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ReceiveTick");

	UDefenderAmmoAndWeaponCallouts_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderAmmoAndWeaponCallouts_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ReceiveActivation");

	UDefenderAmmoAndWeaponCallouts_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderAmmoAndWeaponCallouts_C::ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ReceiveDeactivationAI");

	UDefenderAmmoAndWeaponCallouts_C_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ExecuteUbergraph_DefenderAmmoAndWeaponCallouts
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDefenderAmmoAndWeaponCallouts_C::ExecuteUbergraph_DefenderAmmoAndWeaponCallouts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderAmmoAndWeaponCallouts.DefenderAmmoAndWeaponCallouts_C.ExecuteUbergraph_DefenderAmmoAndWeaponCallouts");

	UDefenderAmmoAndWeaponCallouts_C_ExecuteUbergraph_DefenderAmmoAndWeaponCallouts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
