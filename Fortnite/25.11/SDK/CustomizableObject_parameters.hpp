#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function CustomizableObject.CustomizableObject.UnloadReferenceSkeletalMeshes
struct UCustomizableObject_UnloadReferenceSkeletalMeshes_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CustomizableObject.CustomizableObject.UnloadMaskOutCache
struct UCustomizableObject_UnloadMaskOutCache_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CustomizableObject.CustomizableObject.LoadReferenceSkeletalMeshesAsync
struct UCustomizableObject_LoadReferenceSkeletalMeshesAsync_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CustomizableObject.CustomizableObject.LoadMaskOutCache
struct UCustomizableObject_LoadMaskOutCache_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.IsParameterMultidimensional
struct UCustomizableObject_IsParameterMultidimensional_Params
{
public:
	class FString                                InParameterName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7B[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function CustomizableObject.CustomizableObject.IsCompiled
struct UCustomizableObject_IsCompiled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
struct UCustomizableObject_GetStateUIMetadataFromIndex_Params
{
public:
	int32                                        StateIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7C[0x4];                                     // Fixing Size After Last Property..
	struct FParameterUIData                      ReturnValue;                                       // 0x8(0x178)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x188 (0x188 - 0x0)
// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
struct UCustomizableObject_GetStateUIMetadata_Params
{
public:
	class FString                                StateName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FParameterUIData                      ReturnValue;                                       // 0x10(0x178)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CustomizableObject.CustomizableObject.GetStateParameterName
struct UCustomizableObject_GetStateParameterName_Params
{
public:
	class FString                                StateName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParameterIndex;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7D[0x4];                                     // Fixing Size After Last Property..
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.GetStateParameterCount
struct UCustomizableObject_GetStateParameterCount_Params
{
public:
	class FString                                StateName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7E[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.GetStateName
struct UCustomizableObject_GetStateName_Params
{
public:
	int32                                        StateIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7F[0x4];                                     // Fixing Size After Last Property..
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CustomizableObject.CustomizableObject.GetStateCount
struct UCustomizableObject_GetStateCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function CustomizableObject.CustomizableObject.GetProjectorParameterDefaultValue
struct UCustomizableObject_GetProjectorParameterDefaultValue_Params
{
public:
	class FString                                InParameterName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             OutPos;                                            // 0x10(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             OutDirection;                                      // 0x1C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             OutUp;                                             // 0x28(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             OutScale;                                          // 0x34(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutAngle;                                          // 0x40(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomizableObjectProjectorType  OutType;                                           // 0x44(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E80[0x3];                                     // Fixing Size Of Struct..
};

// 0x180 (0x180 - 0x0)
// Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
struct UCustomizableObject_GetParameterUIMetadataFromIndex_Params
{
public:
	int32                                        ParamIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E81[0x4];                                     // Fixing Size After Last Property..
	struct FParameterUIData                      ReturnValue;                                       // 0x8(0x178)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x188 (0x188 - 0x0)
// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
struct UCustomizableObject_GetParameterUIMetadata_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FParameterUIData                      ReturnValue;                                       // 0x10(0x178)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
struct UCustomizableObject_GetParameterTypeByName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMutableParameterType             ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E82[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObject.GetParameterType
struct UCustomizableObject_GetParameterType_Params
{
public:
	int32                                        ParamIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMutableParameterType             ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E83[0x3];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.GetParameterName
struct UCustomizableObject_GetParameterName_Params
{
public:
	int32                                        ParamIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E84[0x4];                                     // Fixing Size After Last Property..
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount
struct UCustomizableObject_GetParameterDescriptionCount_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E85[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function CustomizableObject.CustomizableObject.GetParameterCount
struct UCustomizableObject_GetParameterCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
struct UCustomizableObject_GetIntParameterNumOptions_Params
{
public:
	int32                                        ParamIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.GetIntParameterDefaultValue
struct UCustomizableObject_GetIntParameterDefaultValue_Params
{
public:
	class FString                                InParameterName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E86[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
struct UCustomizableObject_GetIntParameterAvailableOption_Params
{
public:
	int32                                        ParamIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        K;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.GetFloatParameterDefaultValue
struct UCustomizableObject_GetFloatParameterDefaultValue_Params
{
public:
	class FString                                InParameterName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E87[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function CustomizableObject.CustomizableObject.GetComponentCount
struct UCustomizableObject_GetComponentCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CustomizableObject.CustomizableObject.GetColorParameterDefaultValue
struct UCustomizableObject_GetColorParameterDefaultValue_Params
{
public:
	class FString                                InParameterName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.GetBoolParameterDefaultValue
struct UCustomizableObject_GetBoolParameterDefaultValue_Params
{
public:
	class FString                                InParameterName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E88[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObject.FindParameter
struct UCustomizableObject_FindParameter_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E89[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObject.CreateInstance
struct UCustomizableObject_CreateInstance_Params
{
public:
	class UCustomizableObjectInstance*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.DGGUI.SetCustomizableSkeletalComponent
struct UDGGUI_SetCustomizableSkeletalComponent_Params
{
public:
	class UCustomizableSkeletalComponent*        CustomizableSkeletalComponent;                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.DGGUI.GetCustomizableSkeletalComponent
struct UDGGUI_GetCustomizableSkeletalComponent_Params
{
public:
	class UCustomizableSkeletalComponent*        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsyncResult
struct UCustomizableObjectInstance_UpdateSkeletalMeshAsyncResult_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCloseDist;                                  // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceHighPriority;                                // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8E[0x2];                                     // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
struct UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Params
{
public:
	bool                                         bIgnoreCloseDist;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceHighPriority;                                // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
struct UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params
{
public:
	class FString                                VectorParamName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          VectorValue;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOptionT
struct UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Params
{
public:
	class FString                                TextureParamName;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            TextureValue;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8F[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOption
struct UCustomizableObjectInstance_SetTextureParameterSelectedOption_Params
{
public:
	class FString                                TextureParamName;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TextureValue;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E90[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetReplacePhysicsAssets
struct UCustomizableObjectInstance_SetReplacePhysicsAssets_Params
{
public:
	bool                                         bReplaceEnabled;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
struct UCustomizableObjectInstance_SetRandomValues_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
struct UCustomizableObjectInstance_SetProjectorValue_Params
{
public:
	class FString                                ProjectorParamName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutPos;                                            // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutDirection;                                      // 0x28(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutUp;                                             // 0x40(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutScale;                                          // 0x58(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutAngle;                                          // 0x70(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetObject
struct UCustomizableObjectInstance_SetObject_Params
{
public:
	class UCustomizableObject*                   InObject;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
struct UCustomizableObjectInstance_SetIntParameterSelectedOption_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SelectedOptionName;                                // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E91[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
struct UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params
{
public:
	class FString                                FloatParamName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
struct UCustomizableObjectInstance_SetCurrentState_Params
{
public:
	class FString                                StateName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption
struct UCustomizableObjectInstance_SetColorParameterSelectedOption_Params
{
public:
	class FString                                ColorParamName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorValue;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetBuildParameterRelevancy
struct UCustomizableObjectInstance_SetBuildParameterRelevancy_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetBuildParameterDecorations
struct UCustomizableObjectInstance_SetBuildParameterDecorations_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
struct UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params
{
public:
	class FString                                BoolParamName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E92[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromProjectorRange
struct UCustomizableObjectInstance_RemoveValueFromProjectorRange_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E93[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromIntRange
struct UCustomizableObjectInstance_RemoveValueFromIntRange_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E94[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.RemoveValueFromFloatRange
struct UCustomizableObjectInstance_RemoveValueFromFloatRange_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E95[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.RemoveMultilayerProjector
struct UCustomizableObjectInstance_RemoveMultilayerProjector_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateVirtualLayer
struct UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMultilayerProjectorVirtualLayer      Layer;                                             // 0x8(0x88)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateLayer
struct UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMultilayerProjectorLayer             Layer;                                             // 0x8(0x80)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveVirtualLayer
struct UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveLayerAt
struct UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorNumLayers
struct UCustomizableObjectInstance_MultilayerProjectorNumLayers_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayers
struct UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E96[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayer
struct UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMultilayerProjectorVirtualLayer      ReturnValue;                                       // 0x8(0x88)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetLayer
struct UCustomizableObjectInstance_MultilayerProjectorGetLayer_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMultilayerProjectorLayer             ReturnValue;                                       // 0x8(0x80)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorFindOrCreateVirtualLayer
struct UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMultilayerProjectorVirtualLayer      ReturnValue;                                       // 0x8(0x88)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateVirtualLayer
struct UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateLayer
struct UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional
struct UCustomizableObjectInstance_IsParamMultidimensional_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E97[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
struct UCustomizableObjectInstance_IsParameterRelevant_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E98[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.HasAnySkeletalMesh
struct UCustomizableObjectInstance_HasAnySkeletalMesh_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.HasAnyParameters
struct UCustomizableObjectInstance_HasAnyParameters_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetVectorParameters
struct UCustomizableObjectInstance_GetVectorParameters_Params
{
public:
	TArray<struct FCustomizableObjectVectorParameterValue> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetTextureValueRange
struct UCustomizableObjectInstance_GetTextureValueRange_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E99[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetTextureParameterSelectedOption
struct UCustomizableObjectInstance_GetTextureParameterSelectedOption_Params
{
public:
	class FString                                TextureParamName;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9A[0x4];                                     // Fixing Size After Last Property..
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetTextureParameters
struct UCustomizableObjectInstance_GetTextureParameters_Params
{
public:
	TArray<struct FCustomizableObjectTextureParameterValue> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetSkeletalMesh
struct UCustomizableObjectInstance_GetSkeletalMesh_Params
{
public:
	int32                                        ComponentIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9B[0x4];                                     // Fixing Size After Last Property..
	class USkeletalMesh*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetProjectorValueRange
struct UCustomizableObjectInstance_GetProjectorValueRange_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9C[0x4];                                     // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue
struct UCustomizableObjectInstance_GetProjectorValue_Params
{
public:
	class FString                                ProjectorParamName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutPos;                                            // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutDirection;                                      // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutUp;                                             // 0x40(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutScale;                                          // 0x58(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutAngle;                                          // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomizableObjectProjectorType  OutType;                                           // 0x74(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9D[0x3];                                     // Fixing Size After Last Property..
	int32                                        RangeIndex;                                        // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9E[0x4];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp
struct UCustomizableObjectInstance_GetProjectorUp_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9F[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale
struct UCustomizableObjectInstance_GetProjectorScale_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA0[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
struct UCustomizableObjectInstance_GetProjectorPosition_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA1[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
struct UCustomizableObjectInstance_GetProjectorParameterType_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomizableObjectProjectorType  ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA2[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameters
struct UCustomizableObjectInstance_GetProjectorParameters_Params
{
public:
	TArray<struct FCustomizableObjectProjectorParameterValue> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
struct UCustomizableObjectInstance_GetProjectorDirection_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA3[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle
struct UCustomizableObjectInstance_GetProjectorAngle_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription
struct UCustomizableObjectInstance_GetParameterDescription_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DescIndex;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA4[0x4];                                     // Fixing Size After Last Property..
	class UTexture2D*                            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetNumComponents
struct UCustomizableObjectInstance_GetNumComponents_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetIntValueRange
struct UCustomizableObjectInstance_GetIntValueRange_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA5[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
struct UCustomizableObjectInstance_GetIntParameterSelectedOption_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA6[0x4];                                     // Fixing Size After Last Property..
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetIntParameters
struct UCustomizableObjectInstance_GetIntParameters_Params
{
public:
	TArray<struct FCustomizableObjectIntParameterValue> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetFloatValueRange
struct UCustomizableObjectInstance_GetFloatValueRange_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA7[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
struct UCustomizableObjectInstance_GetFloatParameterSelectedOption_Params
{
public:
	class FString                                FloatParamName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameters
struct UCustomizableObjectInstance_GetFloatParameters_Params
{
public:
	TArray<struct FCustomizableObjectFloatParameterValue> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetCustomizableObject
struct UCustomizableObjectInstance_GetCustomizableObject_Params
{
public:
	class UCustomizableObject*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetCurrentState
struct UCustomizableObjectInstance_GetCurrentState_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption
struct UCustomizableObjectInstance_GetColorParameterSelectedOption_Params
{
public:
	class FString                                ColorParamName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetBuildParameterRelevancy
struct UCustomizableObjectInstance_GetBuildParameterRelevancy_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetBuildParameterDecorations
struct UCustomizableObjectInstance_GetBuildParameterDecorations_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
struct UCustomizableObjectInstance_GetBoolParameterSelectedOption_Params
{
public:
	class FString                                BoolParamName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA8[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameters
struct UCustomizableObjectInstance_GetBoolParameters_Params
{
public:
	TArray<struct FCustomizableObjectBoolParameterValue> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetAnimBP
struct UCustomizableObjectInstance_GetAnimBP_Params
{
public:
	int32                                        ComponentIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Slot;                                              // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.GetAnimationGameplayTags
struct UCustomizableObjectInstance_GetAnimationGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.ForEachAnimInstance
struct UCustomizableObjectInstance_ForEachAnimInstance_Params
{
public:
	int32                                        ComponentIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
struct UCustomizableObjectInstance_FindVectorParameterNameIndex_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA9[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
struct UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAA[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
struct UCustomizableObjectInstance_FindIntParameterNameIndex_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAB[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
struct UCustomizableObjectInstance_FindFloatParameterNameIndex_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAC[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
struct UCustomizableObjectInstance_FindBoolParameterNameIndex_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAD[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.CreateMultiLayerProjector
struct UCustomizableObjectInstance_CreateMultiLayerProjector_Params
{
public:
	class FName                                  ProjectorParamName;                                // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAE[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.CloneStatic
struct UCustomizableObjectInstance_CloneStatic_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizableObjectInstance*           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.Clone
struct UCustomizableObjectInstance_Clone_Params
{
public:
	class UCustomizableObjectInstance*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.AddValueToProjectorRange
struct UCustomizableObjectInstance_AddValueToProjectorRange_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAF[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.AddValueToIntRange
struct UCustomizableObjectInstance_AddValueToIntRange_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB0[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObject.CustomizableObjectInstance.AddValueToFloatRange
struct UCustomizableObjectInstance_AddValueToFloatRange_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB1[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately
struct UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Params
{
public:
	bool                                         bReleaseTextures;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances
struct UCustomizableObjectSystem_GetTotalInstances_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed
struct UCustomizableObjectSystem_GetTextureMemoryUsed_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion
struct UCustomizableObjectSystem_GetPluginVersion_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances
struct UCustomizableObjectSystem_GetNumPendingInstances_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CustomizableObject.CustomizableObjectSystem.GetNumInstances
struct UCustomizableObjectSystem_GetNumInstances_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CustomizableObject.CustomizableObjectSystem.GetInstance
struct UCustomizableObjectSystem_GetInstance_Params
{
public:
	class UCustomizableObjectSystem*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime
struct UCustomizableObjectSystem_GetAverageBuildTime_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsyncResult
struct UCustomizableSkeletalComponent_UpdateSkeletalMeshAsyncResult_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCloseDist;                                  // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceHighPriority;                                // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBA[0x2];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
struct UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params
{
public:
	bool                                         bNeverSkipUpdate;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
