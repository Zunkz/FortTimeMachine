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

// Function Gnome02.Gnome02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGnome02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gnome02.Gnome02_C.UserConstructionScript");

	AGnome02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gnome02.Gnome02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGnome02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gnome02.Gnome02_C.ReceiveBeginPlay");

	AGnome02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gnome02.Gnome02_C.ExecuteUbergraph_Gnome02
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGnome02_C::ExecuteUbergraph_Gnome02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gnome02.Gnome02_C.ExecuteUbergraph_Gnome02");

	AGnome02_C_ExecuteUbergraph_Gnome02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
