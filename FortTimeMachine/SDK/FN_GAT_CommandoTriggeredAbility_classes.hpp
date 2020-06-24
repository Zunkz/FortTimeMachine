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

// BlueprintGeneratedClass GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C
// 0x00BA (0x0B0A - 0x0A50)
class UGAT_CommandoTriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (Transient, DuplicateTransient)
	struct FGameplayEventData                          Event_Data;                                               // 0x0A58(0x00A8) (Edit, BlueprintVisible)
	class APlayerPawn_Commando_C*                      CommandoPlayerPawn;                                       // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               isAutoCommitted;                                          // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStaminaLockedOut;                                       // 0x0B09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAT_CommandoTriggeredAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
