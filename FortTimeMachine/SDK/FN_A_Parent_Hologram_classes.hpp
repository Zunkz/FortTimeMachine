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

// BlueprintGeneratedClass A_Parent_Hologram.A_Parent_Hologram_C
// 0x0261 (0x1231 - 0x0FD0)
class AA_Parent_Hologram_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_ArrowInteraction;                                       // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             VinderTip_DeActivate_Cue;                                 // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             VinderTip_Activate_Cue;                                   // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               InteractBox;                                              // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_6D3CDB3A4AE0A1F7EE9569A9F946A483;   // 0x0FF8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6D3CDB3A4AE0A1F7EE9569A9F946A483;   // 0x0FFC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0FFD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              wobble_NewTrack_0_26E41C034887807A157BAA9EF615D9E6;       // 0x1008(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    wobble__Direction_26E41C034887807A157BAA9EF615D9E6;       // 0x100C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x100D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          wobble;                                                   // 0x1010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotateSK_rotate_0F29D9264F43CA1868EAA48C7F008535;         // 0x1018(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RotateSK__Direction_0F29D9264F43CA1868EAA48C7F008535;     // 0x101C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x101D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RotateSK;                                                 // 0x1020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotateSM_rotate_BD746A874EB63584C59CD4ABAF74F7A6;         // 0x1028(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RotateSM__Direction_BD746A874EB63584C59CD4ABAF74F7A6;     // 0x102C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x102D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RotateSM;                                                 // 0x1030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BeamLocation;                                             // 0x1038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    BeamRotation;                                             // 0x1044(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BeamScale;                                                // 0x1050(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MeshLocation;                                             // 0x105C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    MeshRotation;                                             // 0x1068(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MeshScale;                                                // 0x1074(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UStaticMesh*                                 MeshAsset;                                                // 0x1080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HologramMaterial;                                         // 0x1088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StartRot;                                                 // 0x1090(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    EndRot;                                                   // 0x109C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        MeshRef;                                                  // 0x10A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMeshRotation;                                       // 0x10B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMeshCollision;                                           // 0x10B1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x10B2(0x0006) MISSED OFFSET
	class USkeletalMesh*                               SkeletalAsset;                                            // 0x10B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SkeletalPosition;                                         // 0x10C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SkeletalRotation;                                         // 0x10CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SkeletalScale;                                            // 0x10D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x10E4(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalRef;                                              // 0x10E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AnimMontage;                                              // 0x10F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanInteract;                                              // 0x10F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x10F9(0x0007) MISSED OFFSET
	class UParticleSystem*                             ParticleEffect;                                           // 0x1100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x1108(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x1109(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleEffectRef;                                        // 0x1110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayDuration;                                             // 0x1118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x111C(0x0004) MISSED OFFSET
	struct FText                                       UseText;                                                  // 0x1120(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              WarmupDuration;                                           // 0x1138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WarmupActive;                                             // 0x113C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x113D(0x0003) MISSED OFFSET
	float                                              RetriggerDelay;                                           // 0x1140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Once;                                                     // 0x1144(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1145(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SK_HologramMatRef;                                        // 0x1148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WobbleAmount;                                             // 0x1150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WobbleDuration;                                           // 0x1154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WobbleEndTime;                                            // 0x1158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HologramExteriorColor;                                    // 0x115C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HologramInternalColor;                                    // 0x116C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HologramInternalGlow;                                     // 0x117C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HologramExteriorGlow;                                     // 0x1180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParticleColorOverride;                                    // 0x1184(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               UseParticleColorOverride;                                 // 0x1194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1195(0x0003) MISSED OFFSET
	float                                              LightIntensity;                                           // 0x1198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightRadius;                                              // 0x119C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LightActive;                                              // 0x11A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x11A1(0x0007) MISSED OFFSET
	class UPointLightComponent*                        LightRef;                                                 // 0x11A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LightColorOverride;                                       // 0x11B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               UseLightColorOverride;                                    // 0x11C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x11C1(0x0007) MISSED OFFSET
	class USoundCue*                                   PlayAudioSoundCue;                                        // 0x11C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayAudioVolume;                                          // 0x11D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x11D4(0x0004) MISSED OFFSET
	class USoundAttenuation*                           PlayAudioAttenuation;                                     // 0x11D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ClampMaterialRange;                                       // 0x11E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x11E4(0x0004) MISSED OFFSET
	class UTexture2D*                                  TextureSlot;                                              // 0x11E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TextureColorMultiplier;                                   // 0x11F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTextureColorOverride;                                 // 0x11F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x11F5(0x0003) MISSED OFFSET
	struct FLinearColor                                TextureColorOverride;                                     // 0x11F8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TextureOpacity;                                           // 0x1208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParticleCoreColorOverride;                                // 0x120C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               UseParticleCoreColorOverride;                             // 0x121C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x121D(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleCoreRef;                                          // 0x1220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   InteractionPlayerRef;                                     // 0x1228(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldFacePlayer;                                         // 0x1230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Parent_Hologram.A_Parent_Hologram_C");
		return ptr;
	}


	void InteractionHint();
	void InitialRotationSet();
	void TextureSet();
	void PlayAudio();
	void LightSet();
	void IsActive();
	void WobbleShader();
	void OnRep_WarmupActive();
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void ParticleSet();
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void SetHologramMaterial();
	void SkeletalMeshSet();
	void StaticMeshSet();
	void OnRep_bMeshCollision();
	void UserConstructionScript();
	void RotateSM__FinishedFunc();
	void RotateSM__UpdateFunc();
	void RotateSK__FinishedFunc();
	void RotateSK__UpdateFunc();
	void wobble__FinishedFunc();
	void wobble__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void Rotation();
	void StopAudio();
	void ActivateAudio();
	void Used();
	void StartWobble();
	void EndWobble();
	void Activated();
	void InteractionHintOn();
	void ExecuteUbergraph_A_Parent_Hologram(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
