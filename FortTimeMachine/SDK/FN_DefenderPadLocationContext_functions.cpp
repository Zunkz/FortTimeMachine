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

// Function DefenderPadLocationContext.DefenderPadLocationContext_C.ProvideSingleLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultingLocation              (Parm, OutParm, IsPlainOldData)

void UDefenderPadLocationContext_C::ProvideSingleLocation(class UObject** QuerierObject, class AActor** QuerierActor, struct FVector* ResultingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefenderPadLocationContext.DefenderPadLocationContext_C.ProvideSingleLocation");

	UDefenderPadLocationContext_C_ProvideSingleLocation_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
