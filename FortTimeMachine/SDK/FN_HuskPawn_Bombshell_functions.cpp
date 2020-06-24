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

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHuskPawn_Bombshell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.UserConstructionScript");

	AHuskPawn_Bombshell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
