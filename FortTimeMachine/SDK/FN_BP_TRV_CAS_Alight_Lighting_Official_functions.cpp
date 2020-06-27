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

// Function BP_TRV_CAS_Alight_Lighting_Official.BP_TRV_CAS_Alight_Lighting_Official_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TRV_CAS_Alight_Lighting_Official_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TRV_CAS_Alight_Lighting_Official.BP_TRV_CAS_Alight_Lighting_Official_C.UserConstructionScript");

	ABP_TRV_CAS_Alight_Lighting_Official_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
