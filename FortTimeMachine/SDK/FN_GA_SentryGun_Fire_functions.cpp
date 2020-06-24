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

// Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.Cancelled_BF3E087449D6A8B1FDC218AB9BEC1982
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGA_SentryGun_Fire_C::Cancelled_BF3E087449D6A8B1FDC218AB9BEC1982(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.Cancelled_BF3E087449D6A8B1FDC218AB9BEC1982");

	UGA_SentryGun_Fire_C_Cancelled_BF3E087449D6A8B1FDC218AB9BEC1982_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.Targeted_BF3E087449D6A8B1FDC218AB9BEC1982
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UGA_SentryGun_Fire_C::Targeted_BF3E087449D6A8B1FDC218AB9BEC1982(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.Targeted_BF3E087449D6A8B1FDC218AB9BEC1982");

	UGA_SentryGun_Fire_C_Targeted_BF3E087449D6A8B1FDC218AB9BEC1982_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_SentryGun_Fire_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.K2_ActivateAbility");

	UGA_SentryGun_Fire_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.ExecuteUbergraph_GA_SentryGun_Fire
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGA_SentryGun_Fire_C::ExecuteUbergraph_GA_SentryGun_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SentryGun_Fire.GA_SentryGun_Fire_C.ExecuteUbergraph_GA_SentryGun_Fire");

	UGA_SentryGun_Fire_C_ExecuteUbergraph_GA_SentryGun_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
