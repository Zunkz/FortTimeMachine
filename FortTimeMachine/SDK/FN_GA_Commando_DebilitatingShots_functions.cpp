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

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (Parm, ZeroConstructor, IsPlainOldData)

void UGA_Commando_DebilitatingShots_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAbility");

	UGA_Commando_DebilitatingShots_C_SetupAbility_Params params;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupDebilitationTraining
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle EffectspecOutInstant           (Parm, OutParm)
// struct FGameplayEffectSpecHandle EffectspecOutDuration          (Parm, OutParm)

void UGA_Commando_DebilitatingShots_C::SetupDebilitationTraining(struct FGameplayEffectSpecHandle* EffectspecOutInstant, struct FGameplayEffectSpecHandle* EffectspecOutDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupDebilitationTraining");

	UGA_Commando_DebilitatingShots_C_SetupDebilitationTraining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectspecOutInstant != nullptr)
		*EffectspecOutInstant = params.EffectspecOutInstant;
	if (EffectspecOutDuration != nullptr)
		*EffectspecOutDuration = params.EffectspecOutDuration;
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAppliedEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Stack_Count                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle EffectSpecHandle               (Parm)
// struct FGameplayEffectSpecHandle EffectspecHandleOut            (Parm, OutParm)

void UGA_Commando_DebilitatingShots_C::SetupAppliedEffect(float Magnitude, float Duration, int Stack_Count, const struct FGameplayEffectSpecHandle& EffectSpecHandle, struct FGameplayEffectSpecHandle* EffectspecHandleOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAppliedEffect");

	UGA_Commando_DebilitatingShots_C_SetupAppliedEffect_Params params;
	params.Magnitude = Magnitude;
	params.Duration = Duration;
	params.Stack_Count = Stack_Count;
	params.EffectSpecHandle = EffectSpecHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectspecHandleOut != nullptr)
		*EffectspecHandleOut = params.EffectspecHandleOut;
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupGameplayEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (Parm)
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 OptionalObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle Target_Data                    (Parm, OutParm)
// class UClass*                  DebilitatingShots              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Effect_Level                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Stack_Count                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Commando_DebilitatingShots_C::SetupGameplayEffect(const struct FGameplayTag& EventTag, class AActor* HitActor, class UObject* OptionalObject, struct FGameplayAbilityTargetDataHandle* Target_Data, class UClass** DebilitatingShots, int* Effect_Level, int* Stack_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupGameplayEffect");

	UGA_Commando_DebilitatingShots_C_SetupGameplayEffect_Params params;
	params.EventTag = EventTag;
	params.HitActor = HitActor;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target_Data != nullptr)
		*Target_Data = params.Target_Data;
	if (DebilitatingShots != nullptr)
		*DebilitatingShots = params.DebilitatingShots;
	if (Effect_Level != nullptr)
		*Effect_Level = params.Effect_Level;
	if (Stack_Count != nullptr)
		*Stack_Count = params.Stack_Count;
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (Parm)
// struct FGameplayEventData*     Payload                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Commando_DebilitatingShots_C::K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayEventData* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ShouldAbilityRespondToEvent");

	UGA_Commando_DebilitatingShots_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_Commando_DebilitatingShots_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ActivateAbilityFromEvent");

	UGA_Commando_DebilitatingShots_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.ExecuteUbergraph_GA_Commando_DebilitatingShots
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGA_Commando_DebilitatingShots_C::ExecuteUbergraph_GA_Commando_DebilitatingShots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.ExecuteUbergraph_GA_Commando_DebilitatingShots");

	UGA_Commando_DebilitatingShots_C_ExecuteUbergraph_GA_Commando_DebilitatingShots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
