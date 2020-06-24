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

// BlueprintGeneratedClass LayoutBuildRequirement.LayoutBuildRequirement_C
// 0x0009 (0x1029 - 0x1020)
class ALayoutBuildRequirement_C : public ABuildingLayoutRequirement
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1020(0x0008) (Transient, DuplicateTransient)
	bool                                               bLayoutSatisfied;                                         // 0x1028(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LayoutBuildRequirement.LayoutBuildRequirement_C");
		return ptr;
	}


	void UserConstructionScript();
	void Event_OnLayoutSatisfied(class ABuildingLayoutRequirement* LayoutRequirement, class ABuildingSMActor* SatisfyingBuildingSMActor);
	void Event_OnLayoutUnSatisfied(class ABuildingLayoutRequirement* LayoutRequirement, class ABuildingSMActor* SatisfyingBuildingSMActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LayoutBuildRequirement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
