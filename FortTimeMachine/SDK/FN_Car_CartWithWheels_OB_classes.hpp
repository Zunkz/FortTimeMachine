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

// BlueprintGeneratedClass Car_CartWithWheels_OB.Car_CartWithWheels_OB_C
// 0x0008 (0x0FD8 - 0x0FD0)
class ACar_CartWithWheels_OB_C : public ACartWithWheels_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Car_CartWithWheels_OB.Car_CartWithWheels_OB_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ExecuteUbergraph_Car_CartWithWheels_OB(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
