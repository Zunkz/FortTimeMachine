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

// Function FrontEndSettingsBP.FrontEndSettingsBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontEndSettingsBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndSettingsBP.FrontEndSettingsBP_C.UserConstructionScript");

	AFrontEndSettingsBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
