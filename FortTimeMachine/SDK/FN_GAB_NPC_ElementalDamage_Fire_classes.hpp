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

// BlueprintGeneratedClass GAB_NPC_ElementalDamage_Fire.GAB_NPC_ElementalDamage_Fire_C
// 0x0008 (0x0AA0 - 0x0A98)
class UGAB_NPC_ElementalDamage_Fire_C : public UGAB_NPC_TriggeredDamage_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A98(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_NPC_ElementalDamage_Fire.GAB_NPC_ElementalDamage_Fire_C");
		return ptr;
	}


	void TriggeredDamageBuilding(class ABuildingSMActor** TargetBuildingSM_Actor);
	void TriggeredDamagePawn(class AFortPawn** TargetFortPawn);
	void ExecuteUbergraph_GAB_NPC_ElementalDamage_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
