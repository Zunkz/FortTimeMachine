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

// BlueprintGeneratedClass B_FDP_SentryGun.B_FDP_SentryGun_C
// 0x0030 (0x0560 - 0x0530)
class AB_FDP_SentryGun_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        S_Turret_Aim_Range;                                       // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        AmmoMesh;                                                 // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Gun;                                                      // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           CollisionCapsule;                                         // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_FDP_SentryGun.B_FDP_SentryGun_C");
		return ptr;
	}


	void SetupMIDForMeshComponent(class UStaticMeshComponent* MeshComp);
	void UserConstructionScript();
	void OnInitializeDecoPreview(class ABuildingActor** NewBuildingActor, class UFortDecoItemDefinition** NewDecoItemDefinition);
	void ExecuteUbergraph_B_FDP_SentryGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
