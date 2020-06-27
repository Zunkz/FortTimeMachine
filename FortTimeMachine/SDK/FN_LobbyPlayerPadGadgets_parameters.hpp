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

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Initialize
struct ULobbyPlayerPadGadgets_C_Initialize_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnInputClicked
struct ULobbyPlayerPadGadgets_C_OnInputClicked_Params
{
};

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseButtonDown
struct ULobbyPlayerPadGadgets_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Refresh
struct ULobbyPlayerPadGadgets_C_Refresh_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (Parm)
};

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseEnter
struct ULobbyPlayerPadGadgets_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseLeave
struct ULobbyPlayerPadGadgets_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.ExecuteUbergraph_LobbyPlayerPadGadgets
struct ULobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseLeft__DelegateSignature
struct ULobbyPlayerPadGadgets_C_OnGadgetsMouseLeft__DelegateSignature_Params
{
};

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseEntered__DelegateSignature
struct ULobbyPlayerPadGadgets_C_OnGadgetsMouseEntered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
