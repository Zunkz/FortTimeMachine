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

// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideMeshAndPlacement
struct AAbilityDecoTool_SupplyDrop_C_HideMeshAndPlacement_Params
{
	bool                                               bInHide;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.UserConstructionScript
struct AAbilityDecoTool_SupplyDrop_C_UserConstructionScript_Params
{
};

// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.BPOnSetDecoObjectPreview
struct AAbilityDecoTool_SupplyDrop_C_BPOnSetDecoObjectPreview_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.Show
struct AAbilityDecoTool_SupplyDrop_C_Show_Params
{
};

// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideFor
struct AAbilityDecoTool_SupplyDrop_C_HideFor_Params
{
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.ExecuteUbergraph_AbilityDecoTool_SupplyDrop
struct AAbilityDecoTool_SupplyDrop_C_ExecuteUbergraph_AbilityDecoTool_SupplyDrop_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
