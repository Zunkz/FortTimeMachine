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

// AnimBlueprintGeneratedClass TrollVim.TrollVim_C
// 0x093C (0x0D1C - 0x03E0)
class UTrollVim_C : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5C3B1B1441339AE2971DF98103361ED7;      // 0x03E8(0x0060)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0448(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27A15DE649374F47C50DB8BAC0055854;// 0x0450(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_346A0C1A45F2173C9EE3758B6D4D55FF;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB28ADEE4990A10650EB3D8CF31C7BD8;// 0x0550(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD493BF84A821A91AABA27A0BA2DD53E;// 0x05D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA4F485041B36F90C804499F8ADC2407;// 0x0650(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95910B5546948C37B6F8F0BC0EDA7C09;// 0x06D0(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_03B83EE6401C395B3964ADAE623C1968;// 0x0750(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E21E4AB643366ABEA3B2D9A3FC262C00;// 0x07C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CFDABFE4CDFC984A3D0D1A011B136F6;// 0x0808(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BDB039D04B7CD35AEA33739BB15E1636;// 0x0878(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3A1DC51F44EDD56ABE06F6A1E10F7C3D;// 0x08C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_453546DC484A8DC86CFB6E8CFD5562A1;// 0x0908(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9FC28E254C2705DCBA26FD88E71FD9F6;// 0x0978(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2E10D64244F6674F1CC6EA837C2BBDC3;// 0x09C0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E66A78634E55DE01E690D6BADA2F65FA;// 0x0A30(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_ED05BFDF4C662000E3F4C0A70EE60730;// 0x0AA0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_466B1FAC4D926DD9AEE68D82F127FC60;// 0x0B80(0x0070)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0E8C330B4A91BD109C27A48BA378EFA9;// 0x0BF0(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_Root_F4E4387A44ACB2DDB744B4BC79DC9EC7;      // 0x0CC8(0x0048)
	float                                              Speed;                                                    // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpwardVelocity;                                           // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortMovementStyle>                    MovementStyle;                                            // 0x0D18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStunned;                                                 // 0x0D19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x0D1A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockGetUp;                                               // 0x0D1B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TrollVim.TrollVim_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_TrollVim_AnimGraphNode_TransitionResult_FD493BF84A821A91AABA27A0BA2DD53E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TrollVim_AnimGraphNode_TransitionResult_FA4F485041B36F90C804499F8ADC2407();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TrollVim_AnimGraphNode_TransitionResult_95910B5546948C37B6F8F0BC0EDA7C09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TrollVim_AnimGraphNode_TransitionResult_BB28ADEE4990A10650EB3D8CF31C7BD8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TrollVim_AnimGraphNode_TransitionResult_346A0C1A45F2173C9EE3758B6D4D55FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TrollVim_AnimGraphNode_BlendListByEnum_ED05BFDF4C662000E3F4C0A70EE60730();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TrollVim_AnimGraphNode_TransitionResult_27A15DE649374F47C50DB8BAC0055854();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_TrollVim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
