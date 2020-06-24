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

// BlueprintGeneratedClass BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C
// 0x0130 (0x1100 - 0x0FD0)
class ABP_VinderTip_Tutorial_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             SpawnInSound;                                             // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnInEffect;                                            // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Trigger_AudioFade;                                        // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             VinderTip_Ambient_AudioComponent;                         // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ProjectorCone;                                            // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_QuestionMarkRotate;                                     // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_ProjStationCone;                                       // 0x1008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_HologramStation;                                        // 0x1010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Hologram_Tut_Active;                                    // 0x1018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Meshbase;                                                 // 0x1020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             DynamicMovieSoundCue;                                     // 0x1028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             ScreenEffectArrow;                                        // 0x1030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PlaneEndMarker;                                           // 0x1038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x1040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x1048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_OnboardingVideos>                 E_Onboarding;                                             // 0x1050(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1051(0x0007) MISSED OFFSET
	class UMediaSource*                                MovieMediaHarvesting;                                     // 0x1058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveScreenParticle;                                     // 0x1060(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaSource*                                MovieMediaConstruction;                                   // 0x1068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaSource*                                MovieMediaWallEditing;                                    // 0x1070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             ActiveSound;                                              // 0x1078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaSource*                                MovieMediaFirstFort;                                      // 0x1080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   FortPlayerPawnRef;                                        // 0x1088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               FixedPlayDirection;                                       // 0x1090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1091(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    ActiveScreenParticleRef;                                  // 0x1098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanPlayerInteract;                                        // 0x10A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x10A1(0x0007) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x10A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VideoDuration;                                            // 0x10B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x10B4(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawnRef;                                            // 0x10B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x10C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerNearVinderTip;                                      // 0x10C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasBeenPlayed;                                            // 0x10C2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x10C3(0x0001) MISSED OFFSET
	struct FLinearColor                                OnColor;                                                  // 0x10C4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                OffColor;                                                 // 0x10D4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientFaceActive;                                         // 0x10E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x10E5(0x0003) MISSED OFFSET
	struct FTimerHandle                                ClientLoopHandle;                                         // 0x10E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMediaTexture*                               MovieTexture;                                             // 0x10F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaSource*                                MediaSourceDynamic;                                       // 0x10F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VinderTip_Tutorial.BP_VinderTip_Tutorial_C");
		return ptr;
	}


	void VinderTipFaceClients();
	void OnRep_HasBeenPlayed();
	void SetPlayed(bool HasBeenPlayed);
	void CleanupMovieData();
	void OnRep_IsActive();
	void Analytics();
	void Interaction(bool CanPlayerInteract);
	void SetWhichVinderTipToPlay();
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void UserConstructionScript();
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void PlayVindertipOnClients();
	void VindertipFinishedPlaying();
	void MovieFinished();
	void ResetPlayOnce();
	void BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_78_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Trigger_AudioFade_K2Node_ComponentBoundEvent_83_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void FadeAudioIn();
	void FadeAudioOut();
	void UpdateVinderTipMovie();
	void ResetVinderTipColor();
	void FaceClients();
	void Face();
	void PauseFaceTimer();
	void ReceiveBeginPlay();
	void SpawnInEffects();
	void PlayVinderTip();
	void VinderTipMediaOpened(const struct FString& OpenedUrl);
	void ExecuteUbergraph_BP_VinderTip_Tutorial(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
