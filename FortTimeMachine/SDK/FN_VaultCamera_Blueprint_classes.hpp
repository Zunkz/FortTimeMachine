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

// BlueprintGeneratedClass VaultCamera_Blueprint.VaultCamera_Blueprint_C
// 0x0020 (0x08E0 - 0x08C0)
class AVaultCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             CachedPawn;                                               // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               MouseDown;                                                // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08D1(0x0007) MISSED OFFSET
	class AVaultCamera_Blueprint_C*                    VaultActor;                                               // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VaultCamera_Blueprint.VaultCamera_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void ReceiveTick(float* DeltaSeconds);
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_VaultCamera_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
