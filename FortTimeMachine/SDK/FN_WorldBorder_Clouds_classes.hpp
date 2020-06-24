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

// BlueprintGeneratedClass WorldBorder_Clouds.WorldBorder_Clouds_C
// 0x0021 (0x03B1 - 0x0390)
class AWorldBorder_Clouds_C : public AFortClientOnlyActor
{
public:
	class UStaticMeshComponent*                        CloudPlane_Quadrant_Particles;                            // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWorldBorderCloudType>                 Cloud_Type;                                               // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Mask_Negative_Local_Position_Pixels;                      // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldBorder_Clouds.WorldBorder_Clouds_C");
		return ptr;
	}


	void SetupACornerMaterial(float X, float Y, float Falloff_Range);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
