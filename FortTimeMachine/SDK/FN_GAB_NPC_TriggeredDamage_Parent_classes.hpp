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

// BlueprintGeneratedClass GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C
// 0x0058 (0x0A98 - 0x0A40)
class UGAB_NPC_TriggeredDamage_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GE_TriggeredDamage_VS_Pawns;                              // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AFortAIPawn*                                 TriggeredDamageAIPawn;                                    // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TriggeredDamageTarget;                                    // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggeredDamageMagnitude;                                 // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A64(0x0004) MISSED OFFSET
	struct FGameplayAbilityTargetDataHandle            TriggeredDamageTargetData;                                // 0x0A68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_TriggeredDamage_VS_Buildings;                          // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                TriggeredDamageAbilityTriggerEventTag;                    // 0x0A90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_NPC_TriggeredDamage_Parent.GAB_NPC_TriggeredDamage_Parent_C");
		return ptr;
	}


	void TriggeredDamageBuilding(class ABuildingSMActor* TargetBuildingSM_Actor);
	void TriggeredDamagePawn(class AFortPawn* TargetFortPawn);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_NPC_TriggeredDamage_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
