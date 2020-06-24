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

// Function AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InRange                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutTile                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_ConvertRangeToTiles(float InRange, class UObject* __WorldContext, float* OutTile)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles");

	UAbilityFunctions_C_ConvertRangeToTiles_Params params;
	params.InRange = InRange;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTile != nullptr)
		*OutTile = params.OutTile;
}


// Function AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// TArray<class AActor*>          ArrayToSet                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_SetArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class AActor*>* ArrayToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors");

	UAbilityFunctions_C_SetArrayOfHitActors_Params params;
	params.TargetData = TargetData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrayToSet != nullptr)
		*ArrayToSet = params.ArrayToSet;
}


// Function AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          HitActors                      (Parm, OutParm, ZeroConstructor)

void UAbilityFunctions_C::STATIC_DoNOTUse_BuildArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class AActor*>* HitActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors");

	UAbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors_Params params;
	params.TargetData = TargetData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitActors != nullptr)
		*HitActors = params.HitActors;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
