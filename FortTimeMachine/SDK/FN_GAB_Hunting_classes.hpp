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

// BlueprintGeneratedClass GAB_Hunting.GAB_Hunting_C
// 0x006C (0x0AAC - 0x0A40)
class UGAB_Hunting_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (Transient, DuplicateTransient)
	class UEnvQuery*                                   EQS_Hunting_Query;                                        // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EQS_Grid_Half_Size;                                       // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EQS_Density;                                              // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HuntingMoveTaskName;                                      // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortAIController*                           MyFortAIController;                                       // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      HuntingTarget;                                            // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTimeStartedHunting;                                   // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HuntingRestartDelta;                                      // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     MovementTask;                                             // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      GoalDistancesOnCompleteMove;                              // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             PawnPositionsOnCompletedMove;                             // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShouldAbortHunting;                                       // 0x0AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AA1(0x0003) MISSED OFFSET
	float                                              MinGoalDistChange;                                        // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPawnDistChange;                                        // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Hunting.GAB_Hunting_C");
		return ptr;
	}


	void UpdatePositionData(const struct FVector& NewPosition, TArray<struct FVector>* PosArray, float* MaxDistance, bool* HasValidData);
	void UpdateDistanceData(float NewDistance, TArray<float>* DistArray, float* MinValue, float* MaxValue, bool* HasValidData);
	void OnCancelled_9284CD4944DA1972DB7A98BE0A9A28C1();
	void OnInterrupted_9284CD4944DA1972DB7A98BE0A9A28C1();
	void OnComplete_9284CD4944DA1972DB7A98BE0A9A28C1();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void OnTargetPerceptionUpdated_Event_1(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void StartQuery();
	void Restart_Hunting();
	void StoreGoalDistance();
	void ExecuteUbergraph_GAB_Hunting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
