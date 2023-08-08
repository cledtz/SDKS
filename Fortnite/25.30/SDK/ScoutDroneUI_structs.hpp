#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct ScoutDroneUI.ScoutDroneWidgetIdentifier
struct FScoutDroneWidgetIdentifier
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                WeakWdiget;                                        // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
