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

// BlueprintGeneratedClass OB_Cave_Torch.OB_Cave_Torch_C
// 0x00DC (0x10AC - 0x0FD0)
class AOB_Cave_Torch_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_FireFlies;                                              // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        Additional_Pointlight;                                    // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Throw_Sound;                                              // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Place_Sound;                                              // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Damage_Box_collision;                                     // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_GlowTorch;                                              // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x1008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        S_GlowStick;                                              // 0x1010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box_Collision;                                            // 0x1018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               destroy;                                                  // 0x1020(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1021(0x0003) MISSED OFFSET
	float                                              MaxSlope;                                                 // 0x1024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // 0x1028(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ParticleColor;                                            // 0x1038(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GlowStick_Mat;                                            // 0x1048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                GlowStickColor;                                           // 0x1050(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              NewVar_1;                                                 // 0x1060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Kill_Radius;                                              // 0x1070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Additional_Light;                                         // 0x1074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1075(0x0003) MISSED OFFSET
	float                                              Additional_Light_Radius;                                  // 0x1078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Additional_Light_Z_Offset;                                // 0x107C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Additional_Light_Color_Override;                          // 0x1080(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Additional_Light_Use_Color_Override;                      // 0x1090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1091(0x0003) MISSED OFFSET
	float                                              Additional_Light_Intensity;                               // 0x1094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AdditionalLightCastShadows;                               // 0x1098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PointLightCastShadow;                                     // 0x1099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x109A(0x0002) MISSED OFFSET
	float                                              PointLightVolumeScattering;                               // 0x109C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Fireflies;                                                // 0x10A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireflyChance;                                            // 0x10A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OB_Cave_Torch.OB_Cave_Torch_C");
		return ptr;
	}


	void OnRep_destroy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void CheckSpawnFireflies();
	void ExecuteUbergraph_OB_Cave_Torch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
