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

// BlueprintGeneratedClass Announce_RocketLaunchCine.Announce_RocketLaunchCine_C
// 0x0018 (0x0410 - 0x03F8)
class AAnnounce_RocketLaunchCine_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               CurrentMatineeActor;                                      // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_RocketLaunchCine.Announce_RocketLaunchCine_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStateEntered_507F15634A4D40DA75DEF0A4477B3F5E();
	void OnClientAnnouncementStart();
	void OnClientAnnouncementStop();
	void ExecuteUbergraph_Announce_RocketLaunchCine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
