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

// BlueprintGeneratedClass Car_Pickup_OB.Car_Pickup_OB_C
// 0x000E (0x11A8 - 0x119A)
class ACar_Pickup_OB_C : public ACar_Pickup_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x119A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Car_Pickup_OB.Car_Pickup_OB_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ExecuteUbergraph_Car_Pickup_OB(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
