#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.RestoreCollisionSettings
struct UGAB_HuskThrownByFlinger_C_RestoreCollisionSettings_Params
{
	class AHuskPawn_C*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.SaveCollisionSettings
struct UGAB_HuskThrownByFlinger_C_SaveCollisionSettings_Params
{
	class AHuskPawn_C*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Completed_405AED2944EC7B63E07F8CBC114C4467
struct UGAB_HuskThrownByFlinger_C_Completed_405AED2944EC7B63E07F8CBC114C4467_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Cancelled_405AED2944EC7B63E07F8CBC114C4467
struct UGAB_HuskThrownByFlinger_C_Cancelled_405AED2944EC7B63E07F8CBC114C4467_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Triggered_405AED2944EC7B63E07F8CBC114C4467
struct UGAB_HuskThrownByFlinger_C_Triggered_405AED2944EC7B63E07F8CBC114C4467_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Completed_E287620540AA42D086331C807CAC562F
struct UGAB_HuskThrownByFlinger_C_Completed_E287620540AA42D086331C807CAC562F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Cancelled_E287620540AA42D086331C807CAC562F
struct UGAB_HuskThrownByFlinger_C_Cancelled_E287620540AA42D086331C807CAC562F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Triggered_E287620540AA42D086331C807CAC562F
struct UGAB_HuskThrownByFlinger_C_Triggered_E287620540AA42D086331C807CAC562F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.K2_ActivateAbilityFromEvent
struct UGAB_HuskThrownByFlinger_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskDamaged
struct UGAB_HuskThrownByFlinger_C_HuskDamaged_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, IsPlainOldData)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.K2_OnEndAbility
struct UGAB_HuskThrownByFlinger_C_K2_OnEndAbility_Params
{
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.BindHuskDamaged
struct UGAB_HuskThrownByFlinger_C_BindHuskDamaged_Params
{
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskLanded
struct UGAB_HuskThrownByFlinger_C_HuskLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskHit
struct UGAB_HuskThrownByFlinger_C_HuskHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.UnBindHuskDamaged
struct UGAB_HuskThrownByFlinger_C_UnBindHuskDamaged_Params
{
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.BindHuskLanded
struct UGAB_HuskThrownByFlinger_C_BindHuskLanded_Params
{
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.UnBindHuskLanded
struct UGAB_HuskThrownByFlinger_C_UnBindHuskLanded_Params
{
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.RotationCheck
struct UGAB_HuskThrownByFlinger_C_RotationCheck_Params
{
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskFaceForwardON
struct UGAB_HuskThrownByFlinger_C_HuskFaceForwardON_Params
{
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskFaceForwardOFF
struct UGAB_HuskThrownByFlinger_C_HuskFaceForwardOFF_Params
{
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.ResetGravityScale
struct UGAB_HuskThrownByFlinger_C_ResetGravityScale_Params
{
};

// Function GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.ExecuteUbergraph_GAB_HuskThrownByFlinger
struct UGAB_HuskThrownByFlinger_C_ExecuteUbergraph_GAB_HuskThrownByFlinger_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
