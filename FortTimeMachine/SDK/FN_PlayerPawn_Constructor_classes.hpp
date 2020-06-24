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

// BlueprintGeneratedClass PlayerPawn_Constructor.PlayerPawn_Constructor_C
// 0x0104 (0x1D78 - 0x1C74)
class APlayerPawn_Constructor_C : public APlayerPawn_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1C74(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C78(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ServerShieldMesh;                                         // 0x1C80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               ShieldCollider;                                           // 0x1C88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ShieldMesh;                                               // 0x1C90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IFFShield_Light;                                          // 0x1C98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BullRushPoke;                                             // 0x1CA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TakeDamageTimeline_LineBrightness_E993138E4A26ED909055A89FDA7BCA47;// 0x1CA8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TakeDamageTimeline_DamageFlash_E993138E4A26ED909055A89FDA7BCA47;// 0x1CAC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TakeDamageTimeline__Direction_E993138E4A26ED909055A89FDA7BCA47;// 0x1CB0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1CB1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TakeDamageTimeline;                                       // 0x1CB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             P_Activate;                                               // 0x1CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      ShieldPlayerMesh;                                         // 0x1CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_IFF_ShieldFlicker;                                    // 0x1CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageFlash;                                              // 0x1CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LineBrightness;                                           // 0x1CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_TIABExplosion;                                          // 0x1CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_TIAB;                                               // 0x1CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Kinetic_Overload;                                   // 0x1CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Start;                                       // 0x1D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Stop;                                        // 0x1D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Impact_1;                                    // 0x1D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Finalized_IFF_BackPack_Offset;                            // 0x1D18(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IFF_Local_Offset_Without_Backpack;                        // 0x1D24(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IFF_Local_Offset_With_Back_Pack;                          // 0x1D30(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1D3C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayArmAnim;                                              // 0x1D40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UPrimitiveComponent*>                 AllIFFMeshes;                                             // 0x1D50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          IFFMaterialParent;                                        // 0x1D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FIFFBoneConfig>                      IFFBoneConfigs;                                           // 0x1D68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Constructor.PlayerPawn_Constructor_C");
		return ptr;
	}


	void SetIFFMeshesEnabled(bool IsEnabled);
	void UserConstructionScript();
	void TakeDamageTimeline__FinishedFunc();
	void TakeDamageTimeline__UpdateFunc();
	void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Constructor_KineticOverload_ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Constructor_PlasmaPulse_IFFCoding(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void testIFF();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void PlayArm();
	void testEndIFF();
	void SetMenuScreenClassName();
	void MultiToggleShield(bool Toggle);
	void ToggleShield(bool Toggle);
	void ExecuteUbergraph_PlayerPawn_Constructor(int EntryPoint);
	void PlayArmAnim__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
