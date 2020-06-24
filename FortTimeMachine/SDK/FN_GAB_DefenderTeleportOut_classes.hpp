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

// BlueprintGeneratedClass GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C
// 0x0030 (0x0A70 - 0x0A40)
class UGAB_DefenderTeleportOut_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      BP_VictoryDrone;                                          // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATrap_Floor_Defender_Master_C*               MyTrap;                                                   // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Event_NPCAbilityNonAttackTeleportIn;                      // 0x0A58(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DroneLifespan;                                            // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A64(0x0004) MISSED OFFSET
	struct FName                                       TeleportOutDefenderSpeechEvent;                           // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_DefenderTeleportOut.GAB_DefenderTeleportOut_C");
		return ptr;
	}


	void Completed_50776FD24FD2018ECF8A639C63CF78FD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_50776FD24FD2018ECF8A639C63CF78FD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_50776FD24FD2018ECF8A639C63CF78FD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_B28F01814A0C99AE17678C879A72D408();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void K2_OnEndAbility();
	void SpawnDrone();
	void ExecuteUbergraph_GAB_DefenderTeleportOut(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
