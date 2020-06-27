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

// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position
struct URenderToTextureFunctionLibrary_C_Set_Canvas_Material_Scale_and_Position_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Screen_Position;                                          // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   Screen_Size;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array
struct URenderToTextureFunctionLibrary_C_Array_to_HLSL_Int_Array_Params
{
	TEnumAsByte<EIntTypes>                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Variable_Name;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        int1;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           int2;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             int3;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        int4;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
