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

// Function IntroResInWeapon.IntroResInWeapon_C.Get Grip Position And Radius From Grip
struct AIntroResInWeapon_C_Get_Grip_Position_And_Radius_From_Grip_Params
{
	class USkeletalMeshComponent*                      Original_Skeletal_Mesh;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GripPositionAndRadiusFromTheGrip;                         // (Parm, OutParm, IsPlainOldData)
};

// Function IntroResInWeapon.IntroResInWeapon_C.UpdateMaterialInstanceProperties
struct AIntroResInWeapon_C_UpdateMaterialInstanceProperties_Params
{
	bool                                               ConstructionScript;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IntroResInWeapon.IntroResInWeapon_C.UserConstructionScript
struct AIntroResInWeapon_C_UserConstructionScript_Params
{
};

// Function IntroResInWeapon.IntroResInWeapon_C.CharacterSpawnInTimeline__FinishedFunc
struct AIntroResInWeapon_C_CharacterSpawnInTimeline__FinishedFunc_Params
{
};

// Function IntroResInWeapon.IntroResInWeapon_C.CharacterSpawnInTimeline__UpdateFunc
struct AIntroResInWeapon_C_CharacterSpawnInTimeline__UpdateFunc_Params
{
};

// Function IntroResInWeapon.IntroResInWeapon_C.Timeline_0__FinishedFunc
struct AIntroResInWeapon_C_Timeline_0__FinishedFunc_Params
{
};

// Function IntroResInWeapon.IntroResInWeapon_C.Timeline_0__UpdateFunc
struct AIntroResInWeapon_C_Timeline_0__UpdateFunc_Params
{
};

// Function IntroResInWeapon.IntroResInWeapon_C.Stop Particles
struct AIntroResInWeapon_C_Stop_Particles_Params
{
};

// Function IntroResInWeapon.IntroResInWeapon_C.StartParticles
struct AIntroResInWeapon_C_StartParticles_Params
{
};

// Function IntroResInWeapon.IntroResInWeapon_C.BeginWeaponAnimation
struct AIntroResInWeapon_C_BeginWeaponAnimation_Params
{
};

// Function IntroResInWeapon.IntroResInWeapon_C.ExecuteUbergraph_IntroResInWeapon
struct AIntroResInWeapon_C_ExecuteUbergraph_IntroResInWeapon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
