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

// BlueprintGeneratedClass Announce_OnboardingFortMonsterAttack.Announce_OnboardingFortMonsterAttack_C
// 0x0021 (0x0419 - 0x03F8)
class AAnnounce_OnboardingFortMonsterAttack_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               CurrentMatineeActor;                                      // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CurrentAudioComponent;                                    // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowSkipping;                                            // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_OnboardingFortMonsterAttack.Announce_OnboardingFortMonsterAttack_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStateEntered_EAEE4C10479AF484DD400C9E07576B3D();
	void OnStateEntered_AABDD51444E61E72AA760B9EB12F35D1();
	void OnClientAnnouncementStart();
	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void SkipNow();
	void ExecuteUbergraph_Announce_OnboardingFortMonsterAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
