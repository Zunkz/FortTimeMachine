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

// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetBuildingActorsThatCanBeDamaged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABuildingActor*>  Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMission_FarmsteadFort_C::SetBuildingActorsThatCanBeDamaged(TArray<class ABuildingActor*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetBuildingActorsThatCanBeDamaged");

	AMission_FarmsteadFort_C_SetBuildingActorsThatCanBeDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopEditingConversations
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopEditingConversations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopEditingConversations");

	AMission_FarmsteadFort_C_StopEditingConversations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnDwarfs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnDwarfs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnDwarfs");

	AMission_FarmsteadFort_C_SpawnDwarfs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TeleportPlayerForwardAfterSmasherCin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::TeleportPlayerForwardAfterSmasherCin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TeleportPlayerForwardAfterSmasherCin");

	AMission_FarmsteadFort_C_TeleportPlayerForwardAfterSmasherCin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnLennyDefender
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnLennyDefender()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnLennyDefender");

	AMission_FarmsteadFort_C_SpawnLennyDefender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnFlankEncounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnFlankEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnFlankEncounter");

	AMission_FarmsteadFort_C_SpawnFlankEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Treefire
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::Treefire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Treefire");

	AMission_FarmsteadFort_C_Treefire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ForceCompleteHarvesting
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::ForceCompleteHarvesting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ForceCompleteHarvesting");

	AMission_FarmsteadFort_C_ForceCompleteHarvesting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetEditingWallRef
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SetEditingWallRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetEditingWallRef");

	AMission_FarmsteadFort_C_SetEditingWallRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Achievements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AchievementInt                 (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::Achievements(int AchievementInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Achievements");

	AMission_FarmsteadFort_C_Achievements_Params params;
	params.AchievementInt = AchievementInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.MakeTrapTilesInvulnerable
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::MakeTrapTilesInvulnerable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.MakeTrapTilesInvulnerable");

	AMission_FarmsteadFort_C_MakeTrapTilesInvulnerable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GetEditingWallByTag
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::GetEditingWallByTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GetEditingWallByTag");

	AMission_FarmsteadFort_C_GetEditingWallByTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetObjectiveMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TagToFind                      (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::SetObjectiveMarker(bool Active, const struct FName& TagToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetObjectiveMarker");

	AMission_FarmsteadFort_C_SetObjectiveMarker_Params params;
	params.Active = Active;
	params.TagToFind = TagToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetBlugloMiniMapIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          VisibleDistance                (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::SetBlugloMiniMapIcons(float VisibleDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetBlugloMiniMapIcons");

	AMission_FarmsteadFort_C_SetBlugloMiniMapIcons_Params params;
	params.VisibleDistance = VisibleDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnHarvestingHelpers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnHarvestingHelpers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnHarvestingHelpers");

	AMission_FarmsteadFort_C_SpawnHarvestingHelpers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RegisterHarvestingHelpers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RegisterHarvestingHelpers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RegisterHarvestingHelpers");

	AMission_FarmsteadFort_C_RegisterHarvestingHelpers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnVinderTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// TEnumAsByte<Enum_OnboardingVideos> SelectedVideo                  (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_VinderTip_Tutorial_C* VindertipRef                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::SpawnVinderTip(const struct FTransform& SpawnTransform, TEnumAsByte<Enum_OnboardingVideos> SelectedVideo, class ABP_VinderTip_Tutorial_C** VindertipRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnVinderTip");

	AMission_FarmsteadFort_C_SpawnVinderTip_Params params;
	params.SpawnTransform = SpawnTransform;
	params.SelectedVideo = SelectedVideo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VindertipRef != nullptr)
		*VindertipRef = params.VindertipRef;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GiveAdditionalTraps
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::GiveAdditionalTraps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GiveAdditionalTraps");

	AMission_FarmsteadFort_C_GiveAdditionalTraps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TeleportPlayerToBlackRoom
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::TeleportPlayerToBlackRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TeleportPlayerToBlackRoom");

	AMission_FarmsteadFort_C_TeleportPlayerToBlackRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FadePlayerCameraToBlack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeDuration                   (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::FadePlayerCameraToBlack(float FadeDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FadePlayerCameraToBlack");

	AMission_FarmsteadFort_C_FadePlayerCameraToBlack_Params params;
	params.FadeDuration = FadeDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetCinematicVortexVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::SetCinematicVortexVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetCinematicVortexVisibility");

	AMission_FarmsteadFort_C_SetCinematicVortexVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SmallVortexVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::SmallVortexVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SmallVortexVisibility");

	AMission_FarmsteadFort_C_SmallVortexVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnPreAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnPreAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnPreAttack");

	AMission_FarmsteadFort_C_SpawnPreAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GiveAirStrikeAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::GiveAirStrikeAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GiveAirStrikeAbility");

	AMission_FarmsteadFort_C_GiveAirStrikeAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RotatePlayerTowardsCin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RotatePlayerTowardsCin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RotatePlayerTowardsCin");

	AMission_FarmsteadFort_C_RotatePlayerTowardsCin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetSmasherHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             AIPawnRef                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DivideByValue                  (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::SetSmasherHealth(class AFortAIPawn* AIPawnRef, float DivideByValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetSmasherHealth");

	AMission_FarmsteadFort_C_SetSmasherHealth_Params params;
	params.AIPawnRef = AIPawnRef;
	params.DivideByValue = DivideByValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnScriptedSmasher
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TagToUse                       (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::SpawnScriptedSmasher(const struct FName& TagToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnScriptedSmasher");

	AMission_FarmsteadFort_C_SpawnScriptedSmasher_Params params;
	params.TagToUse = TagToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FortPartsCanBeDamaged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBeDamaged                   (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::FortPartsCanBeDamaged(bool CanBeDamaged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FortPartsCanBeDamaged");

	AMission_FarmsteadFort_C_FortPartsCanBeDamaged_Params params;
	params.CanBeDamaged = CanBeDamaged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.KillDefenders
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::KillDefenders()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.KillDefenders");

	AMission_FarmsteadFort_C_KillDefenders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DestroyFortParts
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::DestroyFortParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DestroyFortParts");

	AMission_FarmsteadFort_C_DestroyFortParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckPlayerHasSomeMissionTraps
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::CheckPlayerHasSomeMissionTraps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckPlayerHasSomeMissionTraps");

	AMission_FarmsteadFort_C_CheckPlayerHasSomeMissionTraps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.MakeDefendersVulnerable 
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::MakeDefendersVulnerable_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.MakeDefendersVulnerable ");

	AMission_FarmsteadFort_C_MakeDefendersVulnerable__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PrepareFortEncounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::PrepareFortEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PrepareFortEncounter");

	AMission_FarmsteadFort_C_PrepareFortEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnPreEncounter
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnPreEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnPreEncounter");

	AMission_FarmsteadFort_C_SpawnPreEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GetDefenderSpawnFromTag
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TagNameToFind                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              DefenderSpawnTransform         (Parm, OutParm, IsPlainOldData)
// struct FTransform              AnchorSpawnTransform           (Parm, OutParm, IsPlainOldData)

void AMission_FarmsteadFort_C::GetDefenderSpawnFromTag(const struct FName& TagNameToFind, struct FTransform* DefenderSpawnTransform, struct FTransform* AnchorSpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GetDefenderSpawnFromTag");

	AMission_FarmsteadFort_C_GetDefenderSpawnFromTag_Params params;
	params.TagNameToFind = TagNameToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefenderSpawnTransform != nullptr)
		*DefenderSpawnTransform = params.DefenderSpawnTransform;
	if (AnchorSpawnTransform != nullptr)
		*AnchorSpawnTransform = params.AnchorSpawnTransform;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnDefendersAtFort
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnDefendersAtFort()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnDefendersAtFort");

	AMission_FarmsteadFort_C_SpawnDefendersAtFort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DisableLaserWall
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::DisableLaserWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DisableLaserWall");

	AMission_FarmsteadFort_C_DisableLaserWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopGunHarvestingChecks
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopGunHarvestingChecks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopGunHarvestingChecks");

	AMission_FarmsteadFort_C_StopGunHarvestingChecks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AllowBarriersToTakeDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Invulnerable                   (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::AllowBarriersToTakeDamage(bool Invulnerable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AllowBarriersToTakeDamage");

	AMission_FarmsteadFort_C_AllowBarriersToTakeDamage_Params params;
	params.Invulnerable = Invulnerable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.NPC_Cower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cower_Activate                 (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::NPC_Cower(bool Cower_Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.NPC_Cower");

	AMission_FarmsteadFort_C_NPC_Cower_Params params;
	params.Cower_Activate = Cower_Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckMechanicalParts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerHasMoreMechanicalThanStarting (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AdditionalmechnicalCollected   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::CheckMechanicalParts(bool* PlayerHasMoreMechanicalThanStarting, int* AdditionalmechnicalCollected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckMechanicalParts");

	AMission_FarmsteadFort_C_CheckMechanicalParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerHasMoreMechanicalThanStarting != nullptr)
		*PlayerHasMoreMechanicalThanStarting = params.PlayerHasMoreMechanicalThanStarting;
	if (AdditionalmechnicalCollected != nullptr)
		*AdditionalmechnicalCollected = params.AdditionalmechnicalCollected;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetVariables
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SetVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetVariables");

	AMission_FarmsteadFort_C_SetVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_Highlightharvester
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnRep_Highlightharvester()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_Highlightharvester");

	AMission_FarmsteadFort_C_OnRep_Highlightharvester_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightMinimap
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnRep_HighlightMinimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightMinimap");

	AMission_FarmsteadFort_C_OnRep_HighlightMinimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightWalls
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnRep_HighlightWalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightWalls");

	AMission_FarmsteadFort_C_OnRep_HighlightWalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightStairs
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnRep_HighlightStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightStairs");

	AMission_FarmsteadFort_C_OnRep_HighlightStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightTraps
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnRep_HighlightTraps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightTraps");

	AMission_FarmsteadFort_C_OnRep_HighlightTraps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightGunTab
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnRep_HighlightGunTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightGunTab");

	AMission_FarmsteadFort_C_OnRep_HighlightGunTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayUIAttentionSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_UIAttentionSound> Sound_Positioning              (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::PlayUIAttentionSound(TEnumAsByte<Enum_UIAttentionSound> Sound_Positioning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayUIAttentionSound");

	AMission_FarmsteadFort_C_PlayUIAttentionSound_Params params;
	params.Sound_Positioning = Sound_Positioning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightCraftingMelee
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnRep_HighlightCraftingMelee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightCraftingMelee");

	AMission_FarmsteadFort_C_OnRep_HighlightCraftingMelee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_Hightlight_Objectives
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnRep_Hightlight_Objectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_Hightlight_Objectives");

	AMission_FarmsteadFort_C_OnRep_Hightlight_Objectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightQuickbar
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnRep_HighlightQuickbar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnRep_HighlightQuickbar");

	AMission_FarmsteadFort_C_OnRep_HighlightQuickbar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckNutsBolts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerHasMoreNutsThanStarting  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AdditionalNutsCollectedI       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::CheckNutsBolts(bool* PlayerHasMoreNutsThanStarting, int* AdditionalNutsCollectedI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckNutsBolts");

	AMission_FarmsteadFort_C_CheckNutsBolts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerHasMoreNutsThanStarting != nullptr)
		*PlayerHasMoreNutsThanStarting = params.PlayerHasMoreNutsThanStarting;
	if (AdditionalNutsCollectedI != nullptr)
		*AdditionalNutsCollectedI = params.AdditionalNutsCollectedI;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckTwine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerHasMoreTwineThanStarting (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AdditionalTwineCollectedI      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::CheckTwine(bool* PlayerHasMoreTwineThanStarting, int* AdditionalTwineCollectedI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckTwine");

	AMission_FarmsteadFort_C_CheckTwine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerHasMoreTwineThanStarting != nullptr)
		*PlayerHasMoreTwineThanStarting = params.PlayerHasMoreTwineThanStarting;
	if (AdditionalTwineCollectedI != nullptr)
		*AdditionalTwineCollectedI = params.AdditionalTwineCollectedI;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckOutsideResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerHasEnoughResources       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::CheckOutsideResources(bool* PlayerHasEnoughResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckOutsideResources");

	AMission_FarmsteadFort_C_CheckOutsideResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerHasEnoughResources != nullptr)
		*PlayerHasEnoughResources = params.PlayerHasEnoughResources;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GiveSchematic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::GiveSchematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GiveSchematic");

	AMission_FarmsteadFort_C_GiveSchematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ModifyWoodResource
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::ModifyWoodResource()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ModifyWoodResource");

	AMission_FarmsteadFort_C_ModifyWoodResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RegisterMissionActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RegisterMissionActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RegisterMissionActors");

	AMission_FarmsteadFort_C_RegisterMissionActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ManageInventory
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::ManageInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ManageInventory");

	AMission_FarmsteadFort_C_ManageInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.KIllAIWhenPlayerDied
// (Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::KIllAIWhenPlayerDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.KIllAIWhenPlayerDied");

	AMission_FarmsteadFort_C_KIllAIWhenPlayerDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.UserConstructionScript");

	AMission_FarmsteadFort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E7652B22B
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E7652B22B()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E7652B22B");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E7652B22B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E7652B22B
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E7652B22B()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E7652B22B");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E7652B22B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E5AAB6B48
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E5AAB6B48()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E5AAB6B48");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E5AAB6B48_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E5AAB6B48
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E5AAB6B48()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E5AAB6B48");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E5AAB6B48_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29ED1BD3A0B
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29ED1BD3A0B()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29ED1BD3A0B");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29ED1BD3A0B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29ED1BD3A0B
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29ED1BD3A0B()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29ED1BD3A0B");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29ED1BD3A0B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EC65B9338
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29EC65B9338()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EC65B9338");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EC65B9338_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EC65B9338
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EC65B9338()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EC65B9338");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EC65B9338_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E0497E9D1
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E0497E9D1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E0497E9D1");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E0497E9D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E0497E9D1
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E0497E9D1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E0497E9D1");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E0497E9D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E9FE32A5E
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E9FE32A5E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E9FE32A5E");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E9FE32A5E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E9FE32A5E
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E9FE32A5E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E9FE32A5E");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E9FE32A5E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EBB0BB80C
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29EBB0BB80C()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EBB0BB80C");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EBB0BB80C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EBB0BB80C
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EBB0BB80C()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EBB0BB80C");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EBB0BB80C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EEEE08771
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29EEEE08771()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EEEE08771");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EEEE08771_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EEEE08771
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EEEE08771()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EEEE08771");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EEEE08771_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EB5829E87
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29EB5829E87()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EB5829E87");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EB5829E87_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EB5829E87
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EB5829E87()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EB5829E87");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EB5829E87_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E3D016475
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E3D016475()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E3D016475");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E3D016475_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E3D016475
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E3D016475()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E3D016475");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E3D016475_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E676C3A81
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E676C3A81()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E676C3A81");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E676C3A81_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E676C3A81
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E676C3A81()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E676C3A81");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E676C3A81_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E86702662
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E86702662()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E86702662");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E86702662_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E86702662
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E86702662()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E86702662");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E86702662_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E3F6E3C92
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E3F6E3C92()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E3F6E3C92");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E3F6E3C92_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E3F6E3C92
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E3F6E3C92()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E3F6E3C92");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E3F6E3C92_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB02D7A7FDE
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB02D7A7FDE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB02D7A7FDE");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB02D7A7FDE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB02D7A7FDE
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB02D7A7FDE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB02D7A7FDE");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB02D7A7FDE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB08BA9C420
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB08BA9C420()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB08BA9C420");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB08BA9C420_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB08BA9C420
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB08BA9C420()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB08BA9C420");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB08BA9C420_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04174C113
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB04174C113()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04174C113");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB04174C113_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04174C113
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB04174C113()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04174C113");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB04174C113_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB076A92ABB
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB076A92ABB()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB076A92ABB");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB076A92ABB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB076A92ABB
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB076A92ABB()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB076A92ABB");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB076A92ABB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB027F6E6B8
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB027F6E6B8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB027F6E6B8");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB027F6E6B8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB027F6E6B8
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB027F6E6B8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB027F6E6B8");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB027F6E6B8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB03CC03214
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB03CC03214()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB03CC03214");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB03CC03214_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03CC03214
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB03CC03214()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03CC03214");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB03CC03214_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB000513AE5
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB000513AE5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB000513AE5");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB000513AE5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB000513AE5
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB000513AE5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB000513AE5");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB000513AE5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0CD289167
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB0CD289167()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0CD289167");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0CD289167_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0CD289167
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0CD289167()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0CD289167");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0CD289167_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0DA611453
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB0DA611453()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0DA611453");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0DA611453_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA611453
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA611453()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA611453");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA611453_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0C6ECCFFF
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB0C6ECCFFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0C6ECCFFF");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0C6ECCFFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0C6ECCFFF
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0C6ECCFFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0C6ECCFFF");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0C6ECCFFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0025E47EC
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB0025E47EC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0025E47EC");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0025E47EC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0025E47EC
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0025E47EC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0025E47EC");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0025E47EC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04B7064BB
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB04B7064BB()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04B7064BB");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB04B7064BB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04B7064BB
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB04B7064BB()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04B7064BB");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB04B7064BB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04B4FB5D4
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB04B4FB5D4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04B4FB5D4");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB04B4FB5D4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04B4FB5D4
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB04B4FB5D4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04B4FB5D4");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB04B4FB5D4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB08B86E674
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB08B86E674()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB08B86E674");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB08B86E674_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB08B86E674
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB08B86E674()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB08B86E674");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB08B86E674_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB06AB516D5
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB06AB516D5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB06AB516D5");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB06AB516D5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB06AB516D5
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB06AB516D5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB06AB516D5");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB06AB516D5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04978F881
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB04978F881()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB04978F881");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB04978F881_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04978F881
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB04978F881()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB04978F881");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB04978F881_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0655734D8
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB0655734D8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0655734D8");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0655734D8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0655734D8
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0655734D8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0655734D8");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0655734D8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB03477B005
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB03477B005()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB03477B005");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB03477B005_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03477B005
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB03477B005()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03477B005");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB03477B005_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0012A9E65
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB0012A9E65()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0012A9E65");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0012A9E65_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0012A9E65
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0012A9E65()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0012A9E65");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0012A9E65_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB033978965
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB033978965()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB033978965");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB033978965_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB033978965
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB033978965()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB033978965");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB033978965_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB004A96859
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB004A96859()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB004A96859");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB004A96859_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB004A96859
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB004A96859()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB004A96859");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB004A96859_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0D18205A4
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB0D18205A4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0D18205A4");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0D18205A4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0D18205A4
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0D18205A4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0D18205A4");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0D18205A4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB01C5B8BBE
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB01C5B8BBE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB01C5B8BBE");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB01C5B8BBE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB01C5B8BBE
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB01C5B8BBE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB01C5B8BBE");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB01C5B8BBE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB050BBAF27
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB050BBAF27()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB050BBAF27");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB050BBAF27_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB050BBAF27
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB050BBAF27()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB050BBAF27");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB050BBAF27_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EFBBBDE98
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29EFBBBDE98()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EFBBBDE98");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EFBBBDE98_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EFBBBDE98
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EFBBBDE98()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EFBBBDE98");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EFBBBDE98_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB082814064
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB082814064()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB082814064");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB082814064_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB082814064
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB082814064()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB082814064");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB082814064_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0479C6E3A
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB0479C6E3A()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0479C6E3A");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0479C6E3A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0479C6E3A
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0479C6E3A()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0479C6E3A");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0479C6E3A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB07A1DD46F
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB07A1DD46F()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB07A1DD46F");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB07A1DD46F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB07A1DD46F
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB07A1DD46F()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB07A1DD46F");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB07A1DD46F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB00BFA76C1
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB00BFA76C1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB00BFA76C1");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB00BFA76C1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB00BFA76C1
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB00BFA76C1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB00BFA76C1");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB00BFA76C1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB006DC4F42
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB006DC4F42()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB006DC4F42");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB006DC4F42_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB006DC4F42
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB006DC4F42()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB006DC4F42");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB006DC4F42_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB05538C8B6
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB05538C8B6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB05538C8B6");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB05538C8B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB05538C8B6
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB05538C8B6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB05538C8B6");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB05538C8B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0034FFB50
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB0034FFB50()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB0034FFB50");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB0034FFB50_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0034FFB50
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0034FFB50()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0034FFB50");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0034FFB50_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E3174C6F5
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E3174C6F5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E3174C6F5");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E3174C6F5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E3174C6F5
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E3174C6F5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E3174C6F5");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E3174C6F5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB02547A90B
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB02547A90B()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB02547A90B");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB02547A90B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB02547A90B
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB02547A90B()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB02547A90B");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB02547A90B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E0F1DDB55
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E0F1DDB55()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E0F1DDB55");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E0F1DDB55_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E0F1DDB55
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E0F1DDB55()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E0F1DDB55");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E0F1DDB55_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EFF3E9404
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29EFF3E9404()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29EFF3E9404");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29EFF3E9404_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EFF3E9404
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EFF3E9404()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EFF3E9404");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EFF3E9404_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E6CB30750
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E6CB30750()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E6CB30750");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E6CB30750_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E6CB30750
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E6CB30750()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E6CB30750");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E6CB30750_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E1CFFFB15
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E1CFFFB15()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E1CFFFB15");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E1CFFFB15_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E1CFFFB15
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E1CFFFB15()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E1CFFFB15");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E1CFFFB15_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E17087969
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E17087969()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E17087969");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E17087969_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E17087969
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E17087969()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E17087969");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E17087969_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E9670D60A
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1ED02ED748A4140AEF73B29E9670D60A()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1ED02ED748A4140AEF73B29E9670D60A");

	AMission_FarmsteadFort_C_OnCanceled_1ED02ED748A4140AEF73B29E9670D60A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E9670D60A
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E9670D60A()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E9670D60A");

	AMission_FarmsteadFort_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E9670D60A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_856A325D44ECC73B857CE5B3C64A0924
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_856A325D44ECC73B857CE5B3C64A0924()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_856A325D44ECC73B857CE5B3C64A0924");

	AMission_FarmsteadFort_C_OnCanceled_856A325D44ECC73B857CE5B3C64A0924_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_856A325D44ECC73B857CE5B3C64A0924
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_856A325D44ECC73B857CE5B3C64A0924()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_856A325D44ECC73B857CE5B3C64A0924");

	AMission_FarmsteadFort_C_OnAllClientsReady_856A325D44ECC73B857CE5B3C64A0924_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_856A325D44ECC73B857CE5B34DF53DCF
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_856A325D44ECC73B857CE5B34DF53DCF()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_856A325D44ECC73B857CE5B34DF53DCF");

	AMission_FarmsteadFort_C_OnCanceled_856A325D44ECC73B857CE5B34DF53DCF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_856A325D44ECC73B857CE5B34DF53DCF
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_856A325D44ECC73B857CE5B34DF53DCF()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_856A325D44ECC73B857CE5B34DF53DCF");

	AMission_FarmsteadFort_C_OnAllClientsReady_856A325D44ECC73B857CE5B34DF53DCF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_856A325D44ECC73B857CE5B32980C3E4
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_856A325D44ECC73B857CE5B32980C3E4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_856A325D44ECC73B857CE5B32980C3E4");

	AMission_FarmsteadFort_C_OnCanceled_856A325D44ECC73B857CE5B32980C3E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_856A325D44ECC73B857CE5B32980C3E4
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_856A325D44ECC73B857CE5B32980C3E4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_856A325D44ECC73B857CE5B32980C3E4");

	AMission_FarmsteadFort_C_OnAllClientsReady_856A325D44ECC73B857CE5B32980C3E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB06FB73C03
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnCanceled_1A19862C47F5B5512EBB1BB06FB73C03()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnCanceled_1A19862C47F5B5512EBB1BB06FB73C03");

	AMission_FarmsteadFort_C_OnCanceled_1A19862C47F5B5512EBB1BB06FB73C03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB06FB73C03
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB06FB73C03()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB06FB73C03");

	AMission_FarmsteadFort_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB06FB73C03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Basic Controls Hints
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::Basic_Controls_Hints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Basic Controls Hints");

	AMission_FarmsteadFort_C_Basic_Controls_Hints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ChestFirstDamaged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_ChestFirstDamaged(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ChestFirstDamaged");

	AMission_FarmsteadFort_C_HandleMissionEvent_ChestFirstDamaged_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtStairs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerAtStairs(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtStairs");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtStairs_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerEscapedPit
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerEscapedPit(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerEscapedPit");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerEscapedPit_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerApproachingFort
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerApproachingFort(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerApproachingFort");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerApproachingFort_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.placetrap
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::placetrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.placetrap");

	AMission_FarmsteadFort_C_placetrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Stop WallEdit
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::Stop_WallEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Stop WallEdit");

	AMission_FarmsteadFort_C_Stop_WallEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtBalcony
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerAtBalcony(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtBalcony");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtBalcony_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Start AI ENCOUNTER
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::Start_AI_ENCOUNTER()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Start AI ENCOUNTER");

	AMission_FarmsteadFort_C_Start_AI_ENCOUNTER_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.EncounterTimer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::EncounterTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.EncounterTimer");

	AMission_FarmsteadFort_C_EncounterTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerPastBlocker
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerPastBlocker(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerPastBlocker");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerPastBlocker_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ShowMinimapObjective
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_ShowMinimapObjective(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ShowMinimapObjective");

	AMission_FarmsteadFort_C_HandleMissionEvent_ShowMinimapObjective_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtWallEditing
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerAtWallEditing(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtWallEditing");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtWallEditing_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtControlRoom
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerAtControlRoom(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtControlRoom");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtControlRoom_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_RocketPreLaunchActivate
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_RocketPreLaunchActivate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_RocketPreLaunchActivate");

	AMission_FarmsteadFort_C_HandleMissionEvent_RocketPreLaunchActivate_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_AirStrikeUsed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_AirStrikeUsed(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_AirStrikeUsed");

	AMission_FarmsteadFort_C_HandleMissionEvent_AirStrikeUsed_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerHasMoved
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerHasMoved(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerHasMoved");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerHasMoved_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckFiring
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::CheckFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckFiring");

	AMission_FarmsteadFort_C_CheckFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopFinalEncounter
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopFinalEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopFinalEncounter");

	AMission_FarmsteadFort_C_StopFinalEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerHasFired
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerHasFired(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerHasFired");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerHasFired_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.firehint
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::firehint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.firehint");

	AMission_FarmsteadFort_C_firehint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_Cine_Ramirez_Complete
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_Cine_Ramirez_Complete(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_Cine_Ramirez_Complete");

	AMission_FarmsteadFort_C_HandleMissionEvent_Cine_Ramirez_Complete_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ControlHintsOn
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::ControlHintsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ControlHintsOn");

	AMission_FarmsteadFort_C_ControlHintsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckFiringNow
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::CheckFiringNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CheckFiringNow");

	AMission_FarmsteadFort_C_CheckFiringNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_EnemyDamaged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_EnemyDamaged(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_EnemyDamaged");

	AMission_FarmsteadFort_C_HandleMissionEvent_EnemyDamaged_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.prepareencounterend
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::prepareencounterend()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.prepareencounterend");

	AMission_FarmsteadFort_C_prepareencounterend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlaceTrapsActivate
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::PlaceTrapsActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlaceTrapsActivate");

	AMission_FarmsteadFort_C_PlaceTrapsActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockTrapNotification
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::BlockTrapNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockTrapNotification");

	AMission_FarmsteadFort_C_BlockTrapNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerBuiltDoor
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerBuiltDoor(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerBuiltDoor");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerBuiltDoor_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ToggledEditMode
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_ToggledEditMode(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ToggledEditMode");

	AMission_FarmsteadFort_C_HandleMissionEvent_ToggledEditMode_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopTrapCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopTrapCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopTrapCheck");

	AMission_FarmsteadFort_C_StopTrapCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopDoorEditCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopDoorEditCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopDoorEditCheck");

	AMission_FarmsteadFort_C_StopDoorEditCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerDied
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerDied(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerDied");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerDied_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnMatchStarted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void AMission_FarmsteadFort_C::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnMatchStarted");

	AMission_FarmsteadFort_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Countdown
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Countdown");

	AMission_FarmsteadFort_C_Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StreamOutRocket
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StreamOutRocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StreamOutRocket");

	AMission_FarmsteadFort_C_StreamOutRocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FindWayOutOfCaves
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::FindWayOutOfCaves()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FindWayOutOfCaves");

	AMission_FarmsteadFort_C_FindWayOutOfCaves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerEscapedPit
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::PlayerEscapedPit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerEscapedPit");

	AMission_FarmsteadFort_C_PlayerEscapedPit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HarvestTwine
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::HarvestTwine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HarvestTwine");

	AMission_FarmsteadFort_C_HarvestTwine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_MissionTreeDestroyed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_MissionTreeDestroyed(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_MissionTreeDestroyed");

	AMission_FarmsteadFort_C_HandleMissionEvent_MissionTreeDestroyed_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.LockSchematics
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::LockSchematics()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.LockSchematics");

	AMission_FarmsteadFort_C_LockSchematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.UnlockAllSchematics
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::UnlockAllSchematics()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.UnlockAllSchematics");

	AMission_FarmsteadFort_C_UnlockAllSchematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RevealMap1
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RevealMap1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RevealMap1");

	AMission_FarmsteadFort_C_RevealMap1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RevealMap2
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RevealMap2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RevealMap2");

	AMission_FarmsteadFort_C_RevealMap2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.LoopingCheckoreCount_Copy
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::LoopingCheckoreCount_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.LoopingCheckoreCount_Copy");

	AMission_FarmsteadFort_C_LoopingCheckoreCount_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkmetalevent_Copy
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::checkmetalevent_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkmetalevent_Copy");

	AMission_FarmsteadFort_C_checkmetalevent_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipOutsideHarvestingTutorial
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SkipOutsideHarvestingTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipOutsideHarvestingTutorial");

	AMission_FarmsteadFort_C_SkipOutsideHarvestingTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartTwineLoopingCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StartTwineLoopingCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartTwineLoopingCheck");

	AMission_FarmsteadFort_C_StartTwineLoopingCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopTwineLoopingCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopTwineLoopingCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopTwineLoopingCheck");

	AMission_FarmsteadFort_C_StopTwineLoopingCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartNutsBoltsLoopingCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StartNutsBoltsLoopingCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartNutsBoltsLoopingCheck");

	AMission_FarmsteadFort_C_StartNutsBoltsLoopingCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopNutsBoltLoopingCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopNutsBoltLoopingCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopNutsBoltLoopingCheck");

	AMission_FarmsteadFort_C_StopNutsBoltLoopingCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_GiveGun
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_GiveGun(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_GiveGun");

	AMission_FarmsteadFort_C_HandleMissionEvent_GiveGun_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkevent_Copy
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::checkevent_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkevent_Copy");

	AMission_FarmsteadFort_C_checkevent_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartOutsideResourceChecker
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StartOutsideResourceChecker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartOutsideResourceChecker");

	AMission_FarmsteadFort_C_StartOutsideResourceChecker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopOutsideResourceChecker
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopOutsideResourceChecker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopOutsideResourceChecker");

	AMission_FarmsteadFort_C_StopOutsideResourceChecker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CraftGunTutorial
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::CraftGunTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CraftGunTutorial");

	AMission_FarmsteadFort_C_CraftGunTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_MissionVehicleDestroyed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_MissionVehicleDestroyed(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_MissionVehicleDestroyed");

	AMission_FarmsteadFort_C_HandleMissionEvent_MissionVehicleDestroyed_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.IncomingDialog
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::IncomingDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.IncomingDialog");

	AMission_FarmsteadFort_C_IncomingDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.remindertogettofort
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::remindertogettofort()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.remindertogettofort");

	AMission_FarmsteadFort_C_remindertogettofort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ToggledCursorMode
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_ToggledCursorMode(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ToggledCursorMode");

	AMission_FarmsteadFort_C_HandleMissionEvent_ToggledCursorMode_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ShowGunPing
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::ShowGunPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ShowGunPing");

	AMission_FarmsteadFort_C_ShowGunPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ShowAllOutsideResourceList
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::ShowAllOutsideResourceList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ShowAllOutsideResourceList");

	AMission_FarmsteadFort_C_ShowAllOutsideResourceList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerHasMoved
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::PlayerHasMoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerHasMoved");

	AMission_FarmsteadFort_C_PlayerHasMoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_LaunchRocket
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_LaunchRocket(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_LaunchRocket");

	AMission_FarmsteadFort_C_HandleMissionEvent_LaunchRocket_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnStairsBuilt
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OnStairsBuilt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnStairsBuilt");

	AMission_FarmsteadFort_C_OnStairsBuilt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkmetalevent_Copy_Copy
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::checkmetalevent_Copy_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkmetalevent_Copy_Copy");

	AMission_FarmsteadFort_C_checkmetalevent_Copy_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartMechanicalLoopingCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StartMechanicalLoopingCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartMechanicalLoopingCheck");

	AMission_FarmsteadFort_C_StartMechanicalLoopingCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopMechanicalLoopingCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopMechanicalLoopingCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopMechanicalLoopingCheck");

	AMission_FarmsteadFort_C_StopMechanicalLoopingCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFirstEncounter
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StartFirstEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFirstEncounter");

	AMission_FarmsteadFort_C_StartFirstEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerSpawned
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerSpawned(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerSpawned");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerSpawned_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerDBNOEnter
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerDBNOEnter(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerDBNOEnter");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerDBNOEnter_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.EncounterCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAIEncounterInfo*    Encounter                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccessfullyCompleted         (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::EncounterCompleted(class UFortAIEncounterInfo* Encounter, bool bSuccessfullyCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.EncounterCompleted");

	AMission_FarmsteadFort_C_EncounterCompleted_Params params;
	params.Encounter = Encounter;
	params.bSuccessfullyCompleted = bSuccessfullyCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstEncounterComplete
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::FirstEncounterComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstEncounterComplete");

	AMission_FarmsteadFort_C_FirstEncounterComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerDBNORevived
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerDBNORevived(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerDBNORevived");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerDBNORevived_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DisableLaserWalls
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::DisableLaserWalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DisableLaserWalls");

	AMission_FarmsteadFort_C_DisableLaserWalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerBuilt
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerBuilt(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerBuilt");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerBuilt_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFortAssault
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StartFortAssault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFortAssault");

	AMission_FarmsteadFort_C_StartFortAssault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ForveKillAIEncounter
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_ForveKillAIEncounter(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ForveKillAIEncounter");

	AMission_FarmsteadFort_C_HandleMissionEvent_ForveKillAIEncounter_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.IsPlayerNearTheRocks
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::IsPlayerNearTheRocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.IsPlayerNearTheRocks");

	AMission_FarmsteadFort_C_IsPlayerNearTheRocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RemindPlayerHowToHarvest
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RemindPlayerHowToHarvest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RemindPlayerHowToHarvest");

	AMission_FarmsteadFort_C_RemindPlayerHowToHarvest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GoToRocketRoom
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::GoToRocketRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.GoToRocketRoom");

	AMission_FarmsteadFort_C_GoToRocketRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnEncounter
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnEncounter");

	AMission_FarmsteadFort_C_SpawnEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFortAttack
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StartFortAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFortAttack");

	AMission_FarmsteadFort_C_StartFortAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopPreEncounter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopPreEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopPreEncounter");

	AMission_FarmsteadFort_C_StopPreEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnSmasherSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAIEncounterInfo*    Encounter                      (Parm, ZeroConstructor, IsPlainOldData)
// class AFortAIPawn*             SpawnedEnemy                   (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::OnSmasherSpawned(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnSmasherSpawned");

	AMission_FarmsteadFort_C_OnSmasherSpawned_Params params;
	params.Encounter = Encounter;
	params.SpawnedEnemy = SpawnedEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_RocketHasBluglo
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_RocketHasBluglo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_RocketHasBluglo");

	AMission_FarmsteadFort_C_HandleMissionEvent_RocketHasBluglo_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_OBJ_22_Activate
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_OBJ_22_Activate(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_OBJ_22_Activate");

	AMission_FarmsteadFort_C_HandleMissionEvent_OBJ_22_Activate_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_OBJ_22_Completed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_OBJ_22_Completed(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_OBJ_22_Completed");

	AMission_FarmsteadFort_C_HandleMissionEvent_OBJ_22_Completed_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OhNoFailedSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OhNoFailedSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OhNoFailedSound");

	AMission_FarmsteadFort_C_OhNoFailedSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_BlugloReminder
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_BlugloReminder(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_BlugloReminder");

	AMission_FarmsteadFort_C_HandleMissionEvent_BlugloReminder_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFortPreAttack
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StartFortPreAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFortPreAttack");

	AMission_FarmsteadFort_C_StartFortPreAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ForceStopPreEncounter
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::ForceStopPreEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ForceStopPreEncounter");

	AMission_FarmsteadFort_C_ForceStopPreEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PrepareForAirStrikeAbility
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::PrepareForAirStrikeAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PrepareForAirStrikeAbility");

	AMission_FarmsteadFort_C_PrepareForAirStrikeAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Airstrike
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::Airstrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Airstrike");

	AMission_FarmsteadFort_C_Airstrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_EnemyKilled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_EnemyKilled(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_EnemyKilled");

	AMission_FarmsteadFort_C_HandleMissionEvent_EnemyKilled_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtSurvivors
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerAtSurvivors(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtSurvivors");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtSurvivors_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AirstrikeNowOnline
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::AirstrikeNowOnline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AirstrikeNowOnline");

	AMission_FarmsteadFort_C_AirstrikeNowOnline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AirStrikeReady
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::AirStrikeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AirStrikeReady");

	AMission_FarmsteadFort_C_AirStrikeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFakeStorm
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StartFakeStorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartFakeStorm");

	AMission_FarmsteadFort_C_StartFakeStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerNearHarvestingBoundary
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerNearHarvestingBoundary(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerNearHarvestingBoundary");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerNearHarvestingBoundary_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.VortexVisibility
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::VortexVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.VortexVisibility");

	AMission_FarmsteadFort_C_VortexVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FightStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAIEncounterInfo*    Encounter                      (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::FightStarted(class UFortAIEncounterInfo* Encounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FightStarted");

	AMission_FarmsteadFort_C_FightStarted_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CinematicVortexVisibility
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::CinematicVortexVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CinematicVortexVisibility");

	AMission_FarmsteadFort_C_CinematicVortexVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipToAttackWarning
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SkipToAttackWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipToAttackWarning");

	AMission_FarmsteadFort_C_SkipToAttackWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FadePlayerCamToBlack
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::FadePlayerCamToBlack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FadePlayerCamToBlack");

	AMission_FarmsteadFort_C_FadePlayerCamToBlack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.fadeoutcam
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::fadeoutcam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.fadeoutcam");

	AMission_FarmsteadFort_C_fadeoutcam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ItemCollected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_ItemCollected(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ItemCollected");

	AMission_FarmsteadFort_C_HandleMissionEvent_ItemCollected_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.VinderTipTimer
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::VinderTipTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.VinderTipTimer");

	AMission_FarmsteadFort_C_VinderTipTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.VinderTimerWallEditing
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::VinderTimerWallEditing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.VinderTimerWallEditing");

	AMission_FarmsteadFort_C_VinderTimerWallEditing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.hint
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::hint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.hint");

	AMission_FarmsteadFort_C_hint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_WallEdited
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_WallEdited(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_WallEdited");

	AMission_FarmsteadFort_C_HandleMissionEvent_WallEdited_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ShortcutCompleteEditingObj
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::ShortcutCompleteEditingObj()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ShortcutCompleteEditingObj");

	AMission_FarmsteadFort_C_ShortcutCompleteEditingObj_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstEncounterMusicStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::FirstEncounterMusicStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstEncounterMusicStart");

	AMission_FarmsteadFort_C_FirstEncounterMusicStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstEncounterMusicCompleted
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::FirstEncounterMusicCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstEncounterMusicCompleted");

	AMission_FarmsteadFort_C_FirstEncounterMusicCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.playcavemusic
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::playcavemusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.playcavemusic");

	AMission_FarmsteadFort_C_playcavemusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OutsideMusicStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::OutsideMusicStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OutsideMusicStart");

	AMission_FarmsteadFort_C_OutsideMusicStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstFortEncounterMusicStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::FirstFortEncounterMusicStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstFortEncounterMusicStart");

	AMission_FarmsteadFort_C_FirstFortEncounterMusicStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopFirstFortEncounterMusic
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopFirstFortEncounterMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopFirstFortEncounterMusic");

	AMission_FarmsteadFort_C_StopFirstFortEncounterMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.InsideMusic
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::InsideMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.InsideMusic");

	AMission_FarmsteadFort_C_InsideMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RocketRoomMusicStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RocketRoomMusicStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RocketRoomMusicStart");

	AMission_FarmsteadFort_C_RocketRoomMusicStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RocketStartMusic
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RocketStartMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RocketStartMusic");

	AMission_FarmsteadFort_C_RocketStartMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RocketRoomDistressCallMusicStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RocketRoomDistressCallMusicStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RocketRoomDistressCallMusicStart");

	AMission_FarmsteadFort_C_RocketRoomDistressCallMusicStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.tensionmusic
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::tensionmusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.tensionmusic");

	AMission_FarmsteadFort_C_tensionmusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FinalEncounterMusicStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::FinalEncounterMusicStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FinalEncounterMusicStart");

	AMission_FarmsteadFort_C_FinalEncounterMusicStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CountdownMusicStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::CountdownMusicStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CountdownMusicStart");

	AMission_FarmsteadFort_C_CountdownMusicStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.smasherdialog
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::smasherdialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.smasherdialog");

	AMission_FarmsteadFort_C_smasherdialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.cont
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::cont()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.cont");

	AMission_FarmsteadFort_C_cont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.nice
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::nice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.nice");

	AMission_FarmsteadFort_C_nice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.excbuilding
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::excbuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.excbuilding");

	AMission_FarmsteadFort_C_excbuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.delayme
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::delayme()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.delayme");

	AMission_FarmsteadFort_C_delayme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.UniqueOBJSOund
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::UniqueOBJSOund()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.UniqueOBJSOund");

	AMission_FarmsteadFort_C_UniqueOBJSOund_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.fallback
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::fallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.fallback");

	AMission_FarmsteadFort_C_fallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CacemeustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::CacemeustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.CacemeustomEvent_1");

	AMission_FarmsteadFort_C_CacemeustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnWeaponEquippedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::OnWeaponEquippedDelegate_Event_1(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnWeaponEquippedDelegate_Event_1");

	AMission_FarmsteadFort_C_OnWeaponEquippedDelegate_Event_1_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StickSelectedMineCart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StickActive                    (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::StickSelectedMineCart(bool StickActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StickSelectedMineCart");

	AMission_FarmsteadFort_C_StickSelectedMineCart_Params params;
	params.StickActive = StickActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ItemCrafted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_ItemCrafted(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_ItemCrafted");

	AMission_FarmsteadFort_C_HandleMissionEvent_ItemCrafted_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipCrafting
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SkipCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipCrafting");

	AMission_FarmsteadFort_C_SkipCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StickSelectedMoveOn
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StickSelectedMoveOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StickSelectedMoveOn");

	AMission_FarmsteadFort_C_StickSelectedMoveOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.revealme
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::revealme()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.revealme");

	AMission_FarmsteadFort_C_revealme_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerInsideFort
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerInsideFort(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerInsideFort");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerInsideFort_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RefreshBlugloCount
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RefreshBlugloCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RefreshBlugloCount");

	AMission_FarmsteadFort_C_RefreshBlugloCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RemoveEditingVindertip
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::RemoveEditingVindertip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.RemoveEditingVindertip");

	AMission_FarmsteadFort_C_RemoveEditingVindertip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DestroyStairsVindertip
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::DestroyStairsVindertip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.DestroyStairsVindertip");

	AMission_FarmsteadFort_C_DestroyStairsVindertip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Stick Selected Harvesting Alt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StickActive                    (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::Stick_Selected_Harvesting_Alt(bool StickActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Stick Selected Harvesting Alt");

	AMission_FarmsteadFort_C_Stick_Selected_Harvesting_Alt_Params params;
	params.StickActive = StickActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockHarvestAnnoucements
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::BlockHarvestAnnoucements()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockHarvestAnnoucements");

	AMission_FarmsteadFort_C_BlockHarvestAnnoucements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.fallbacktimer
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::fallbacktimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.fallbacktimer");

	AMission_FarmsteadFort_C_fallbacktimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.endtut
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::endtut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.endtut");

	AMission_FarmsteadFort_C_endtut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.teleportplayer
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::teleportplayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.teleportplayer");

	AMission_FarmsteadFort_C_teleportplayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.isplayeratpit
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::isplayeratpit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.isplayeratpit");

	AMission_FarmsteadFort_C_isplayeratpit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkdistance
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::checkdistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkdistance");

	AMission_FarmsteadFort_C_checkdistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.activate trap marker
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::activate_trap_marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.activate trap marker");

	AMission_FarmsteadFort_C_activate_trap_marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkwalldistance
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::checkwalldistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkwalldistance");

	AMission_FarmsteadFort_C_checkwalldistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartWallMarker
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StartWallMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StartWallMarker");

	AMission_FarmsteadFort_C_StartWallMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.enableoutsidemarker
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::enableoutsidemarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.enableoutsidemarker");

	AMission_FarmsteadFort_C_enableoutsidemarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.blockdialog
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::blockdialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.blockdialog");

	AMission_FarmsteadFort_C_blockdialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtCRNavigationMarker
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerAtCRNavigationMarker(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtCRNavigationMarker");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtCRNavigationMarker_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TeleportMarker
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::TeleportMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TeleportMarker");

	AMission_FarmsteadFort_C_TeleportMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerEditModeToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayerInEditMode             (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::PlayerEditModeToggled(bool IsPlayerInEditMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerEditModeToggled");

	AMission_FarmsteadFort_C_PlayerEditModeToggled_Params params;
	params.IsPlayerInEditMode = IsPlayerInEditMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerInBuildingMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BuildModeActive                (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::PlayerInBuildingMode(bool BuildModeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.PlayerInBuildingMode");

	AMission_FarmsteadFort_C_PlayerInBuildingMode_Params params;
	params.BuildModeActive = BuildModeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.lag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnteredBuildMode              (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::lag(bool bEnteredBuildMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.lag");

	AMission_FarmsteadFort_C_lag_Params params;
	params.bEnteredBuildMode = bEnteredBuildMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopBuildingDynamicHints
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::StopBuildingDynamicHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.StopBuildingDynamicHints");

	AMission_FarmsteadFort_C_StopBuildingDynamicHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkmode
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::checkmode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkmode");

	AMission_FarmsteadFort_C_checkmode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstFortCinSkipped
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::FirstFortCinSkipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.FirstFortCinSkipped");

	AMission_FarmsteadFort_C_FirstFortCinSkipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TrapBuildingMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BuildingModeActive             (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::TrapBuildingMode(bool BuildingModeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.TrapBuildingMode");

	AMission_FarmsteadFort_C_TrapBuildingMode_Params params;
	params.BuildingModeActive = BuildingModeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockTrapAnnoucements
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::BlockTrapAnnoucements()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockTrapAnnoucements");

	AMission_FarmsteadFort_C_BlockTrapAnnoucements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.trapmode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnteredBuildMode              (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::trapmode(bool bEnteredBuildMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.trapmode");

	AMission_FarmsteadFort_C_trapmode_Params params;
	params.bEnteredBuildMode = bEnteredBuildMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.MoveFortMarker
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::MoveFortMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.MoveFortMarker");

	AMission_FarmsteadFort_C_MoveFortMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AutocancelAirstrikeNotif
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::AutocancelAirstrikeNotif()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AutocancelAirstrikeNotif");

	AMission_FarmsteadFort_C_AutocancelAirstrikeNotif_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockHarvest
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::BlockHarvest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.BlockHarvest");

	AMission_FarmsteadFort_C_BlockHarvest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_Ragnarok
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_Ragnarok(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_Ragnarok");

	AMission_FarmsteadFort_C_HandleMissionEvent_Ragnarok_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.stormadvance
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::stormadvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.stormadvance");

	AMission_FarmsteadFort_C_stormadvance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.sideattack
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::sideattack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.sideattack");

	AMission_FarmsteadFort_C_sideattack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnSmasherKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAIEncounterInfo*    Encounter                      (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::OnSmasherKilled(class UFortAIEncounterInfo* Encounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.OnSmasherKilled");

	AMission_FarmsteadFort_C_OnSmasherKilled_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtReassureSurvivor
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (Parm)
// class UFortMissionEventParams* Params                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AMission_FarmsteadFort_C::HandleMissionEvent_PlayerAtReassureSurvivor(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.HandleMissionEvent_PlayerAtReassureSurvivor");

	AMission_FarmsteadFort_C_HandleMissionEvent_PlayerAtReassureSurvivor_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ForceStopFirstMusic
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::ForceStopFirstMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ForceStopFirstMusic");

	AMission_FarmsteadFort_C_ForceStopFirstMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkdistancetorocket
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::checkdistancetorocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.checkdistancetorocket");

	AMission_FarmsteadFort_C_checkdistancetorocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnSecondSmasher
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnSecondSmasher()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnSecondSmasher");

	AMission_FarmsteadFort_C_SpawnSecondSmasher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAIEncounterInfo*    Encounter                      (Parm, ZeroConstructor, IsPlainOldData)
// class AFortAIPawn*             SpawnedEnemy                   (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::SetHealth(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SetHealth");

	AMission_FarmsteadFort_C_SetHealth_Params params;
	params.Encounter = Encounter;
	params.SpawnedEnemy = SpawnedEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnAirStrikeBurstHusks
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnAirStrikeBurstHusks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnAirStrikeBurstHusks");

	AMission_FarmsteadFort_C_SpawnAirStrikeBurstHusks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Preairstrikenc
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::Preairstrikenc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.Preairstrikenc");

	AMission_FarmsteadFort_C_Preairstrikenc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AdvanceStorm
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::AdvanceStorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.AdvanceStorm");

	AMission_FarmsteadFort_C_AdvanceStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnLobbers
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnLobbers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnLobbers");

	AMission_FarmsteadFort_C_SpawnLobbers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnSecondSmasherNow
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SpawnSecondSmasherNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SpawnSecondSmasherNow");

	AMission_FarmsteadFort_C_SpawnSecondSmasherNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SecondSmasher
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SecondSmasher()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SecondSmasher");

	AMission_FarmsteadFort_C_SecondSmasher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.dwarfs
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::dwarfs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.dwarfs");

	AMission_FarmsteadFort_C_dwarfs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipTrapTutorial
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::SkipTrapTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.SkipTrapTutorial");

	AMission_FarmsteadFort_C_SkipTrapTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.NiceDoorBro
// (BlueprintCallable, BlueprintEvent)

void AMission_FarmsteadFort_C::NiceDoorBro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.NiceDoorBro");

	AMission_FarmsteadFort_C_NiceDoorBro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ExecuteUbergraph_Mission_FarmsteadFort
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::ExecuteUbergraph_Mission_FarmsteadFort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ExecuteUbergraph_Mission_FarmsteadFort");

	AMission_FarmsteadFort_C_ExecuteUbergraph_Mission_FarmsteadFort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ActivateEventAtLevelBlueprint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_LevelBlueprintOBEvents> EventToSend                    (Parm, ZeroConstructor, IsPlainOldData)

void AMission_FarmsteadFort_C::ActivateEventAtLevelBlueprint__DelegateSignature(TEnumAsByte<Enum_LevelBlueprintOBEvents> EventToSend)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_FarmsteadFort.Mission_FarmsteadFort_C.ActivateEventAtLevelBlueprint__DelegateSignature");

	AMission_FarmsteadFort_C_ActivateEventAtLevelBlueprint__DelegateSignature_Params params;
	params.EventToSend = EventToSend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
