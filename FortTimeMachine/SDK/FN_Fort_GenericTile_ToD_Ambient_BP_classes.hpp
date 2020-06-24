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

// BlueprintGeneratedClass Fort_GenericTile_ToD_Ambient_BP.Fort_GenericTile_ToD_Ambient_BP_C
// 0x00C8 (0x0458 - 0x0390)
class AFort_GenericTile_ToD_Ambient_BP_C : public AFortClientOnlyActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             AmbientMix_A;                                             // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AmbientMix_B;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               TriggerVolume;                                            // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Day_Mix_Sound;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Morning_Mix_Sound;                                        // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Evening_Mix_Sound;                                        // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Night_Mix_Sound;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSound_MaxDelay;                                     // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSound_MinDelay;                                     // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  RandomContainer;                                          // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Random_Day;                                               // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Evening;                                           // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Morning;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Random_Night;                                             // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Midnight_Sound;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Noon_Sound;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Special_Day;                                              // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Special_Evening;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Special_Morning;                                          // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Special_Night;                                            // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Day_Max_Loop_Count;                                       // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Evening_Max_Loop_Count;                                   // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Morning_Max_Loop_Count;                                   // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Night_Max_Loop_Count;                                     // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AreYouInside;                                             // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FName                                       TileReverbTag;                                            // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReverbEffect*                               Tile_Reverb_Preset;                                       // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fort_GenericTile_ToD_Ambient_BP.Fort_GenericTile_ToD_Ambient_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void Evening_Start();
	void Night_Start();
	void Midnight();
	void Noon();
	void Morning_Start();
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void Day_Start();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Fort_GenericTile_ToD_Ambient_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
