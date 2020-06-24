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

// Function BP_AtlasStorm.BP_AtlasStorm_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AtlasStorm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm.BP_AtlasStorm_C.UserConstructionScript");

	ABP_AtlasStorm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm.BP_AtlasStorm_C.ErodeCloudsTL__FinishedFunc
// (BlueprintEvent)

void ABP_AtlasStorm_C::ErodeCloudsTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm.BP_AtlasStorm_C.ErodeCloudsTL__FinishedFunc");

	ABP_AtlasStorm_C_ErodeCloudsTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm.BP_AtlasStorm_C.ErodeCloudsTL__UpdateFunc
// (BlueprintEvent)

void ABP_AtlasStorm_C::ErodeCloudsTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm.BP_AtlasStorm_C.ErodeCloudsTL__UpdateFunc");

	ABP_AtlasStorm_C_ErodeCloudsTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm.BP_AtlasStorm_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_AtlasStorm_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm.BP_AtlasStorm_C.Timeline_0__FinishedFunc");

	ABP_AtlasStorm_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm.BP_AtlasStorm_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_AtlasStorm_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm.BP_AtlasStorm_C.Timeline_0__UpdateFunc");

	ABP_AtlasStorm_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm.BP_AtlasStorm_C.EventLaserFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LaserPositionWS                (Parm, IsPlainOldData)

void ABP_AtlasStorm_C::EventLaserFired(const struct FVector& LaserPositionWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm.BP_AtlasStorm_C.EventLaserFired");

	ABP_AtlasStorm_C_EventLaserFired_Params params;
	params.LaserPositionWS = LaserPositionWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm.BP_AtlasStorm_C.OutpostCore
// (BlueprintCallable, BlueprintEvent)

void ABP_AtlasStorm_C::OutpostCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm.BP_AtlasStorm_C.OutpostCore");

	ABP_AtlasStorm_C_OutpostCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm.BP_AtlasStorm_C.GetRandomThunderLoc
// (BlueprintCallable, BlueprintEvent)

void ABP_AtlasStorm_C::GetRandomThunderLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm.BP_AtlasStorm_C.GetRandomThunderLoc");

	ABP_AtlasStorm_C_GetRandomThunderLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm.BP_AtlasStorm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AtlasStorm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm.BP_AtlasStorm_C.ReceiveBeginPlay");

	ABP_AtlasStorm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm.BP_AtlasStorm_C.ExecuteUbergraph_BP_AtlasStorm
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AtlasStorm_C::ExecuteUbergraph_BP_AtlasStorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm.BP_AtlasStorm_C.ExecuteUbergraph_BP_AtlasStorm");

	ABP_AtlasStorm_C_ExecuteUbergraph_BP_AtlasStorm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
