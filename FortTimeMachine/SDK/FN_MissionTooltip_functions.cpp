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

// Function MissionTooltip.MissionTooltip_C.HandleGameplayModifiers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers              (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMissionTooltip_C::HandleGameplayModifiers(TArray<class UFortGameplayModifierItemDefinition*>* GameplayModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTooltip.MissionTooltip_C.HandleGameplayModifiers");

	UMissionTooltip_C_HandleGameplayModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayModifiers != nullptr)
		*GameplayModifiers = params.GameplayModifiers;
}


// Function MissionTooltip.MissionTooltip_C.HandleMissionRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionTooltip_C::HandleMissionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTooltip.MissionTooltip_C.HandleMissionRewards");

	UMissionTooltip_C_HandleMissionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTooltip.MissionTooltip_C.UpdateMissionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Hex_PARENT_C*        Mission_Details                (Parm, ZeroConstructor, IsPlainOldData)

void UMissionTooltip_C::UpdateMissionInfo(class ABP_Hex_PARENT_C* Mission_Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTooltip.MissionTooltip_C.UpdateMissionInfo");

	UMissionTooltip_C_UpdateMissionInfo_Params params;
	params.Mission_Details = Mission_Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTooltip.MissionTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionTooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTooltip.MissionTooltip_C.Construct");

	UMissionTooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTooltip.MissionTooltip_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InitObject                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionTooltip_C::InitFromObject(class UObject* InitObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTooltip.MissionTooltip_C.InitFromObject");

	UMissionTooltip_C_InitFromObject_Params params;
	params.InitObject = InitObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTooltip.MissionTooltip_C.ExecuteUbergraph_MissionTooltip
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMissionTooltip_C::ExecuteUbergraph_MissionTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTooltip.MissionTooltip_C.ExecuteUbergraph_MissionTooltip");

	UMissionTooltip_C_ExecuteUbergraph_MissionTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
