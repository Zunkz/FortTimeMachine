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

// Function TODM_A_Child_Onboarding.TODM_A_Child_Onboarding_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATODM_A_Child_Onboarding_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TODM_A_Child_Onboarding.TODM_A_Child_Onboarding_C.UserConstructionScript");

	ATODM_A_Child_Onboarding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A_Child_Onboarding.TODM_A_Child_Onboarding_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATODM_A_Child_Onboarding_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TODM_A_Child_Onboarding.TODM_A_Child_Onboarding_C.ReceiveBeginPlay");

	ATODM_A_Child_Onboarding_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_A_Child_Onboarding.TODM_A_Child_Onboarding_C.ExecuteUbergraph_TODM_A_Child_Onboarding
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATODM_A_Child_Onboarding_C::ExecuteUbergraph_TODM_A_Child_Onboarding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TODM_A_Child_Onboarding.TODM_A_Child_Onboarding_C.ExecuteUbergraph_TODM_A_Child_Onboarding");

	ATODM_A_Child_Onboarding_C_ExecuteUbergraph_TODM_A_Child_Onboarding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
