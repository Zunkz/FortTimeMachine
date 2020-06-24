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

// BlueprintGeneratedClass Ramirez_Intro_Cine.Ramirez_Intro_Cine_C
// 0x0098 (0x0438 - 0x03A0)
class ARamirez_Intro_Cine_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	float                                              Sheild_Timeline_54C37CF342BE171911059D8CBEE5CDC7;         // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sheild_Opacity_54C37CF342BE171911059D8CBEE5CDC7;          // 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sheild_Push_54C37CF342BE171911059D8CBEE5CDC7;             // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Sheild__Direction_54C37CF342BE171911059D8CBEE5CDC7;       // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Sheild;                                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadePP_FadeDronePPOut_4BE4B3B342B718A00B329796378E7DEE;   // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadePP__Direction_4BE4B3B342B718A00B329796378E7DEE;       // 0x03C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadePP;                                                   // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Shield_Varient_2;                                         // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Shield_varient_1;                                         // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Shield_MIDS;                                              // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          Shield_Varient_3;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CinematicSkipped;                                         // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableCineTick;                                          // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03FA(0x0006) MISSED OFFSET
	class AIntroResInWeapon_C*                         SK_Haywire_2_ExecuteUbergraph_Ramirez_Intro_Cine_RefProperty;// 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATVPostProcessBP_C*                          TVPostProcessBP_C_2_ExecuteUbergraph_Ramirez_Intro_Cine_RefProperty;// 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          Ramirez_F_Med_Soldier_01_ExecuteUbergraph_Ramirez_Intro_Cine_RefProperty;// 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          Ramirez_F_Shield_ExecuteUbergraph_Ramirez_Intro_Cine_RefProperty;// 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Ramirez_intro_MatineeActor_ExecuteUbergraph_Ramirez_Intro_Cine_RefProperty;// 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    _3dPrintingRaysNearCamera_5_ExecuteUbergraph_Ramirez_Intro_Cine_RefProperty;// 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    _3dPrintingRaysNearCamera2_ExecuteUbergraph_Ramirez_Intro_Cine_RefProperty;// 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ramirez_Intro_Cine.Ramirez_Intro_Cine_C");
		return ptr;
	}


	void FadePP__FinishedFunc();
	void FadePP__UpdateFunc();
	void Sheild__FinishedFunc();
	void Sheild__UpdateFunc();
	void K2Node_MatineeController_10_Jitter2();
	void K2Node_MatineeController_10_Jitter();
	void K2Node_MatineeController_10_CineBlend();
	void K2Node_MatineeController_10_FadePP();
	void K2Node_MatineeController_10_NewWeaponVisibilityTrack();
	void K2Node_MatineeController_10_LightningStrike();
	void K2Node_MatineeController_10_StartShield();
	void K2Node_MatineeController_10_LightningStrike2();
	void K2Node_MatineeController_10_ClearStatic();
	void K2Node_MatineeController_10_TOD();
	void K2Node_MatineeController_10_tvpost();
	void K2Node_MatineeController_10_ScreenEffectOn();
	void K2Node_MatineeController_10_Finished();
	void Start();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void Stopped();
	void Lightning();
	void ExecuteUbergraph_Ramirez_Intro_Cine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
