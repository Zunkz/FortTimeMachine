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

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.NPC_LockInPlace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LockedAndLooking               (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerPawn*         PlayerPawnRef                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScriptedSurvivorParent_C::NPC_LockInPlace(bool LockedAndLooking, class AFortPlayerPawn* PlayerPawnRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.NPC_LockInPlace");

	ABP_ScriptedSurvivorParent_C_NPC_LockInPlace_Params params;
	params.LockedAndLooking = LockedAndLooking;
	params.PlayerPawnRef = PlayerPawnRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ScriptedSurvivorParent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.UserConstructionScript");

	ABP_ScriptedSurvivorParent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnFailure_B72C00F44AB6CBD404A3C6AE54B68963
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptedSurvivorParent_C::OnFailure_B72C00F44AB6CBD404A3C6AE54B68963()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnFailure_B72C00F44AB6CBD404A3C6AE54B68963");

	ABP_ScriptedSurvivorParent_C_OnFailure_B72C00F44AB6CBD404A3C6AE54B68963_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnCanceled_B72C00F44AB6CBD404A3C6AE54B68963
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptedSurvivorParent_C::OnCanceled_B72C00F44AB6CBD404A3C6AE54B68963()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnCanceled_B72C00F44AB6CBD404A3C6AE54B68963");

	ABP_ScriptedSurvivorParent_C_OnCanceled_B72C00F44AB6CBD404A3C6AE54B68963_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnSuccess_B72C00F44AB6CBD404A3C6AE54B68963
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptedSurvivorParent_C::OnSuccess_B72C00F44AB6CBD404A3C6AE54B68963()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnSuccess_B72C00F44AB6CBD404A3C6AE54B68963");

	ABP_ScriptedSurvivorParent_C_OnSuccess_B72C00F44AB6CBD404A3C6AE54B68963_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnFailure_A0B57B2E40DEEDA1FDAAED9076C6CBB6
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptedSurvivorParent_C::OnFailure_A0B57B2E40DEEDA1FDAAED9076C6CBB6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnFailure_A0B57B2E40DEEDA1FDAAED9076C6CBB6");

	ABP_ScriptedSurvivorParent_C_OnFailure_A0B57B2E40DEEDA1FDAAED9076C6CBB6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnCanceled_A0B57B2E40DEEDA1FDAAED9076C6CBB6
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptedSurvivorParent_C::OnCanceled_A0B57B2E40DEEDA1FDAAED9076C6CBB6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnCanceled_A0B57B2E40DEEDA1FDAAED9076C6CBB6");

	ABP_ScriptedSurvivorParent_C_OnCanceled_A0B57B2E40DEEDA1FDAAED9076C6CBB6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnSuccess_A0B57B2E40DEEDA1FDAAED9076C6CBB6
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptedSurvivorParent_C::OnSuccess_A0B57B2E40DEEDA1FDAAED9076C6CBB6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnSuccess_A0B57B2E40DEEDA1FDAAED9076C6CBB6");

	ABP_ScriptedSurvivorParent_C_OnSuccess_A0B57B2E40DEEDA1FDAAED9076C6CBB6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.Interaction
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptedSurvivorParent_C::Interaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.Interaction");

	ABP_ScriptedSurvivorParent_C_Interaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             AI                             (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerController*   InteractingPlayerController    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScriptedSurvivorParent_C::CustomEvent_1(class AFortAIPawn* AI, class AFortPlayerController* InteractingPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.CustomEvent_1");

	ABP_ScriptedSurvivorParent_C_CustomEvent_1_Params params;
	params.AI = AI;
	params.InteractingPlayerController = InteractingPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_172_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ScriptedSurvivorParent_C::BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_172_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_172_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ScriptedSurvivorParent_C_BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_172_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_174_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScriptedSurvivorParent_C::BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_174_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_174_ComponentEndOverlapSignature__DelegateSignature");

	ABP_ScriptedSurvivorParent_C_BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_174_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ScriptedSurvivorParent_C::BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ScriptedSurvivorParent_C_BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_227_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScriptedSurvivorParent_C::BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_227_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_227_ComponentEndOverlapSignature__DelegateSignature");

	ABP_ScriptedSurvivorParent_C_BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_227_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnMatchStarted
// (Event, Public, BlueprintEvent)

void ABP_ScriptedSurvivorParent_C::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnMatchStarted");

	ABP_ScriptedSurvivorParent_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.ExecuteUbergraph_BP_ScriptedSurvivorParent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ScriptedSurvivorParent_C::ExecuteUbergraph_BP_ScriptedSurvivorParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.ExecuteUbergraph_BP_ScriptedSurvivorParent");

	ABP_ScriptedSurvivorParent_C_ExecuteUbergraph_BP_ScriptedSurvivorParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
