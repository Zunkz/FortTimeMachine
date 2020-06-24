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

// BlueprintGeneratedClass OB_EasterEggKnight.OB_EasterEggKnight_C
// 0x0028 (0x0FF8 - 0x0FD0)
class AOB_EasterEggKnight_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       Melee;                                                    // 0x0FD8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OB_EasterEggKnight.OB_EasterEggKnight_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void SpawnShrubbery();
	void ExecuteUbergraph_OB_EasterEggKnight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
