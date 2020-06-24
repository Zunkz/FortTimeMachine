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

// BlueprintGeneratedClass mToD_TileMix.mToD_TileMix_C
// 0x0190 (0x0520 - 0x0390)
class AmToD_TileMix_C : public AFortClientOnlyActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Wind_Side;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Wind_Front;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Wind_Top;                                                 // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               TriggerRange;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               TriggerFallof;                                            // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AmbientMix_B;                                             // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AmbientMix_A;                                             // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Attenuation_Extents;                                      // 0x03D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	EAttenuationDistanceModel                          distance_algorithm;                                       // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	float                                              Falloff_Range;                                            // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class USoundBase*                                  Day_Mix_Sound;                                            // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Morning_Mix_Sound;                                        // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Evening_Mix_Sound;                                        // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Night_Mix_Sound;                                          // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSound_MaxDelay;                                     // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSound_MinDelay;                                     // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  RandomSoundCurrent;                                       // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Random_Day;                                               // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Evening;                                           // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Morning;                                           // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Night;                                             // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Midnight_Sound;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Noon_Sound;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Special_Day;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Special_Evening;                                          // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Special_Morning;                                          // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Special_Night;                                            // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EmToD_Types>                           Level_Type;                                               // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	float                                              Wind_Top_Z_location;                                      // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Wind_TOP_Sound;                                           // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Wind_FRONT_Sound;                                         // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Wind_SIDE_Sound;                                          // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Day_Max_Loop_Count;                                       // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Evening_Max_Loop_Count;                                   // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Morning_Max_Loop_Count;                                   // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Night_Max_Loop_Count;                                     // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TileReverbTag;                                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReverbEffect*                               Tile_Reverb_Preset;                                       // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Max_Loop_Count;                                           // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class USoundBase*                                  SpecialSoundCurrent;                                      // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Attenuate_with_LPF;                                       // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	float                                              LPFRRadius_Min;                                           // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRRadius_Max;                                           // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Falloff_Extents;                                          // 0x04CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Subzones;                                                 // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AmbientMix_A_isActive;                                    // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar;                                                   // 0x04DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x04DE(0x0002) MISSED OFFSET
	class AActor*                                      Overlaping_actor;                                         // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowAudioDebug;                                           // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	class USoundAttenuation*                           Tile_TOP_Attenuation;                                     // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Border_Straight_TOP_Attenuation;                          // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Border_Straight_FRONT_Attenuation;                        // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Border_Outer_TOP_Attenuation;                             // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Border_Outer_FRONT_Attenuation;                           // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Border_Outer_SIDE_Attenuation;                            // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass mToD_TileMix.mToD_TileMix_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Morning_Start();
	void Day_Start();
	void Noon();
	void Evening_Start();
	void Night_Start();
	void Midnight();
	void PlaySpecialSounds();
	void Update_attenuation();
	void TurnoffAudio();
	void TurnonAudio();
	void SubzoneEntered();
	void SubzoneLeaved();
	void PlayCrossfadeAB();
	void PlayCrossfadeBA();
	void PlayRandomSounds();
	void StopRandomSounds();
	void BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_165_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__TriggerFallof_K2Node_ComponentBoundEvent_168_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Setup_Wind();
	void ExecuteUbergraph_mToD_TileMix(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
