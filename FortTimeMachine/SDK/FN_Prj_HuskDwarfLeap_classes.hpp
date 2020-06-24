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

// BlueprintGeneratedClass Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C
// 0x003C (0x083C - 0x0800)
class APrj_HuskDwarfLeap_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             LobberProjLoopingSound;                                   // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ProjectileParticleSystem;                                 // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Trail_Material;                                           // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Effect_Explosion;                                         // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TrailGlow;                                                // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Pushed_Off_Location;                                      // 0x0830(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C");
		return ptr;
	}


	void ImpactOnHit(const struct FVector& HitLocation);
	void UserConstructionScript();
	void OnShot(struct FHitResult* Hit);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ExecuteUbergraph_Prj_HuskDwarfLeap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
