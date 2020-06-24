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

// Function Onboarding_Sign.Onboarding_Sign_C.OnRep_Glow
struct AOnboarding_Sign_C_OnRep_Glow_Params
{
};

// Function Onboarding_Sign.Onboarding_Sign_C.UserConstructionScript
struct AOnboarding_Sign_C_UserConstructionScript_Params
{
};

// Function Onboarding_Sign.Onboarding_Sign_C.ReceiveBeginPlay
struct AOnboarding_Sign_C_ReceiveBeginPlay_Params
{
};

// Function Onboarding_Sign.Onboarding_Sign_C.HandleMissionEvent_OBJ_8_Activate
struct AOnboarding_Sign_C_HandleMissionEvent_OBJ_8_Activate_Params
{
	struct FGuid                                       MissionGuid;                                              // (Parm, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (Parm)
	class UFortMissionEventParams*                     Params;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Onboarding_Sign.Onboarding_Sign_C.ExecuteUbergraph_Onboarding_Sign
struct AOnboarding_Sign_C_ExecuteUbergraph_Onboarding_Sign_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
