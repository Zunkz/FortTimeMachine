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

// BlueprintGeneratedClass GE_FlingerMeleeDamage.GE_FlingerMeleeDamage_C
// 0x0000 (0x0660 - 0x0660)
class UGE_FlingerMeleeDamage_C : public UGET_DirectCreatureDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_FlingerMeleeDamage.GE_FlingerMeleeDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
