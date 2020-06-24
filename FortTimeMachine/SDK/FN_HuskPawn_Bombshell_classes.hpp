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

// BlueprintGeneratedClass HuskPawn_Bombshell.HuskPawn_Bombshell_C
// 0x0000 (0x1FB8 - 0x1FB8)
class AHuskPawn_Bombshell_C : public AHuskPawn_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn_Bombshell.HuskPawn_Bombshell_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
