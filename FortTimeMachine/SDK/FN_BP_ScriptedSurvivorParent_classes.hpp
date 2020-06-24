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

// BlueprintGeneratedClass BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C
// 0x00C8 (0x0908 - 0x0840)
class ABP_ScriptedSurvivorParent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               SpawnTrigger;                                             // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               ConversationTrigger;                                      // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             SpawnTransform;                                           // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FStruct_SurvivorScriptedAbilities           SurvivorStruct;                                           // 0x0870(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ASurvivor_C*                                 SurvivorRef;                                              // 0x08B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AppearanceOverideName;                                    // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortConversation*                           InteractionConversation_2;                                // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortConversation*                           NearbyConversation_2;                                     // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldTalkWhenNearby;                                     // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFacePlayer;                                         // 0x08D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeInteractedWith;                                      // 0x08DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x08DB(0x0001) MISSED OFFSET
	struct FVector                                     SpawnTriggerSize;                                         // 0x08DC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ConversationTriggerSize;                                  // 0x08E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotateTriggers;                                           // 0x08F4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerRef;                                                // 0x0900(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScriptedSurvivorParent.BP_ScriptedSurvivorParent_C");
		return ptr;
	}


	void NPC_LockInPlace(bool LockedAndLooking, class AFortPlayerPawn* PlayerPawnRef);
	void UserConstructionScript();
	void OnFailure_B72C00F44AB6CBD404A3C6AE54B68963();
	void OnCanceled_B72C00F44AB6CBD404A3C6AE54B68963();
	void OnSuccess_B72C00F44AB6CBD404A3C6AE54B68963();
	void OnFailure_A0B57B2E40DEEDA1FDAAED9076C6CBB6();
	void OnCanceled_A0B57B2E40DEEDA1FDAAED9076C6CBB6();
	void OnSuccess_A0B57B2E40DEEDA1FDAAED9076C6CBB6();
	void Interaction();
	void CustomEvent_1(class AFortAIPawn* AI, class AFortPlayerController* InteractingPlayerController);
	void BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_172_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SpawnTrigger_K2Node_ComponentBoundEvent_174_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ConversationTrigger_K2Node_ComponentBoundEvent_227_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnMatchStarted();
	void ExecuteUbergraph_BP_ScriptedSurvivorParent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
