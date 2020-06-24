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

// BlueprintGeneratedClass Defender.Defender_C
// 0x0013 (0x1C5B - 0x1C48)
class ADefender_C : public ASurvivor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C48(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                Event_NPCAbilityNonAttackTeleportOut;                     // 0x1C50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Place_Via_Trap_;                                          // 0x1C58(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTeleportingIntoDefenderTrap;                           // 0x1C59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBeingUnsummoned;                                        // 0x1C5A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Defender.Defender_C");
		return ptr;
	}


	bool OnOutsideOfTetherBeyondMaxTimeAllowed();
	void SpawnSurvivorAnchor(const struct FVector& SurvivorAnchorSpawnLocation, class ABP_SurvivorAnchor_C** SpawnedSurvivorAnchor);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDefenderTrapEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void SpawnSurvivorAnchorWhenReady();
	void OnDefenderTrapSet(class ABuildingTrapDefender** OldDefenderTrap);
	void ExecuteUbergraph_Defender(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
