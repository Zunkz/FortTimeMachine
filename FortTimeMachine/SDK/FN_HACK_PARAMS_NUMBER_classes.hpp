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

// BlueprintGeneratedClass HACK_PARAMS_NUMBER.HACK_PARAMS_NUMBER_C
// 0x0004 (0x002C - 0x0028)
class UHACK_PARAMS_NUMBER_C : public UFortMissionEventParams
{
public:
	int                                                NumberToPass;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HACK_PARAMS_NUMBER.HACK_PARAMS_NUMBER_C");
		return ptr;
	}


	void BreakParams(int* NumberToPass);
	void SetParams(int NumberToPass, class UHACK_PARAMS_NUMBER_C** ThisObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
