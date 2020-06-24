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

// BlueprintGeneratedClass SurvivorAnchorTest.SurvivorAnchorTest_C
// 0x0006 (0x00A6 - 0x00A0)
class USurvivorAnchorTest_C : public UBTDecorator_BlueprintBase
{
public:
	bool                                               CheckIfAnchorIsValid;                                     // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AnchorShouldBeValid;                                      // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CheckIfSurvivorIsInAnchorBounds;                          // 0x00A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SurvivorShouldBeInAnchorBounds;                           // 0x00A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CheckIfGoalActorIsInAnchorBounds;                         // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GoalActorShouldBeInAnchorBounds;                          // 0x00A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SurvivorAnchorTest.SurvivorAnchorTest_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
