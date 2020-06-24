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

// Function HACK_PARAMS_NUMBER.HACK_PARAMS_NUMBER_C.BreakParams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumberToPass                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHACK_PARAMS_NUMBER_C::BreakParams(int* NumberToPass)
{
	static auto fn = UObject::FindObject<UFunction>("Function HACK_PARAMS_NUMBER.HACK_PARAMS_NUMBER_C.BreakParams");

	UHACK_PARAMS_NUMBER_C_BreakParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberToPass != nullptr)
		*NumberToPass = params.NumberToPass;
}


// Function HACK_PARAMS_NUMBER.HACK_PARAMS_NUMBER_C.SetParams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberToPass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UHACK_PARAMS_NUMBER_C*   ThisObject                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHACK_PARAMS_NUMBER_C::SetParams(int NumberToPass, class UHACK_PARAMS_NUMBER_C** ThisObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function HACK_PARAMS_NUMBER.HACK_PARAMS_NUMBER_C.SetParams");

	UHACK_PARAMS_NUMBER_C_SetParams_Params params;
	params.NumberToPass = NumberToPass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ThisObject != nullptr)
		*ThisObject = params.ThisObject;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
