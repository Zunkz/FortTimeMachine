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

// BlueprintGeneratedClass BP_Cow_Cutout.BP_Cow_Cutout_C
// 0x0008 (0x0FD8 - 0x0FD0)
class ABP_Cow_Cutout_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cow_Cutout.BP_Cow_Cutout_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void PlaySound();
	void ExecuteUbergraph_BP_Cow_Cutout(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
