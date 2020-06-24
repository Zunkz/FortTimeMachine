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

// Function Gnome01.Gnome01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGnome01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gnome01.Gnome01_C.UserConstructionScript");

	AGnome01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gnome01.Gnome01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGnome01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gnome01.Gnome01_C.ReceiveBeginPlay");

	AGnome01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gnome01.Gnome01_C.ExecuteUbergraph_Gnome01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGnome01_C::ExecuteUbergraph_Gnome01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gnome01.Gnome01_C.ExecuteUbergraph_Gnome01");

	AGnome01_C_ExecuteUbergraph_Gnome01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
