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

// BlueprintGeneratedClass B_BGA_OB_SentryGun.B_BGA_OB_SentryGun_C
// 0x0010 (0x097C - 0x096C)
class AB_BGA_OB_SentryGun_C : public AB_BGA_SentryGun_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x096C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (Transient, DuplicateTransient)
	int                                                AmmoCount;                                                // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_OB_SentryGun.B_BGA_OB_SentryGun_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_BGA_OB_SentryGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
