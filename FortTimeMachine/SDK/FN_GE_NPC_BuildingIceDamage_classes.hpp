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

// BlueprintGeneratedClass GE_NPC_BuildingIceDamage.GE_NPC_BuildingIceDamage_C
// 0x0000 (0x0660 - 0x0660)
class UGE_NPC_BuildingIceDamage_C : public UGET_DirectIceDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_NPC_BuildingIceDamage.GE_NPC_BuildingIceDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
