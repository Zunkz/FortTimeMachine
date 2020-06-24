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

// Function Defender.Defender_C.OnOutsideOfTetherBeyondMaxTimeAllowed
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADefender_C::OnOutsideOfTetherBeyondMaxTimeAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender.Defender_C.OnOutsideOfTetherBeyondMaxTimeAllowed");

	ADefender_C_OnOutsideOfTetherBeyondMaxTimeAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Defender.Defender_C.SpawnSurvivorAnchor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SurvivorAnchorSpawnLocation    (Parm, IsPlainOldData)
// class ABP_SurvivorAnchor_C*    SpawnedSurvivorAnchor          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADefender_C::SpawnSurvivorAnchor(const struct FVector& SurvivorAnchorSpawnLocation, class ABP_SurvivorAnchor_C** SpawnedSurvivorAnchor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender.Defender_C.SpawnSurvivorAnchor");

	ADefender_C_SpawnSurvivorAnchor_Params params;
	params.SurvivorAnchorSpawnLocation = SurvivorAnchorSpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedSurvivorAnchor != nullptr)
		*SpawnedSurvivorAnchor = params.SpawnedSurvivorAnchor;
}


// Function Defender.Defender_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADefender_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender.Defender_C.UserConstructionScript");

	ADefender_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender.Defender_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADefender_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender.Defender_C.ReceiveBeginPlay");

	ADefender_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender.Defender_C.OnDefenderTrapEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ADefender_C::OnDefenderTrapEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender.Defender_C.OnDefenderTrapEndPlay");

	ADefender_C_OnDefenderTrapEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender.Defender_C.SpawnSurvivorAnchorWhenReady
// (BlueprintCallable, BlueprintEvent)

void ADefender_C::SpawnSurvivorAnchorWhenReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender.Defender_C.SpawnSurvivorAnchorWhenReady");

	ADefender_C_SpawnSurvivorAnchorWhenReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender.Defender_C.OnDefenderTrapSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABuildingTrapDefender**  OldDefenderTrap                (Parm, ZeroConstructor, IsPlainOldData)

void ADefender_C::OnDefenderTrapSet(class ABuildingTrapDefender** OldDefenderTrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender.Defender_C.OnDefenderTrapSet");

	ADefender_C_OnDefenderTrapSet_Params params;
	params.OldDefenderTrap = OldDefenderTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender.Defender_C.ExecuteUbergraph_Defender
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADefender_C::ExecuteUbergraph_Defender(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender.Defender_C.ExecuteUbergraph_Defender");

	ADefender_C_ExecuteUbergraph_Defender_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
