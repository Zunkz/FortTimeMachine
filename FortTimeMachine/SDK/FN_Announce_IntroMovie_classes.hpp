#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Announce_IntroMovie.Announce_IntroMovie_C
// 0x0040 (0x0438 - 0x03F8)
class AAnnounce_IntroMovie_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                IntroMediaSource;                                         // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMatineeActor*                               CurrentMatineeActor;                                      // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     MediaEventFocus;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CinematicFinished;                                        // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowSkipping;                                            // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowSkipFailsafes;                                       // 0x0422(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0423(0x0005) MISSED OFFSET
	class UFortMediaSubtitlesPlayer*                   SubtitlePlayer;                                           // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             Transition_Sound;                                         // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_IntroMovie.Announce_IntroMovie_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStateEntered_49A34D794B3562C2446F3185E0B29A64();
	void OnStateEntered_98F10EB04570852B4A9423BEAC7ACD6A();
	void OnClientAnnouncementStart();
	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void allowskip();
	void allowrealtimeskip();
	void StopCinematics();
	void OnSkipFailsafe();
	void ExecuteUbergraph_Announce_IntroMovie(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
