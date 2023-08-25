#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct CosmeticsFrameworkItems.CosmeticPropertyBase
struct FCosmeticPropertyBase
{
public:
	struct FGameplayTag                          PropertyTag;                                       // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x20 - 0x4)
// ScriptStruct CosmeticsFrameworkItems.CosmeticProperty_Vector
struct FCosmeticProperty_Vector : public FCosmeticPropertyBase
{
public:
	uint8                                        Pad_D86[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


