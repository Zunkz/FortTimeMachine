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

// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVaultCamera_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.UserConstructionScript");

	AVaultCamera_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AVaultCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8");

	AVaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AVaultCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7");

	AVaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AVaultCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6");

	AVaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AVaultCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5");

	AVaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AVaultCamera_Blueprint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ReceiveTick");

	AVaultCamera_Blueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)

void AVaultCamera_Blueprint_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnActivated");

	AVaultCamera_Blueprint_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AVaultCamera_Blueprint_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnDeactivated");

	AVaultCamera_Blueprint_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVaultCamera_Blueprint_C::ExecuteUbergraph_VaultCamera_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint");

	AVaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
