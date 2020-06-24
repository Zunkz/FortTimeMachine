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

// Function WeaponReloadService.WeaponReloadService_C.HasFewAmmoLeftInMagazine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             WeaponUsed                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanReload                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponReloadService_C::HasFewAmmoLeftInMagazine(class AFortWeapon* WeaponUsed, bool* bCanReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponReloadService.WeaponReloadService_C.HasFewAmmoLeftInMagazine");

	UWeaponReloadService_C_HasFewAmmoLeftInMagazine_Params params;
	params.WeaponUsed = WeaponUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanReload != nullptr)
		*bCanReload = params.bCanReload;
}


// Function WeaponReloadService.WeaponReloadService_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponReloadService_C::ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponReloadService.WeaponReloadService_C.ReceiveActivationAI");

	UWeaponReloadService_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponReloadService.WeaponReloadService_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponReloadService_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponReloadService.WeaponReloadService_C.ReceiveTick");

	UWeaponReloadService_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponReloadService.WeaponReloadService_C.ExecuteUbergraph_WeaponReloadService
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponReloadService_C::ExecuteUbergraph_WeaponReloadService(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponReloadService.WeaponReloadService_C.ExecuteUbergraph_WeaponReloadService");

	UWeaponReloadService_C_ExecuteUbergraph_WeaponReloadService_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
