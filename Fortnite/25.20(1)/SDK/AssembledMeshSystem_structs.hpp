#pragma once

// Dumper.

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

// 0x20 (0x20 - 0x0)
// ScriptStruct AssembledMeshSystem.AssembledMeshAttachmentRules
struct FAssembledMeshAttachmentRules
{
public:
	class FName                                  AttachSocketName;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               AttachOffset;                                      // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AssembledMeshSystem.BaseParamData
struct FBaseParamData
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct AssembledMeshSystem.IntParamData
struct FIntParamData : public FBaseParamData
{
public:
	TArray<class FString>                        ParamOptions;                                      // 0x10(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct AssembledMeshSystem.FloatParamData
struct FFloatParamData : public FBaseParamData
{
public:
	float                                        FloatValue;                                        // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFloatValue;                                     // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFloatValue;                                     // 0x18(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382B[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AssembledMeshSystem.AssembledComponentReferences
struct FAssembledComponentReferences
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizableSkeletalComponent*        CustomizableComponent;                             // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
