#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.NPC_LockInPlace
struct ABP_ScriptedSurvivorParent_C_NPC_LockInPlace_Params
{
	bool                                               LockedAndLooking;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawnRef;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.UserConstructionScript
struct ABP_ScriptedSurvivorParent_C_UserConstructionScript_Params
{
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnFailure_B72C00F44AB6CBD404A3C6AE54B68963
struct ABP_ScriptedSurvivorParent_C_OnFailure_B72C00F44AB6CBD404A3C6AE54B68963_Params
{
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnCanceled_B72C00F44AB6CBD404A3C6AE54B68963
struct ABP_ScriptedSurvivorParent_C_OnCanceled_B72C00F44AB6CBD404A3C6AE54B68963_Params
{
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnSuccess_B72C00F44AB6CBD404A3C6AE54B68963
struct ABP_ScriptedSurvivorParent_C_OnSuccess_B72C00F44AB6CBD404A3C6AE54B68963_Params
{
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnFailure_A0B57B2E40DEEDA1FDAAED9076C6CBB6
struct ABP_ScriptedSurvivorParent_C_OnFailure_A0B57B2E40DEEDA1FDAAED9076C6CBB6_Params
{
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnCanceled_A0B57B2E40DEEDA1FDAAED9076C6CBB6
struct ABP_ScriptedSurvivorParent_C_OnCanceled_A0B57B2E40DEEDA1FDAAED9076C6CBB6_Params
{
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnSuccess_A0B57B2E40DEEDA1FDAAED9076C6CBB6
struct ABP_ScriptedSurvivorParent_C_OnSuccess_A0B57B2E40DEEDA1FDAAED9076C6CBB6_Params
{
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.Interaction
struct ABP_ScriptedSurvivorParent_C_Interaction_Params
{
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.CustomEvent_1
struct ABP_ScriptedSurvivorParent_C_CustomEvent_1_Params
{
	class AFortAIPawn*                                 AI;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerController*                       InteractingPlayerController;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_172_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ScriptedSurvivorParent_C_BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_172_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_174_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ScriptedSurvivorParent_C_BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_174_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ScriptedSurvivorParent_C_BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_227_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ScriptedSurvivorParent_C_BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_227_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.OnMatchStarted
struct ABP_ScriptedSurvivorParent_C_OnMatchStarted_Params
{
};

// Function BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C.ExecuteUbergraph_BP_ScriptedSurvivorParent
struct ABP_ScriptedSurvivorParent_C_ExecuteUbergraph_BP_ScriptedSurvivorParent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
