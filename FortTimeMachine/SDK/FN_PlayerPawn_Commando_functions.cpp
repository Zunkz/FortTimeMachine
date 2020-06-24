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

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Commando_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.UserConstructionScript");

	APlayerPawn_Commando_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Commando_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceivePossessed");

	APlayerPawn_Commando_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Commando.Shockwave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Commando_C::GameplayCue_Abilities_Activation_Commando_Shockwave(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Commando.Shockwave");

	APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Commando_Shockwave_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent>* EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (Parm)

void APlayerPawn_Commando_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent>* EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (Parm)

void APlayerPawn_Commando_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.IncendiaryRounds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Commando_C::GameplayCue_Abilities_Applied_Commando_IncendiaryRounds(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.IncendiaryRounds");

	APlayerPawn_Commando_C_GameplayCue_Abilities_Applied_Commando_IncendiaryRounds_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.SetMenuScreenClassName
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Commando_C::SetMenuScreenClassName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.SetMenuScreenClassName");

	APlayerPawn_Commando_C_SetMenuScreenClassName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Commando_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceiveBeginPlay");

	APlayerPawn_Commando_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.SelectPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInst                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Commando_C::SelectPawn(class UAnimInstance* AnimInst)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.SelectPawn");

	APlayerPawn_Commando_C_SelectPawn_Params params;
	params.AnimInst = AnimInst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APlayerPawn_Commando_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceiveDestroyed");

	APlayerPawn_Commando_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.CheckForGameState
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Commando_C::CheckForGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.CheckForGameState");

	APlayerPawn_Commando_C_CheckForGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.MakeItRain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void APlayerPawn_Commando_C::GameplayCue_Abilities_Applied_Commando_MakeItRain(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.MakeItRain");

	APlayerPawn_Commando_C_GameplayCue_Abilities_Applied_Commando_MakeItRain_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ExecuteUbergraph_PlayerPawn_Commando
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Commando_C::ExecuteUbergraph_PlayerPawn_Commando(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.ExecuteUbergraph_PlayerPawn_Commando");

	APlayerPawn_Commando_C_ExecuteUbergraph_PlayerPawn_Commando_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
