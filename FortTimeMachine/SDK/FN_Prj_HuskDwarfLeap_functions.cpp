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

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ImpactOnHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)

void APrj_HuskDwarfLeap_C::ImpactOnHit(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ImpactOnHit");

	APrj_HuskDwarfLeap_C_ImpactOnHit_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrj_HuskDwarfLeap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.UserConstructionScript");

	APrj_HuskDwarfLeap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.OnShot
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APrj_HuskDwarfLeap_C::OnShot(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.OnShot");

	APrj_HuskDwarfLeap_C_OnShot_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APrj_HuskDwarfLeap_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ReceiveHit");

	APrj_HuskDwarfLeap_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ExecuteUbergraph_Prj_HuskDwarfLeap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrj_HuskDwarfLeap_C::ExecuteUbergraph_Prj_HuskDwarfLeap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ExecuteUbergraph_Prj_HuskDwarfLeap");

	APrj_HuskDwarfLeap_C_ExecuteUbergraph_Prj_HuskDwarfLeap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
