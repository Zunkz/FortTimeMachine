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

// Function B_BGA_OB_SentryGun.B_BGA_OB_SentryGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_OB_SentryGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_OB_SentryGun.B_BGA_OB_SentryGun_C.UserConstructionScript");

	AB_BGA_OB_SentryGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_OB_SentryGun.B_BGA_OB_SentryGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_BGA_OB_SentryGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_OB_SentryGun.B_BGA_OB_SentryGun_C.ReceiveBeginPlay");

	AB_BGA_OB_SentryGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_OB_SentryGun.B_BGA_OB_SentryGun_C.ExecuteUbergraph_B_BGA_OB_SentryGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_OB_SentryGun_C::ExecuteUbergraph_B_BGA_OB_SentryGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_OB_SentryGun.B_BGA_OB_SentryGun_C.ExecuteUbergraph_B_BGA_OB_SentryGun");

	AB_BGA_OB_SentryGun_C_ExecuteUbergraph_B_BGA_OB_SentryGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
