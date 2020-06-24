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

// Function Announce_IntroMovie.Announce_IntroMovie_C.UserConstructionScript
struct AAnnounce_IntroMovie_C_UserConstructionScript_Params
{
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.OnStateEntered_49A34D794B3562C2446F3185E0B29A64
struct AAnnounce_IntroMovie_C_OnStateEntered_49A34D794B3562C2446F3185E0B29A64_Params
{
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.OnStateEntered_98F10EB04570852B4A9423BEAC7ACD6A
struct AAnnounce_IntroMovie_C_OnStateEntered_98F10EB04570852B4A9423BEAC7ACD6A_Params
{
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.OnClientAnnouncementStart
struct AAnnounce_IntroMovie_C_OnClientAnnouncementStart_Params
{
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.OnClientAnnouncementStop
struct AAnnounce_IntroMovie_C_OnClientAnnouncementStop_Params
{
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.OnPlayerSkippedCutscene
struct AAnnounce_IntroMovie_C_OnPlayerSkippedCutscene_Params
{
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.HandleClientEvent_CinematicFinishedPlaying
struct AAnnounce_IntroMovie_C_HandleClientEvent_CinematicFinishedPlaying_Params
{
	class UObject*                                     EventSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.allowskip
struct AAnnounce_IntroMovie_C_allowskip_Params
{
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.allowrealtimeskip
struct AAnnounce_IntroMovie_C_allowrealtimeskip_Params
{
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.StopCinematics
struct AAnnounce_IntroMovie_C_StopCinematics_Params
{
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.OnSkipFailsafe
struct AAnnounce_IntroMovie_C_OnSkipFailsafe_Params
{
};

// Function Announce_IntroMovie.Announce_IntroMovie_C.ExecuteUbergraph_Announce_IntroMovie
struct AAnnounce_IntroMovie_C_ExecuteUbergraph_Announce_IntroMovie_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
