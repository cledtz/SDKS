#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xD68 - 0xD40)
// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
class UPBWA_S1_Solid_C : public UBuildingWall
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        GnomeWallChance;                                   // 0xD48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GnomeWallMax;                                      // 0xD4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Gnomed;                                            // 0xD50(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D91[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceConstant*             GnomeMaterial;                                     // 0xD58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           GnomeWall;                                         // 0xD60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PBWA_S1_Solid_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBWA_S1_Solid(int32 EntryPoint, const struct FAnimatingMaterialPair& K2Node_MakeStruct_AnimatingMaterialPair, int32 CallFunc_Array_Add_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
