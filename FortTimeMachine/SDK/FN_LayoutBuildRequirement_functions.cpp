// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LayoutBuildRequirement.LayoutBuildRequirement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALayoutBuildRequirement_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LayoutBuildRequirement.LayoutBuildRequirement_C.UserConstructionScript");

	ALayoutBuildRequirement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LayoutBuildRequirement.LayoutBuildRequirement_C.Event_OnLayoutSatisfied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingLayoutRequirement* LayoutRequirement              (Parm, ZeroConstructor, IsPlainOldData)
// class ABuildingSMActor*        SatisfyingBuildingSMActor      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALayoutBuildRequirement_C::Event_OnLayoutSatisfied(class ABuildingLayoutRequirement* LayoutRequirement, class ABuildingSMActor* SatisfyingBuildingSMActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LayoutBuildRequirement.LayoutBuildRequirement_C.Event_OnLayoutSatisfied");

	ALayoutBuildRequirement_C_Event_OnLayoutSatisfied_Params params;
	params.LayoutRequirement = LayoutRequirement;
	params.SatisfyingBuildingSMActor = SatisfyingBuildingSMActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LayoutBuildRequirement.LayoutBuildRequirement_C.Event_OnLayoutUnSatisfied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingLayoutRequirement* LayoutRequirement              (Parm, ZeroConstructor, IsPlainOldData)
// class ABuildingSMActor*        SatisfyingBuildingSMActor      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALayoutBuildRequirement_C::Event_OnLayoutUnSatisfied(class ABuildingLayoutRequirement* LayoutRequirement, class ABuildingSMActor* SatisfyingBuildingSMActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LayoutBuildRequirement.LayoutBuildRequirement_C.Event_OnLayoutUnSatisfied");

	ALayoutBuildRequirement_C_Event_OnLayoutUnSatisfied_Params params;
	params.LayoutRequirement = LayoutRequirement;
	params.SatisfyingBuildingSMActor = SatisfyingBuildingSMActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LayoutBuildRequirement.LayoutBuildRequirement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALayoutBuildRequirement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LayoutBuildRequirement.LayoutBuildRequirement_C.ReceiveBeginPlay");

	ALayoutBuildRequirement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LayoutBuildRequirement.LayoutBuildRequirement_C.ExecuteUbergraph_LayoutBuildRequirement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALayoutBuildRequirement_C::ExecuteUbergraph_LayoutBuildRequirement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LayoutBuildRequirement.LayoutBuildRequirement_C.ExecuteUbergraph_LayoutBuildRequirement");

	ALayoutBuildRequirement_C_ExecuteUbergraph_LayoutBuildRequirement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
