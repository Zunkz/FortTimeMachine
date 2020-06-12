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

// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color (SlateColor)
struct UMissionRewardItem_Tooltip_C_Get_Rarity_Color__SlateColor__Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color
struct UMissionRewardItem_Tooltip_C_Get_Rarity_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Icon
struct UMissionRewardItem_Tooltip_C_Get_Reward_Icon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Name
struct UMissionRewardItem_Tooltip_C_Get_Reward_Name_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
