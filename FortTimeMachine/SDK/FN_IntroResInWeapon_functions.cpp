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

// Function IntroResInWeapon.IntroResInWeapon_C.Get Grip Position And Radius From Grip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Original_Skeletal_Mesh         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            GripPositionAndRadiusFromTheGrip (Parm, OutParm, IsPlainOldData)

void AIntroResInWeapon_C::Get_Grip_Position_And_Radius_From_Grip(class USkeletalMeshComponent* Original_Skeletal_Mesh, struct FLinearColor* GripPositionAndRadiusFromTheGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.Get Grip Position And Radius From Grip");

	AIntroResInWeapon_C_Get_Grip_Position_And_Radius_From_Grip_Params params;
	params.Original_Skeletal_Mesh = Original_Skeletal_Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripPositionAndRadiusFromTheGrip != nullptr)
		*GripPositionAndRadiusFromTheGrip = params.GripPositionAndRadiusFromTheGrip;
}


// Function IntroResInWeapon.IntroResInWeapon_C.UpdateMaterialInstanceProperties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ConstructionScript             (Parm, ZeroConstructor, IsPlainOldData)

void AIntroResInWeapon_C::UpdateMaterialInstanceProperties(bool ConstructionScript)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.UpdateMaterialInstanceProperties");

	AIntroResInWeapon_C_UpdateMaterialInstanceProperties_Params params;
	params.ConstructionScript = ConstructionScript;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroResInWeapon.IntroResInWeapon_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIntroResInWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.UserConstructionScript");

	AIntroResInWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroResInWeapon.IntroResInWeapon_C.CharacterSpawnInTimeline__FinishedFunc
// (BlueprintEvent)

void AIntroResInWeapon_C::CharacterSpawnInTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.CharacterSpawnInTimeline__FinishedFunc");

	AIntroResInWeapon_C_CharacterSpawnInTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroResInWeapon.IntroResInWeapon_C.CharacterSpawnInTimeline__UpdateFunc
// (BlueprintEvent)

void AIntroResInWeapon_C::CharacterSpawnInTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.CharacterSpawnInTimeline__UpdateFunc");

	AIntroResInWeapon_C_CharacterSpawnInTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroResInWeapon.IntroResInWeapon_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AIntroResInWeapon_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.Timeline_0__FinishedFunc");

	AIntroResInWeapon_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroResInWeapon.IntroResInWeapon_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AIntroResInWeapon_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.Timeline_0__UpdateFunc");

	AIntroResInWeapon_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroResInWeapon.IntroResInWeapon_C.Stop Particles
// (BlueprintCallable, BlueprintEvent)

void AIntroResInWeapon_C::Stop_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.Stop Particles");

	AIntroResInWeapon_C_Stop_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroResInWeapon.IntroResInWeapon_C.StartParticles
// (BlueprintCallable, BlueprintEvent)

void AIntroResInWeapon_C::StartParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.StartParticles");

	AIntroResInWeapon_C_StartParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroResInWeapon.IntroResInWeapon_C.BeginWeaponAnimation
// (BlueprintCallable, BlueprintEvent)

void AIntroResInWeapon_C::BeginWeaponAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.BeginWeaponAnimation");

	AIntroResInWeapon_C_BeginWeaponAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroResInWeapon.IntroResInWeapon_C.ExecuteUbergraph_IntroResInWeapon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIntroResInWeapon_C::ExecuteUbergraph_IntroResInWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroResInWeapon.IntroResInWeapon_C.ExecuteUbergraph_IntroResInWeapon");

	AIntroResInWeapon_C_ExecuteUbergraph_IntroResInWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
