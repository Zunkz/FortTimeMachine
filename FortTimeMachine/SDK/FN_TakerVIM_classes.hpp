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

// AnimBlueprintGeneratedClass TakerVIM.TakerVIM_C
// 0x15B8 (0x19C0 - 0x0408)
class UTakerVIM_C : public UFortAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1013423A410C5FBB18834F8867E587D7;      // 0x0410(0x0060)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38241EEF4F00E0E9D36E03BC5024F9D3;// 0x0470(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFC7B7ED40722835D772E2A0D4FA3599;// 0x04F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25B85489494A93A4D61E66B47BF038DB;// 0x0570(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E98CF254024D154E7F9CB92A74920C8;// 0x05F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4BFC78E44F27663A879618B0959F58CF;// 0x0670(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C0B8C814591F493084373A30BB400A4;// 0x06F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B4253D8A4DECB23BA8ADBEB1718CAA22;// 0x0770(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A7459D1C440CFDA1D1532590791DDC54;// 0x07F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B0997324E4BB8D66D8F3E854EC422A4;// 0x0870(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_108A7A284032AB85AF22689ED45E53EE;// 0x08F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F8958E6E4DF7215AF96EE4A070BFF607;// 0x0970(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB4750A64ADC3D280E99F39161151EB2;// 0x09F0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_318DA37D48A3019492EA8EB34FC9742D;// 0x0A70(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3B2BBC6F4B76AE7092D3AC843A9793C3;// 0x0AE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB86343A4D6C6B7F5A6AB6A3B0016F3F;// 0x0B28(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DF5E70294BD73098D8347B82084FD49A;// 0x0B98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_458542D04ED207653572EF85C0CCDD31;// 0x0BE0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7F1B35B54A6430BE8BC7F4922BBBFF8B;// 0x0C50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9C7BB94A43EA4D48A3FE169D08502A39;// 0x0C98(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8B140441472598242CD7B982D38F72D6;// 0x0D08(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ABCC3A5845934113A82A4DA5547366B9;// 0x0D50(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A31DAB114BC42C03B0AB64855F4B2E3A;// 0x0DD0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_648A6B8D4088BF28F1D606A19892DE7E;// 0x0E40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82FDDED341585F09280A44B1058EED8D;// 0x0E88(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8FB723304E57C377CEC46CBC11DFDFD9;// 0x0EF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3FA9769A4BE40303DB390999C838C5F2;// 0x0F40(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E7AB33644AB596570363B1B8342105ED;// 0x1018(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B911BA74A00259565764981EC433F18;// 0x1060(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFCDE2B749BBBFD6BBD453B6D91F343E;// 0x10E0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7AEBA08A4AC33381A31387B44F89C133;// 0x1150(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_357CC73D47B621E89766319469AE6CAF;// 0x1198(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03F7DC4D41AD0AF84590EAA77DEF1195;// 0x1208(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_85D664FA4A022C515D1F42B715BA984E;// 0x1250(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_461BE03B4E7625A8441DAB87E9A89B3C;// 0x1328(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFA5503145583158812DE4832C248B1F;// 0x1370(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DDF747F64EF659CF20ABC1A7F09B716E;// 0x13F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_565456304C5C114639372093D7CEE270;// 0x1460(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFA08F3E4B56FB6706CE608A7FBCA1ED;// 0x14A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_655372CE48EAC7FACECA9B969A063851;// 0x1518(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AD8F17C741153655AE3B6497D5EA2E9E;// 0x1560(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A32126BB42DBB0C044842AA2E21C6D1F;// 0x1638(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8F90D85047DD2088009C0BB8E077275C;// 0x1680(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_Root_78D5527F46AD6BCC78D5FBADE868A2E9;      // 0x1758(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B4D81F0C4A015C754DD57D937D2E2B6E;      // 0x17A0(0x0060)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_B4D2AFE145E789BBE118FB807413A87D;// 0x1800(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EF02EC4A4C5CAC1BF67CD0A57B30C6C8;// 0x1878(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2A3C94194B05B47B9059A09666DB936D;// 0x1920(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_03A6B77B4CA94F1FDDE44A864D2746C6;// 0x1970(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TakerVIM.TakerVIM_C");
		return ptr;
	}


	void IsRunningFunc(bool* IsRunning);
	void IsSprintingFunc(bool* IsSprinting);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_25B85489494A93A4D61E66B47BF038DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_6E98CF254024D154E7F9CB92A74920C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_4BFC78E44F27663A879618B0959F58CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_1C0B8C814591F493084373A30BB400A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_B4253D8A4DECB23BA8ADBEB1718CAA22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_A7459D1C440CFDA1D1532590791DDC54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_8B0997324E4BB8D66D8F3E854EC422A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_108A7A284032AB85AF22689ED45E53EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_F8958E6E4DF7215AF96EE4A070BFF607();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_38241EEF4F00E0E9D36E03BC5024F9D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_EB4750A64ADC3D280E99F39161151EB2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_ABCC3A5845934113A82A4DA5547366B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_0B911BA74A00259565764981EC433F18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_AFC7B7ED40722835D772E2A0D4FA3599();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TakerVIM_AnimGraphNode_TransitionResult_FFA5503145583158812DE4832C248B1F();
	void AnimNotify_SleepingFullyBlended();
	void ExecuteUbergraph_TakerVIM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
