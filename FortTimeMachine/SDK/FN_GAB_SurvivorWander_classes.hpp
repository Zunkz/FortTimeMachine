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

// BlueprintGeneratedClass GAB_SurvivorWander.GAB_SurvivorWander_C
// 0x0058 (0x0A98 - 0x0A40)
class UGAB_SurvivorWander_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityEnding;                                            // 0x0A49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0A4A(0x0006) MISSED OFFSET
	class UEnvQuery*                                   EQS_AnchorWander;                                         // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASurvivor_C*                                 SurvivorPawn;                                             // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WanderLocation;                                           // 0x0A60(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WaitTimeAfterWanderMin;                                   // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaitTimeAfterWanderMax;                                   // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	TArray<struct FVector>                             EQSResults;                                               // 0x0A78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SetFocalPointToAbilityTargetWhileMoving;                  // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSurvivorInsideOfAnchorBounds;                           // 0x0A89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0A8A(0x0006) MISSED OFFSET
	class UFortAbilityTask_MoveAI*                     WanderMove;                                               // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurvivorWander.GAB_SurvivorWander_C");
		return ptr;
	}


	void OnFinish_46520BF64782D787A829259B1AEBC2F9();
	void OnCancelled_823C4D1641576DFB48835EA7477D7A9D();
	void OnInterrupted_823C4D1641576DFB48835EA7477D7A9D();
	void OnComplete_823C4D1641576DFB48835EA7477D7A9D();
	void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void K2_OnEndAbility();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_SurvivorWander(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
