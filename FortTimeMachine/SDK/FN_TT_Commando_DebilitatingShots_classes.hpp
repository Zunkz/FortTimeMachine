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

// BlueprintGeneratedClass TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C
// 0x0000 (0x0118 - 0x0118)
class UTT_Commando_DebilitatingShots_C : public UFortGameplayAbilityTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C");
		return ptr;
	}


	bool BP_GetTokenizedDescriptionText(class UObject** ObjectToDescribe, struct FGameplayTag* Tag, class UFortTooltipContext** Context, TArray<struct FText>* OutDescription);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, struct FGameplayTag* Tag, class UFortTooltipContext** Context, struct FGameplayTag* Token, struct FText* OutText);
	void InitializeAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
