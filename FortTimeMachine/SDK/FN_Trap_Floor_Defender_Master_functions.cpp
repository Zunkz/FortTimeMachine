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

// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.GetDefenderSpawnTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ATrap_Floor_Defender_Master_C::GetDefenderSpawnTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.GetDefenderSpawnTransform");

	ATrap_Floor_Defender_Master_C_GetDefenderSpawnTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.CanPlayerSpawnDefender
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   Player                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UFortItem*               DefenderItem                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bCanSpawnDefender              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::CanPlayerSpawnDefender(class AFortPlayerController** Player, class UFortItem** DefenderItem, bool* bCanSpawnDefender)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.CanPlayerSpawnDefender");

	ATrap_Floor_Defender_Master_C_CanPlayerSpawnDefender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
	if (DefenderItem != nullptr)
		*DefenderItem = params.DefenderItem;
	if (bCanSpawnDefender != nullptr)
		*bCanSpawnDefender = params.bCanSpawnDefender;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.SetDefenderItemDefinition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::SetDefenderItemDefinition(class UFortItemDefinition* ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.SetDefenderItemDefinition");

	ATrap_Floor_Defender_Master_C_SetDefenderItemDefinition_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.SetDefenderPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADefender_C*             NewDefender                    (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::SetDefenderPawn(class ADefender_C* NewDefender)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.SetDefenderPawn");

	ATrap_Floor_Defender_Master_C_SetDefenderPawn_Params params;
	params.NewDefender = NewDefender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ATrap_Floor_Defender_Master_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.BlueprintGetInteractionString");

	ATrap_Floor_Defender_Master_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATrap_Floor_Defender_Master_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.BlueprintCanInteract");

	ATrap_Floor_Defender_Master_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn**        InteractingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATrap_Floor_Defender_Master_C::BlueprintOnLocalInteract(class AFortPlayerPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.BlueprintOnLocalInteract");

	ATrap_Floor_Defender_Master_C_BlueprintOnLocalInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.UserConstructionScript");

	ATrap_Floor_Defender_Master_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnCanceled_1ED02ED748A4140AEF73B29EF46F9CF6
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::OnCanceled_1ED02ED748A4140AEF73B29EF46F9CF6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnCanceled_1ED02ED748A4140AEF73B29EF46F9CF6");

	ATrap_Floor_Defender_Master_C_OnCanceled_1ED02ED748A4140AEF73B29EF46F9CF6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EF46F9CF6
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EF46F9CF6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EF46F9CF6");

	ATrap_Floor_Defender_Master_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EF46F9CF6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnCanceled_1ED02ED748A4140AEF73B29E1E11A6C0
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::OnCanceled_1ED02ED748A4140AEF73B29E1E11A6C0()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnCanceled_1ED02ED748A4140AEF73B29E1E11A6C0");

	ATrap_Floor_Defender_Master_C_OnCanceled_1ED02ED748A4140AEF73B29E1E11A6C0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E1E11A6C0
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E1E11A6C0()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E1E11A6C0");

	ATrap_Floor_Defender_Master_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E1E11A6C0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnLoaded_5FBB74204493DA1C442DF1A78BA2FBAC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::OnLoaded_5FBB74204493DA1C442DF1A78BA2FBAC(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnLoaded_5FBB74204493DA1C442DF1A78BA2FBAC");

	ATrap_Floor_Defender_Master_C_OnLoaded_5FBB74204493DA1C442DF1A78BA2FBAC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::OnReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnReloadEnd");

	ATrap_Floor_Defender_Master_C_OnReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::OnPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnPlaced");

	ATrap_Floor_Defender_Master_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::OnFinishedBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnFinishedBuilding");

	ATrap_Floor_Defender_Master_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void ATrap_Floor_Defender_Master_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	ATrap_Floor_Defender_Master_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void ATrap_Floor_Defender_Master_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Floor_Defender_Master_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::OnOutOfDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnOutOfDurability");

	ATrap_Floor_Defender_Master_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.SpawnDefender
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   RequestingFortPC               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AFortPlayerController*   DefenderOwnerPC                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   DefenderSquadId                (Parm, ZeroConstructor, IsPlainOldData)
// class UFortWorldItem*          WeaponToGive                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoQuantity                   (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::SpawnDefender(class AFortPlayerController* RequestingFortPC, class AFortPlayerController* DefenderOwnerPC, const struct FName& DefenderSquadId, class UFortWorldItem* WeaponToGive, int AmmoQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.SpawnDefender");

	ATrap_Floor_Defender_Master_C_SpawnDefender_Params params;
	params.RequestingFortPC = RequestingFortPC;
	params.DefenderOwnerPC = DefenderOwnerPC;
	params.DefenderSquadId = DefenderSquadId;
	params.WeaponToGive = WeaponToGive;
	params.AmmoQuantity = AmmoQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ReceiveBeginPlay");

	ATrap_Floor_Defender_Master_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.RemoveCurrentDefender
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerStateZone**   RequestingPlayer               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRemovalCausedByPlayerJoin     (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::RemoveCurrentDefender(class AFortPlayerStateZone** RequestingPlayer, bool* bRemovalCausedByPlayerJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.RemoveCurrentDefender");

	ATrap_Floor_Defender_Master_C_RemoveCurrentDefender_Params params;
	params.RequestingPlayer = RequestingPlayer;
	params.bRemovalCausedByPlayerJoin = bRemovalCausedByPlayerJoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ClearCurrentDefender
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bForceKillDefender             (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::ClearCurrentDefender(bool* bForceKillDefender)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ClearCurrentDefender");

	ATrap_Floor_Defender_Master_C_ClearCurrentDefender_Params params;
	params.bForceKillDefender = bForceKillDefender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.DeployDefender
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFortPlayerController**  ItemSelectorPC                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UFortDefenderItem**      InDefenderItem                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InDefenderSquadId              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UFortWorldItem**         WeaponToGive                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmmoQuantity                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::DeployDefender(class AFortPlayerController** ItemSelectorPC, class UFortDefenderItem** InDefenderItem, struct FName* InDefenderSquadId, class UFortWorldItem** WeaponToGive, int* AmmoQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.DeployDefender");

	ATrap_Floor_Defender_Master_C_DeployDefender_Params params;
	params.ItemSelectorPC = ItemSelectorPC;
	params.InDefenderItem = InDefenderItem;
	params.InDefenderSquadId = InDefenderSquadId;
	params.WeaponToGive = WeaponToGive;
	params.AmmoQuantity = AmmoQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.Clear Current Defender BP
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::Clear_Current_Defender_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.Clear Current Defender BP");

	ATrap_Floor_Defender_Master_C_Clear_Current_Defender_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnEndPlay_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::OnEndPlay_Event_1(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnEndPlay_Event_1");

	ATrap_Floor_Defender_Master_C_OnEndPlay_Event_1_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ReceiveEndPlay");

	ATrap_Floor_Defender_Master_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnRep_DefenderPawn
// (Event, Protected, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::OnRep_DefenderPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnRep_DefenderPawn");

	ATrap_Floor_Defender_Master_C_OnRep_DefenderPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnRep_DefenderItemDefinition
// (Event, Protected, BlueprintEvent)

void ATrap_Floor_Defender_Master_C::OnRep_DefenderItemDefinition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnRep_DefenderItemDefinition");

	ATrap_Floor_Defender_Master_C_OnRep_DefenderItemDefinition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnQueryFinishedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.OnQueryFinishedEvent_Event_1");

	ATrap_Floor_Defender_Master_C_OnQueryFinishedEvent_Event_1_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ExecuteUbergraph_Trap_Floor_Defender_Master
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Defender_Master_C::ExecuteUbergraph_Trap_Floor_Defender_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Defender_Master.Trap_Floor_Defender_Master_C.ExecuteUbergraph_Trap_Floor_Defender_Master");

	ATrap_Floor_Defender_Master_C_ExecuteUbergraph_Trap_Floor_Defender_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
