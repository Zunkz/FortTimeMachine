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

// Function mToD_FoundMix.mToD_FoundMix_C.UserConstructionScript
struct AmToD_FoundMix_C_UserConstructionScript_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.ReceiveBeginPlay
struct AmToD_FoundMix_C_ReceiveBeginPlay_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.Morning_Start
struct AmToD_FoundMix_C_Morning_Start_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.Day_Start
struct AmToD_FoundMix_C_Day_Start_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.Evening_Start
struct AmToD_FoundMix_C_Evening_Start_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.Night_Start
struct AmToD_FoundMix_C_Night_Start_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.PlayCrossfadeAB
struct AmToD_FoundMix_C_PlayCrossfadeAB_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.PlayCrossfadeBA
struct AmToD_FoundMix_C_PlayCrossfadeBA_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.BndEvt__TriggerRange_K2Node_ComponentBoundEvent_104_ComponentBeginOverlapSignature__DelegateSignature
struct AmToD_FoundMix_C_BndEvt__TriggerRange_K2Node_ComponentBoundEvent_104_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function mToD_FoundMix.mToD_FoundMix_C.BndEvt__TriggerRange_K2Node_ComponentBoundEvent_109_ComponentEndOverlapSignature__DelegateSignature
struct AmToD_FoundMix_C_BndEvt__TriggerRange_K2Node_ComponentBoundEvent_109_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function mToD_FoundMix.mToD_FoundMix_C.Update attenuation
struct AmToD_FoundMix_C_Update_attenuation_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.PlayRandomSounds
struct AmToD_FoundMix_C_PlayRandomSounds_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.StopRandomSounds
struct AmToD_FoundMix_C_StopRandomSounds_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.Entering_subzone
struct AmToD_FoundMix_C_Entering_subzone_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.Leaving_subzone
struct AmToD_FoundMix_C_Leaving_subzone_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.ActorDestroyedSignature__DelegateSignature_Event
struct AmToD_FoundMix_C_ActorDestroyedSignature__DelegateSignature_Event_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function mToD_FoundMix.mToD_FoundMix_C.SetupRoofs
struct AmToD_FoundMix_C_SetupRoofs_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.ManualFadeOut
struct AmToD_FoundMix_C_ManualFadeOut_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.FadeoutAudio
struct AmToD_FoundMix_C_FadeoutAudio_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.FadeinAudio
struct AmToD_FoundMix_C_FadeinAudio_Params
{
};

// Function mToD_FoundMix.mToD_FoundMix_C.ExecuteUbergraph_mToD_FoundMix
struct AmToD_FoundMix_C_ExecuteUbergraph_mToD_FoundMix_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
