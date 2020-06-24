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

// Function BP_AtlasStorm_Child_OffsetEye.BP_AtlasStorm_Child_OffsetEye_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AtlasStorm_Child_OffsetEye_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm_Child_OffsetEye.BP_AtlasStorm_Child_OffsetEye_C.UserConstructionScript");

	ABP_AtlasStorm_Child_OffsetEye_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm_Child_OffsetEye.BP_AtlasStorm_Child_OffsetEye_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AtlasStorm_Child_OffsetEye_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm_Child_OffsetEye.BP_AtlasStorm_Child_OffsetEye_C.ReceiveBeginPlay");

	ABP_AtlasStorm_Child_OffsetEye_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AtlasStorm_Child_OffsetEye.BP_AtlasStorm_Child_OffsetEye_C.ExecuteUbergraph_BP_AtlasStorm_Child_OffsetEye
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AtlasStorm_Child_OffsetEye_C::ExecuteUbergraph_BP_AtlasStorm_Child_OffsetEye(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AtlasStorm_Child_OffsetEye.BP_AtlasStorm_Child_OffsetEye_C.ExecuteUbergraph_BP_AtlasStorm_Child_OffsetEye");

	ABP_AtlasStorm_Child_OffsetEye_C_ExecuteUbergraph_BP_AtlasStorm_Child_OffsetEye_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
