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

// BlueprintGeneratedClass GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C
// 0x0010 (0x0AA8 - 0x0A98)
class UGAB_NPC_ElementalDamage_Lightning_C : public UGAB_NPC_TriggeredDamage_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A98(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GE_NPC_PawnLightningDamage_RegenDelay;                    // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_NPC_ElementalDamage_Lightning.GAB_NPC_ElementalDamage_Lightning_C");
		return ptr;
	}


	void TriggeredDamagePawn(class AFortPawn** TargetFortPawn);
	void TriggeredDamageBuilding(class ABuildingSMActor** TargetBuildingSM_Actor);
	void ExecuteUbergraph_GAB_NPC_ElementalDamage_Lightning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
