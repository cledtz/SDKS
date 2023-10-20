#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.Reset
struct UUI_GunCharacteristics_Module_C_Reset_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864
struct UUI_GunCharacteristics_Module_C_OnLoaded_28ADFBD243DD2DEB1FF81BA8F1B6A864_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.PreConstruct
struct UUI_GunCharacteristics_Module_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.SetModule
struct UUI_GunCharacteristics_Module_C_SetModule_Params
{
public:
	class UClass*                                ModuleClass;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function UI_GunCharacteristics_Module.UI_GunCharacteristics_Module_C.ExecuteUbergraph_UI_GunCharacteristics_Module
struct UUI_GunCharacteristics_Module_C_ExecuteUbergraph_UI_GunCharacteristics_Module_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGunModuleType                    Temp_byte_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FE5[0x3];                                     // Fixing Size After Last Property 
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x78(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x90(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xA8(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xC0(0x18)(None)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FE7[0x6];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_CustomEvent_ModuleClass;                    // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x100(0x18)(None)
};

}
}


