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

// BlueprintGeneratedClass BP_SatelliteProp.BP_SatelliteProp_C
// 0x0011 (0x0FE1 - 0x0FD0)
class ABP_SatelliteProp_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableLight;                                             // 0x0FE0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SatelliteProp.BP_SatelliteProp_C");
		return ptr;
	}


	void OnRep_DisableLight();
	void UserConstructionScript();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ExecuteUbergraph_BP_SatelliteProp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
