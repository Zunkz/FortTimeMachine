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

// BlueprintGeneratedClass BP_SurvivorAnchor.BP_SurvivorAnchor_C
// 0x009C (0x106C - 0x0FD0)
class ABP_SurvivorAnchor_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SurvivorAnchorBoxMesh;                                    // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             SurvivorPawnSpawnRotationArrow;                           // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         SurvivorPawnSpawnIcon;                                    // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         SurvivorAnchorIcon;                                       // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               SurvivorAnchorBox;                                        // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // 0x1000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESurvivorAnchorHeightEnum>             SurvivorAnchorHeightInBuildingTiles;                      // 0x1001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivorAnchorWidthEnum>              SurvivorAnchorWidthInBuildingTiles;                       // 0x1002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivorAnchorMaxZMove>               SurvivorAnchorMaxZMoveInTiles;                            // 0x1003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnchorBoxCenter;                                          // 0x1004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     AnchorBoxBounds;                                          // 0x1010(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x101C(0x0004) MISSED OFFSET
	class ASurvivor_C*                                 SurvivorAnchorPawn;                                       // 0x1020(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     SurvivorPawnLocation;                                     // 0x1028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SurvivorPawnRotationWidget;                               // 0x1034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SurvivorPawnRotation;                                     // 0x1040(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x104C(0x0004) MISSED OFFSET
	class UClass*                                      SurvivorAnchorPawnClassToSpawn;                           // 0x1050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortWeaponItemDefinition*                   SurvivorWeaponDataOverride;                               // 0x1058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortTeam>                             SurvivorTeamOverride;                                     // 0x1060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortressAIType                                    SurvivorAITypeOverride;                                   // 0x1061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnASurvivor;                                           // 0x1062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x1063(0x0001) MISSED OFFSET
	float                                              AnchorEQSGridSize;                                        // 0x1064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchorEQSGridSpaceBetween;                                // 0x1068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SurvivorAnchor.BP_SurvivorAnchor_C");
		return ptr;
	}


	struct FVector GetTetheredBoxBoundsCenter();
	float GetTetheredBoxBoundsEQSGridSize();
	float GetTetheredBoxBoundsEQSSpaceBetween();
	float GetTetheredBoxBoundsHeight();
	float GetTetheredBoxBoundsWidth();
	void IsActorInsideOfAnchorBounds(class AActor** Actor, bool* InBounds);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ShowAnchorBounds();
	void ExecuteUbergraph_BP_SurvivorAnchor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
