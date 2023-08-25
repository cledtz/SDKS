#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x338 - 0x290)
// BlueprintGeneratedClass LandscapeWaterInfo.LandscapeWaterInfo_C
class ULandscapeWaterInfo_C : public UActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       Flood_Water_Level;                                 // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Game_TextureMinus_Water_Velocity_and_Height;       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            LS_Transform;                                      // 0x2B0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             LS_RT_Res;                                         // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Quad_Size;                                         // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Terrain_Velocity_and_Height_Texture;           // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95F7[0x7];                                     // Fixing Size After Last Property 
	class UMaterialInstanceDynamic*              External_Water_MID_To_Update;                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULandscapeWaterInfo_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Set_Flood_Water_Level();
	void ExecuteUbergraph_LandscapeWaterInfo(int32 EntryPoint, class UWaterSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_SetOceanFloodHeight_InFloodHeight_ImplicitCast);
};

}


