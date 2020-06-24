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

// BlueprintGeneratedClass ShielderSpringArm.ShielderSpringArm_C
// 0x0078 (0x0400 - 0x0388)
class AShielderSpringArm_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_ShielderSphere;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SphereOffset;                                             // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_ShielderBeam;                                           // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             ShielderAttachArrow;                                      // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            SpringArmProbeSizeDebugSphere;                            // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             SpringArmRotationArrow;                                   // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              ShielderInterpSpeedToNewSpringArmLocation;                // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   AttachPawn;                                               // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShieldScaleFactor;                                        // 0x03E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class AShielderPawn_C*                             Shielder;                                                 // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ShieldMID;                                                // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShielderSpringArm.ShielderSpringArm_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void HitFlashFX();
	void ExecuteUbergraph_ShielderSpringArm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
