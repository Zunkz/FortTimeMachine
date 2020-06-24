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

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_GoinCommandoWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.UserConstructionScript");

	AB_GoinCommandoWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ChargeUp__FinishedFunc
// (BlueprintEvent)

void AB_GoinCommandoWeapon_C::ChargeUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ChargeUp__FinishedFunc");

	AB_GoinCommandoWeapon_C_ChargeUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ChargeUp__UpdateFunc
// (BlueprintEvent)

void AB_GoinCommandoWeapon_C::ChargeUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ChargeUp__UpdateFunc");

	AB_GoinCommandoWeapon_C_ChargeUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.SetUpgradeLevel
// (BlueprintCallable, BlueprintEvent)

void AB_GoinCommandoWeapon_C::SetUpgradeLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.SetUpgradeLevel");

	AB_GoinCommandoWeapon_C_SetUpgradeLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_GoinCommandoWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ReceiveBeginPlay");

	AB_GoinCommandoWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bPersistentFire                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSecondaryFire                 (Parm, ZeroConstructor, IsPlainOldData)

void AB_GoinCommandoWeapon_C::OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayWeaponFireFX");

	AB_GoinCommandoWeapon_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayImpactFX
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>* ImpactPhysicalSurface          (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent** SpawnedPSC                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_GoinCommandoWeapon_C::OnPlayImpactFX(struct FHitResult* HitResult, TEnumAsByte<EPhysicalSurface>* ImpactPhysicalSurface, class UParticleSystemComponent** SpawnedPSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayImpactFX");

	AB_GoinCommandoWeapon_C_OnPlayImpactFX_Params params;
	params.HitResult = HitResult;
	params.ImpactPhysicalSurface = ImpactPhysicalSurface;
	params.SpawnedPSC = SpawnedPSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnChargeUp
// (Event, Protected, BlueprintEvent)

void AB_GoinCommandoWeapon_C::OnChargeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnChargeUp");

	AB_GoinCommandoWeapon_C_OnChargeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnChargeDown
// (Event, Protected, BlueprintEvent)

void AB_GoinCommandoWeapon_C::OnChargeDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnChargeDown");

	AB_GoinCommandoWeapon_C_OnChargeDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification* CosmeticMod                    (Parm)
// class UMaterialInstanceDynamic** DynamicMaterialInstance        (Parm, ZeroConstructor, IsPlainOldData)

void AB_GoinCommandoWeapon_C::OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnInitCosmeticAlterations");

	AB_GoinCommandoWeapon_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;
	params.DynamicMaterialInstance = DynamicMaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ExecuteUbergraph_B_GoinCommandoWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_GoinCommandoWeapon_C::ExecuteUbergraph_B_GoinCommandoWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ExecuteUbergraph_B_GoinCommandoWeapon");

	AB_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
