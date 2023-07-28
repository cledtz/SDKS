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

// 0x79 (0x119 - 0xA0)
// BlueprintGeneratedClass BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C
class UBP_SurfaceTypeSoundComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9841[0x7];                                     // Fixing Size After Last Property..
	TMap<enum class EPhysicalSurface, class USoundBase*> SoundMap;                                          // 0xB0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               Location;                                          // 0x100(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSurfaceTypeSet;                                  // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SurfaceTypeSoundComponent_C");
		return Clss;
	}

	void ActuallyPlaySound(class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetSurfaceType(enum class EPhysicalSurface SurfaceType, class UActor* Actor, enum class EPhysicalSurface Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class UBuildingSMActor* K2Node_DynamicCast_AsBuilding_Static_Mesh, bool K2Node_DynamicCast_bSuccess, enum class EPhysicalSurface Temp_byte_Variable_1, enum class EPhysicalSurface Temp_byte_Variable_2, enum class EPhysicalSurface Temp_byte_Variable_3, enum class EPhysicalSurface Temp_byte_Variable_4, enum class EPhysicalSurface Temp_byte_Variable_5, enum class EFortResourceType Temp_byte_Variable_6, enum class EPhysicalSurface Temp_byte_Variable_7, enum class EPhysicalSurface K2Node_Select_Default);
	void PlaySound(const struct FVector& Location, class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Test_Delay();
	void ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
