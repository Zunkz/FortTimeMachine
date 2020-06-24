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

// BlueprintGeneratedClass mToD_SubMix.mToD_SubMix_C
// 0x00E3 (0x0473 - 0x0390)
class AmToD_SubMix_C : public AFortClientOnlyActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               TriggerRange;                                             // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               TriggerFallof;                                            // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AmbientMix_B;                                             // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AmbientMix_A;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Attenuation_Extents;                                      // 0x03C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	EAttenuationDistanceModel                          distance_algorithm;                                       // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	float                                              Falloff_Range;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class USoundBase*                                  Day_Mix_Sound;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Morning_Mix_Sound;                                        // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Evening_Mix_Sound;                                        // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Night_Mix_Sound;                                          // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSound_MaxDelay;                                     // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSound_MinDelay;                                     // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  RandomSoundCurrent;                                       // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Random_Day;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Evening;                                           // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Morning;                                           // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Night;                                             // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TileReverbTag;                                            // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReverbEffect*                               Tile_Reverb_Preset;                                       // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Attenuate_with_LPF;                                       // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	float                                              LPFRRadius_Min;                                           // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRRadius_Max;                                           // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Falloff_Extents;                                          // 0x0444(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AmToD_TileMix_C*                             TileMixRef;                                               // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              TileAmbientsList;                                         // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      ClosestsTileAmbient;                                      // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               AmbientMix_A_isActive;                                    // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockNextPhase;                                           // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowAudioDebug;                                           // 0x0472(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass mToD_SubMix.mToD_SubMix_C");
		return ptr;
	}


	void UserConstructionScript();
	void Day_Start();
	void Evening_Start();
	void Night_Start();
	void Morning_Start();
	void BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_68_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_84_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void PlayCrossfadeAB();
	void PlayCrossfadeBA();
	void BndEvt__TriggerRange_K2Node_ComponentBoundEvent_104_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__TriggerRange_K2Node_ComponentBoundEvent_109_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Update_attenuation();
	void PlayRandomSounds();
	void StopRandomSounds();
	void Entering_subzone();
	void Leaving_subzone();
	void ReceiveBeginPlay();
	void DefineTileAmbient();
	void SubzoneLeaved_RoofsDestroyed();
	void ExecuteUbergraph_mToD_SubMix(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
