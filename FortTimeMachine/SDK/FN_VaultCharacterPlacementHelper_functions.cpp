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

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVaultCharacterPlacementHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript");

	AVaultCharacterPlacementHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVaultCharacterPlacementHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay");

	AVaultCharacterPlacementHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVaultCharacterPlacementHelper_C::ExecuteUbergraph_VaultCharacterPlacementHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper");

	AVaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AVaultCharacterPlacementHelper_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature");

	AVaultCharacterPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
