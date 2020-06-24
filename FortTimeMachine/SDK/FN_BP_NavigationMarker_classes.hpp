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

// BlueprintGeneratedClass BP_NavigationMarker.BP_NavigationMarker_C
// 0x0020 (0x03A8 - 0x0388)
class ABP_NavigationMarker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NavigationMarker.BP_NavigationMarker_C");
		return ptr;
	}


	void UserConstructionScript();
	void EnableMarkerForClient(class ABP_NavigationMarker_C* ActorIn);
	void DisableMarkerForClient(class ABP_NavigationMarker_C* ActorIn);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NavigationMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
