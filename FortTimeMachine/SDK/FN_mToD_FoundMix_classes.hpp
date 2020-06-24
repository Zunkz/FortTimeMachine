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

// BlueprintGeneratedClass mToD_FoundMix.mToD_FoundMix_C
// 0x00F1 (0x0481 - 0x0390)
class AmToD_FoundMix_C : public AFortClientOnlyActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               TriggerRange;                                             // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AmbientMix_B;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AmbientMix_A;                                             // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttenuationDistanceModel                          distance_algorithm;                                       // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	float                                              Falloff_Range;                                            // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Day_Mix_Sound;                                            // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Morning_Mix_Sound;                                        // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Evening_Mix_Sound;                                        // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Night_Mix_Sound;                                          // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSound_MaxDelay;                                     // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSound_MinDelay;                                     // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  RandomSoundCurrent;                                       // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Random_Day;                                               // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Evening;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Morning;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Night;                                             // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TileReverbTag;                                            // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReverbEffect*                               Tile_Reverb_Preset;                                       // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Attenuate_with_LPF;                                       // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              LPFRRadius_Min;                                           // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LPFRRadius_Max;                                           // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Falloff_Extents;                                          // 0x042C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddAutomatically;                                         // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	TArray<class AActor*>                              Elements_List;                                            // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                ElementsDestroyed;                                        // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                No_of_Elements_to_Deactivate;                             // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Attenuation_Extents;                                      // 0x0458(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               AmbientMix_A_isActive;                                    // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	float                                              On_Destroy_Fade_Out_Time;                                 // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlockNextPhase;                                           // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowAudioDebug;                                           // 0x046D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClearAmbient;                                             // 0x046E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAmbientActive;                                          // 0x046F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              TempElementList;                                          // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Delete_Repeated;                                          // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass mToD_FoundMix.mToD_FoundMix_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Morning_Start();
	void Day_Start();
	void Evening_Start();
	void Night_Start();
	void PlayCrossfadeAB();
	void PlayCrossfadeBA();
	void BndEvt__TriggerRange_K2Node_ComponentBoundEvent_104_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__TriggerRange_K2Node_ComponentBoundEvent_109_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Update_attenuation();
	void PlayRandomSounds();
	void StopRandomSounds();
	void Entering_subzone();
	void Leaving_subzone();
	void ActorDestroyedSignature__DelegateSignature_Event(class AActor* DestroyedActor);
	void SetupRoofs();
	void ManualFadeOut();
	void FadeoutAudio();
	void FadeinAudio();
	void ExecuteUbergraph_mToD_FoundMix(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
