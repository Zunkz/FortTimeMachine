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

// BlueprintGeneratedClass Announce_OnboardingFortAttack.Announce_OnboardingFortAttack_C
// 0x0021 (0x0419 - 0x03F8)
class AAnnounce_OnboardingFortAttack_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               CurrentMatineeActor;                                      // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CurrentAudioComponent;                                    // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowSkipping;                                            // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_OnboardingFortAttack.Announce_OnboardingFortAttack_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStateEntered_29A3A71C4D36430BE15DCD8BF5F8BCA7();
	void OnStateEntered_45DA1A4445B919B5840D95B0C3A3C835();
	void OnClientAnnouncementStart();
	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void allowskip();
	void ExecuteUbergraph_Announce_OnboardingFortAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
