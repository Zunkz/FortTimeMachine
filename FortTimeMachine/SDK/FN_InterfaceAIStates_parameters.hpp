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

// Function InterfaceAIStates.InterfaceAIStates_C.PortalCollision
struct UInterfaceAIStates_C_PortalCollision_Params
{
	bool                                               Collide_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalFX
struct UInterfaceAIStates_C_PortalFX_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalGet
struct UInterfaceAIStates_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BT;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckInterrupted
struct UInterfaceAIStates_C_TakerSoulSuckInterrupted_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalClear
struct UInterfaceAIStates_C_PortalClear_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalAdd
struct UInterfaceAIStates_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundEnd
struct UInterfaceAIStates_C_TakerSoulSuckSoundEnd_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundBegin
struct UInterfaceAIStates_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerAttackFSM
struct UInterfaceAIStates_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.IsTakerWallPortalAvailable
struct UInterfaceAIStates_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerWallPortalBehavior
struct UInterfaceAIStates_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UBTTask_BlueprintBase*                       Task;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredMoveLocation;                                      // (Parm, IsPlainOldData)
	bool                                               Debug;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.EndTakerSwoopAttack
struct UInterfaceAIStates_C_EndTakerSwoopAttack_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.BeginTakerSwoopAttack
struct UInterfaceAIStates_C_BeginTakerSwoopAttack_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.ResetTakerSpecialAttackTimer
struct UInterfaceAIStates_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SoulSuckMelee;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.VerifyTakerAttack
struct UInterfaceAIStates_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Swoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Soul_Suck;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.HuskEvadeStart
struct UInterfaceAIStates_C_HuskEvadeStart_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.MantleEnd
struct UInterfaceAIStates_C_MantleEnd_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.MantleStart
struct UInterfaceAIStates_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     MidPos;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (Parm, IsPlainOldData)
	bool                                               LowWall;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MidWall;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullWall;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WindowWall;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
