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

// BlueprintGeneratedClass MissileLaunch_Cine.MissileLaunch_Cine_C
// 0x0018 (0x03B8 - 0x03A0)
class AMissileLaunch_Cine_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	bool                                               bCinematicRender;                                         // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class AMatineeActor*                               MissileLaunch_Matinee_ExecuteUbergraph_MissileLaunch_Cine_RefProperty;// 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissileLaunch_Cine.MissileLaunch_Cine_C");
		return ptr;
	}


	void K2Node_MatineeController_1_EndCine();
	void K2Node_MatineeController_1_TOD();
	void K2Node_MatineeController_1_Finished();
	void Start();
	void Stopped();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MissileLaunch_Cine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
