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

// Function BP_NavigationMarker.BP_NavigationMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NavigationMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavigationMarker.BP_NavigationMarker_C.UserConstructionScript");

	ABP_NavigationMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavigationMarker.BP_NavigationMarker_C.EnableMarkerForClient
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NavigationMarker_C*  ActorIn                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_NavigationMarker_C::EnableMarkerForClient(class ABP_NavigationMarker_C* ActorIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavigationMarker.BP_NavigationMarker_C.EnableMarkerForClient");

	ABP_NavigationMarker_C_EnableMarkerForClient_Params params;
	params.ActorIn = ActorIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavigationMarker.BP_NavigationMarker_C.DisableMarkerForClient
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NavigationMarker_C*  ActorIn                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_NavigationMarker_C::DisableMarkerForClient(class ABP_NavigationMarker_C* ActorIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavigationMarker.BP_NavigationMarker_C.DisableMarkerForClient");

	ABP_NavigationMarker_C_DisableMarkerForClient_Params params;
	params.ActorIn = ActorIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavigationMarker.BP_NavigationMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NavigationMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavigationMarker.BP_NavigationMarker_C.ReceiveBeginPlay");

	ABP_NavigationMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NavigationMarker.BP_NavigationMarker_C.ExecuteUbergraph_BP_NavigationMarker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_NavigationMarker_C::ExecuteUbergraph_BP_NavigationMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NavigationMarker.BP_NavigationMarker_C.ExecuteUbergraph_BP_NavigationMarker");

	ABP_NavigationMarker_C_ExecuteUbergraph_BP_NavigationMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
