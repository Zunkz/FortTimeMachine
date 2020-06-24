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

// BlueprintGeneratedClass GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C
// 0x0041 (0x0A81 - 0x0A40)
class UGAB_DefenderTeleportIn_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      BP_VictoryDrone;                                          // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATrap_Floor_Defender_Master_C*               MyTrap;                                                   // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DroneLifespan;                                            // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A5C(0x0004) MISSED OFFSET
	struct FName                                       TeleportedInSpeechEvent;                                  // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TeleportInLocation;                                       // 0x0A68(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	class ADefender_C*                                 MyDefender;                                               // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugTeleportEQSQuery;                                   // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_DefenderTeleportIn.GAB_DefenderTeleportIn_C");
		return ptr;
	}


	void Completed_AB4032854FBBB4B8A040B49C764FCC63(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_AB4032854FBBB4B8A040B49C764FCC63(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_AB4032854FBBB4B8A040B49C764FCC63(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_77E3180049F2EF461DEF169ADDF46A93();
	void K2_OnEndAbility();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void FinishTeleportIn();
	void RetryTeleportIn();
	void OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void ExecuteUbergraph_GAB_DefenderTeleportIn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
