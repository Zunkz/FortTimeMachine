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

// Function Announce_IntroMovie.Announce_IntroMovie_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_IntroMovie_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.UserConstructionScript");

	AAnnounce_IntroMovie_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.OnStateEntered_49A34D794B3562C2446F3185E0B29A64
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_IntroMovie_C::OnStateEntered_49A34D794B3562C2446F3185E0B29A64()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.OnStateEntered_49A34D794B3562C2446F3185E0B29A64");

	AAnnounce_IntroMovie_C_OnStateEntered_49A34D794B3562C2446F3185E0B29A64_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.OnStateEntered_98F10EB04570852B4A9423BEAC7ACD6A
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_IntroMovie_C::OnStateEntered_98F10EB04570852B4A9423BEAC7ACD6A()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.OnStateEntered_98F10EB04570852B4A9423BEAC7ACD6A");

	AAnnounce_IntroMovie_C_OnStateEntered_98F10EB04570852B4A9423BEAC7ACD6A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_IntroMovie_C::OnClientAnnouncementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.OnClientAnnouncementStart");

	AAnnounce_IntroMovie_C_OnClientAnnouncementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_IntroMovie_C::OnClientAnnouncementStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.OnClientAnnouncementStop");

	AAnnounce_IntroMovie_C_OnClientAnnouncementStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.OnPlayerSkippedCutscene
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AAnnounce_IntroMovie_C::OnPlayerSkippedCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.OnPlayerSkippedCutscene");

	AAnnounce_IntroMovie_C_OnPlayerSkippedCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.HandleClientEvent_CinematicFinishedPlaying
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)

void AAnnounce_IntroMovie_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.HandleClientEvent_CinematicFinishedPlaying");

	AAnnounce_IntroMovie_C_HandleClientEvent_CinematicFinishedPlaying_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.allowskip
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_IntroMovie_C::allowskip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.allowskip");

	AAnnounce_IntroMovie_C_allowskip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.allowrealtimeskip
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_IntroMovie_C::allowrealtimeskip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.allowrealtimeskip");

	AAnnounce_IntroMovie_C_allowrealtimeskip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.StopCinematics
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_IntroMovie_C::StopCinematics()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.StopCinematics");

	AAnnounce_IntroMovie_C_StopCinematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.OnSkipFailsafe
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_IntroMovie_C::OnSkipFailsafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.OnSkipFailsafe");

	AAnnounce_IntroMovie_C_OnSkipFailsafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_IntroMovie.Announce_IntroMovie_C.ExecuteUbergraph_Announce_IntroMovie
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_IntroMovie_C::ExecuteUbergraph_Announce_IntroMovie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_IntroMovie.Announce_IntroMovie_C.ExecuteUbergraph_Announce_IntroMovie");

	AAnnounce_IntroMovie_C_ExecuteUbergraph_Announce_IntroMovie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
