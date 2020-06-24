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

// Function WorldBorder_Clouds.WorldBorder_Clouds_C.SetupACornerMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Falloff_Range                  (Parm, ZeroConstructor, IsPlainOldData)

void AWorldBorder_Clouds_C::SetupACornerMaterial(float X, float Y, float Falloff_Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldBorder_Clouds.WorldBorder_Clouds_C.SetupACornerMaterial");

	AWorldBorder_Clouds_C_SetupACornerMaterial_Params params;
	params.X = X;
	params.Y = Y;
	params.Falloff_Range = Falloff_Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorldBorder_Clouds.WorldBorder_Clouds_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWorldBorder_Clouds_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldBorder_Clouds.WorldBorder_Clouds_C.UserConstructionScript");

	AWorldBorder_Clouds_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
