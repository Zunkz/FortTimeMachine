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

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.VinderTipFaceClients
struct ABP_VinderTip_Tutorial_C_VinderTipFaceClients_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.OnRep_HasBeenPlayed
struct ABP_VinderTip_Tutorial_C_OnRep_HasBeenPlayed_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.SetPlayed
struct ABP_VinderTip_Tutorial_C_SetPlayed_Params
{
	bool                                               HasBeenPlayed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.CleanupMovieData
struct ABP_VinderTip_Tutorial_C_CleanupMovieData_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.OnRep_IsActive
struct ABP_VinderTip_Tutorial_C_OnRep_IsActive_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.Analytics
struct ABP_VinderTip_Tutorial_C_Analytics_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.Interaction
struct ABP_VinderTip_Tutorial_C_Interaction_Params
{
	bool                                               CanPlayerInteract;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.SetWhichVinderTipToPlay
struct ABP_VinderTip_Tutorial_C_SetWhichVinderTipToPlay_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BlueprintGetInteractionString
struct ABP_VinderTip_Tutorial_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BlueprintCanInteract
struct ABP_VinderTip_Tutorial_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.UserConstructionScript
struct ABP_VinderTip_Tutorial_C_UserConstructionScript_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BlueprintOnInteract
struct ABP_VinderTip_Tutorial_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.PlayVindertipOnClients
struct ABP_VinderTip_Tutorial_C_PlayVindertipOnClients_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.VindertipFinishedPlaying
struct ABP_VinderTip_Tutorial_C_VindertipFinishedPlaying_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.MovieFinished
struct ABP_VinderTip_Tutorial_C_MovieFinished_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ResetPlayOnce
struct ABP_VinderTip_Tutorial_C_ResetPlayOnce_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_78_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_VinderTip_Tutorial_C_BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_78_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_83_ComponentEndOverlapSignature__DelegateSignature
struct ABP_VinderTip_Tutorial_C_BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_83_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.FadeAudioIn
struct ABP_VinderTip_Tutorial_C_FadeAudioIn_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.FadeAudioOut
struct ABP_VinderTip_Tutorial_C_FadeAudioOut_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.UpdateVinderTipMovie
struct ABP_VinderTip_Tutorial_C_UpdateVinderTipMovie_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ResetVinderTipColor
struct ABP_VinderTip_Tutorial_C_ResetVinderTipColor_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.FaceClients
struct ABP_VinderTip_Tutorial_C_FaceClients_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.Face
struct ABP_VinderTip_Tutorial_C_Face_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.PauseFaceTimer
struct ABP_VinderTip_Tutorial_C_PauseFaceTimer_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ReceiveBeginPlay
struct ABP_VinderTip_Tutorial_C_ReceiveBeginPlay_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.SpawnInEffects
struct ABP_VinderTip_Tutorial_C_SpawnInEffects_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.PlayVinderTip
struct ABP_VinderTip_Tutorial_C_PlayVinderTip_Params
{
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.VinderTipMediaOpened
struct ABP_VinderTip_Tutorial_C_VinderTipMediaOpened_Params
{
	struct FString                                     OpenedUrl;                                                // (Parm, ZeroConstructor)
};

// Function BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C.ExecuteUbergraph_BP_VinderTip_Tutorial
struct ABP_VinderTip_Tutorial_C_ExecuteUbergraph_BP_VinderTip_Tutorial_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
