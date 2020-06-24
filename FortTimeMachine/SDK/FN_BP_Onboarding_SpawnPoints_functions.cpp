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

// Function BP_Onboarding_SpawnPoints.BP_Onboarding_SpawnPoints_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Onboarding_SpawnPoints_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Onboarding_SpawnPoints.BP_Onboarding_SpawnPoints_C.UserConstructionScript");

	ABP_Onboarding_SpawnPoints_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
