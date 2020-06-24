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

// BlueprintGeneratedClass BP_SpecialChest_RocketLauncher_Child.BP_SpecialChest_RocketLauncher_Child_C
// 0x000C (0x1118 - 0x110C)
class ABP_SpecialChest_RocketLauncher_Child_C : public ABP_SpecialChest_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x110C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1110(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpecialChest_RocketLauncher_Child.BP_SpecialChest_RocketLauncher_Child_C");
		return ptr;
	}


	void UserConstructionScript();
	void Searched();
	void ExecuteUbergraph_BP_SpecialChest_RocketLauncher_Child(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
