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

// BlueprintGeneratedClass BP_AtlasStorm_Child_OffsetEye.BP_AtlasStorm_Child_OffsetEye_C
// 0x0077 (0x06E0 - 0x0669)
class ABP_AtlasStorm_Child_OffsetEye_C : public ABP_AtlasStorm_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0670(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cylinder;                                                 // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StormEyeStartLocation;                                    // 0x0680(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StormEyeEndLocation;                                      // 0x068C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StartRot;                                                 // 0x0698(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    EndRot;                                                   // 0x06A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  NewVar_0_1;                                               // 0x06B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AtlasStorm_Child_OffsetEye.BP_AtlasStorm_Child_OffsetEye_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AtlasStorm_Child_OffsetEye(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
