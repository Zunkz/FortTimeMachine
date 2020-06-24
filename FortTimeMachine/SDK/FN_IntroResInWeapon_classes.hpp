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

// BlueprintGeneratedClass IntroResInWeapon.IntroResInWeapon_C
// 0x0120 (0x04A8 - 0x0388)
class AIntroResInWeapon_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Original_Skeletal_Mesh;                                   // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_FlowingBackward_4DCB2DD04FE3128B4B819EB8F67477B0;// 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_LightIntensity_4DCB2DD04FE3128B4B819EB8F67477B0;// 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_zHieght_4DCB2DD04FE3128B4B819EB8F67477B0;      // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_4DCB2DD04FE3128B4B819EB8F67477B0;   // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharacterSpawnInTimeline_FlowingBackward_D8FC00EE4973060BB2A4B2B5458A54FC;// 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CharacterSpawnInTimeline_LightIntensity_D8FC00EE4973060BB2A4B2B5458A54FC;// 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CharacterSpawnInTimeline_zHieght_D8FC00EE4973060BB2A4B2B5458A54FC;// 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CharacterSpawnInTimeline__Direction_D8FC00EE4973060BB2A4B2B5458A54FC;// 0x03CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CharacterSpawnInTimeline;                                 // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Target_Mesh;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh_Duplicate;                                  // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Gun_True;                                                 // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        Container_Mesh;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoundsRadius;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CharacterSpawn_Particle;                                  // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MIDArray;                                                 // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     World_location_for_the_dissolve_location;                 // 0x0418(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Current_MID;                                              // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Head_Space;                                               // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Leg_Space;                                                // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              light_intensity;                                          // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Number_of_Base_skeletal_mesh_materials;                   // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FirstPassComplete;                                        // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewVar_2;                                                 // 0x0444(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_3;                                                 // 0x0450(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FTransform                                  NewVar_4;                                                 // 0x0460(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Progress;                                                 // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightModulation;                                          // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Play_Rate;                                                // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Override_Weapon_Material;                                 // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class UMaterialInterface*                          Optional_Weapon_Override;                                 // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IntroResInWeapon.IntroResInWeapon_C");
		return ptr;
	}


	void Get_Grip_Position_And_Radius_From_Grip(class USkeletalMeshComponent* Original_Skeletal_Mesh, struct FLinearColor* GripPositionAndRadiusFromTheGrip);
	void UpdateMaterialInstanceProperties(bool ConstructionScript);
	void UserConstructionScript();
	void CharacterSpawnInTimeline__FinishedFunc();
	void CharacterSpawnInTimeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Stop_Particles();
	void StartParticles();
	void BeginWeaponAnimation();
	void ExecuteUbergraph_IntroResInWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
