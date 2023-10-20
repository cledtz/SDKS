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

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.WriteToFilePath
struct UVaRestJsonObject_WriteToFilePath_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRelativeToProjectDir;                           // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42[0x6];                                       // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.SetStringField
struct UVaRestJsonObject_SetStringField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringValue;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.SetStringArrayField
struct UVaRestJsonObject_SetStringArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        StringArray;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.SetObjectField
struct UVaRestJsonObject_SetObjectField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                     JsonObject;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.SetObjectArrayField
struct UVaRestJsonObject_SetObjectArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonObject*>             ObjectArray;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.SetNumberFieldDouble
struct UVaRestJsonObject_SetNumberFieldDouble_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Number;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.SetNumberField
struct UVaRestJsonObject_SetNumberField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Number;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C[0x4];                                       // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.SetNumberArrayFieldDouble
struct UVaRestJsonObject_SetNumberArrayFieldDouble_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<double>                               NumberArray;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.SetNumberArrayField
struct UVaRestJsonObject_SetNumberArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                NumberArray;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function VaRest.VaRestJsonObject.SetMapFields_uint8
struct UVaRestJsonObject_SetMapFields_uint8_Params
{
public:
	TMap<class FString, uint8>                   Fields;                                            // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function VaRest.VaRestJsonObject.SetMapFields_string
struct UVaRestJsonObject_SetMapFields_string_Params
{
public:
	TMap<class FString, class FString>           Fields;                                            // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function VaRest.VaRestJsonObject.SetMapFields_int64
struct UVaRestJsonObject_SetMapFields_int64_Params
{
public:
	TMap<class FString, int64>                   Fields;                                            // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function VaRest.VaRestJsonObject.SetMapFields_int32
struct UVaRestJsonObject_SetMapFields_int32_Params
{
public:
	TMap<class FString, int32>                   Fields;                                            // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function VaRest.VaRestJsonObject.SetMapFields_bool
struct UVaRestJsonObject_SetMapFields_bool_Params
{
public:
	TMap<class FString, bool>                    Fields;                                            // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.SetIntegerField
struct UVaRestJsonObject_SetIntegerField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Number;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78[0x4];                                       // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.SetInt64Field
struct UVaRestJsonObject_SetInt64Field_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Number;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.SetField
struct UVaRestJsonObject_SetField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                      JsonValue;                                         // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.SetBoolField
struct UVaRestJsonObject_SetBoolField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InValue;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C[0x7];                                       // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.SetBoolArrayField
struct UVaRestJsonObject_SetBoolArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 BoolArray;                                         // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.SetArrayField
struct UVaRestJsonObject_SetArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonValue*>              InArray;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VaRest.VaRestJsonObject.Reset
struct UVaRestJsonObject_Reset_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestJsonObject.RemoveField
struct UVaRestJsonObject_RemoveField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestJsonObject.MergeJsonObject
struct UVaRestJsonObject_MergeJsonObject_Params
{
public:
	class UVaRestJsonObject*                     InJsonObject;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Overwrite;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91[0x7];                                       // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.HasField
struct UVaRestJsonObject_HasField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99[0x7];                                       // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.GetStringField
struct UVaRestJsonObject_GetStringField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.GetStringArrayField
struct UVaRestJsonObject_GetStringArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.GetObjectField
struct UVaRestJsonObject_GetObjectField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.GetObjectArrayField
struct UVaRestJsonObject_GetObjectArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonObject*>             ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.GetNumberField
struct UVaRestJsonObject_GetNumberField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9[0x4];                                       // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.GetNumberArrayField
struct UVaRestJsonObject_GetNumberArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.GetIntegerField
struct UVaRestJsonObject_GetIntegerField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF[0x4];                                       // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.GetIntegerArrayField
struct UVaRestJsonObject_GetIntegerArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.GetInt64Field
struct UVaRestJsonObject_GetInt64Field_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.GetFieldTypeString
struct UVaRestJsonObject_GetFieldTypeString_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestJsonObject.GetFieldNames
struct UVaRestJsonObject_GetFieldNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.GetField
struct UVaRestJsonObject_GetField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.GetBoolField
struct UVaRestJsonObject_GetBoolField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8[0x7];                                       // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.GetBoolArrayField
struct UVaRestJsonObject_GetBoolArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestJsonObject.GetArrayField
struct UVaRestJsonObject_GetArrayField_Params
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVaRestJsonValue*>              ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestJsonObject.EncodeJsonToSingleString
struct UVaRestJsonObject_EncodeJsonToSingleString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestJsonObject.EncodeJson
struct UVaRestJsonObject_EncodeJson_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestJsonObject.DecodeJson
struct UVaRestJsonObject_DecodeJson_Params
{
public:
	class FString                                JsonString;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseIncrementalParser;                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4[0x6];                                       // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function VaRest.VaRestJsonValue.Reset
struct UVaRestJsonValue_Reset_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VaRest.VaRestJsonValue.IsNull
struct UVaRestJsonValue_IsNull_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestJsonValue.GetTypeString
struct UVaRestJsonValue_GetTypeString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VaRest.VaRestJsonValue.GetType
struct UVaRestJsonValue_GetType_Params
{
public:
	enum class EVaJson                           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestJsonValue.AsString
struct UVaRestJsonValue_AsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestJsonValue.AsObject
struct UVaRestJsonValue_AsObject_Params
{
public:
	class UVaRestJsonObject*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VaRest.VaRestJsonValue.AsNumber
struct UVaRestJsonValue_AsNumber_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestJsonValue.AsInt64
struct UVaRestJsonValue_AsInt64_Params
{
public:
	int64                                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VaRest.VaRestJsonValue.AsInt32
struct UVaRestJsonValue_AsInt32_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VaRest.VaRestJsonValue.AsBool
struct UVaRestJsonValue_AsBool_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestJsonValue.AsArray
struct UVaRestJsonValue_AsArray_Params
{
public:
	TArray<class UVaRestJsonValue*>              ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestLibrary.StringToSha1
struct UVaRestLibrary_StringToSha1_Params
{
public:
	class FString                                StringToHash;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestLibrary.StringToMd5
struct UVaRestLibrary_StringToMd5_Params
{
public:
	class FString                                StringToHash;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestLibrary.PercentEncode
struct UVaRestLibrary_PercentEncode_Params
{
public:
	class FString                                Source;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestLibrary.HTTPStatusIntToEnum
struct UVaRestLibrary_HTTPStatusIntToEnum_Params
{
public:
	int32                                        StatusCode;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVaRestHttpStatusCode             ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A[0x3];                                      // Fixing Size Of Struct
};

// 0x70 (0x70 - 0x0)
// Function VaRest.VaRestLibrary.GetWorldURL
struct UVaRestLibrary_GetWorldURL_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVaRestURL                            ReturnValue;                                       // 0x8(0x68)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestLibrary.GetVaRestVersion
struct UVaRestLibrary_GetVaRestVersion_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestLibrary.GetVaRestSettings
struct UVaRestLibrary_GetVaRestSettings_Params
{
public:
	class UVaRestSettings*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VaRest.VaRestLibrary.Base64EncodeData
struct UVaRestLibrary_Base64EncodeData_Params
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Dest;                                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestLibrary.Base64Encode
struct UVaRestLibrary_Base64Encode_Params
{
public:
	class FString                                Source;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VaRest.VaRestLibrary.Base64DecodeData
struct UVaRestLibrary_Base64DecodeData_Params
{
public:
	class FString                                Source;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Dest;                                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159[0x7];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function VaRest.VaRestLibrary.Base64Decode
struct UVaRestLibrary_Base64Decode_Params
{
public:
	class FString                                Source;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Dest;                                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D[0x7];                                      // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function VaRest.VaRestRequestJSON.SetVerb
struct UVaRestRequestJSON_SetVerb_Params
{
public:
	enum class EVaRestRequestVerb                Verb;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestRequestJSON.SetURL
struct UVaRestRequestJSON_SetURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestRequestJSON.SetStringRequestContent
struct UVaRestRequestJSON_SetStringRequestContent_Params
{
public:
	class FString                                Content;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestRequestJSON.SetResponseObject
struct UVaRestRequestJSON_SetResponseObject_Params
{
public:
	class UVaRestJsonObject*                     JsonObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestRequestJSON.SetRequestObject
struct UVaRestRequestJSON_SetRequestObject_Params
{
public:
	class UVaRestJsonObject*                     JsonObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestRequestJSON.SetHeader
struct UVaRestRequestJSON_SetHeader_Params
{
public:
	class FString                                HeaderName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HeaderValue;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestRequestJSON.SetCustomVerb
struct UVaRestRequestJSON_SetCustomVerb_Params
{
public:
	class FString                                Verb;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VaRest.VaRestRequestJSON.SetContentType
struct UVaRestRequestJSON_SetContentType_Params
{
public:
	enum class EVaRestRequestContentType         ContentType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestRequestJSON.SetBinaryRequestContent
struct UVaRestRequestJSON_SetBinaryRequestContent_Params
{
public:
	TArray<uint8>                                Content;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestRequestJSON.SetBinaryContentType
struct UVaRestRequestJSON_SetBinaryContentType_Params
{
public:
	class FString                                ContentType;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VaRest.VaRestRequestJSON.ResetResponseData
struct UVaRestRequestJSON_ResetResponseData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VaRest.VaRestRequestJSON.ResetRequestData
struct UVaRestRequestJSON_ResetRequestData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VaRest.VaRestRequestJSON.ResetData
struct UVaRestRequestJSON_ResetData_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function VaRest.VaRestRequestJSON.RemoveTag
struct UVaRestRequestJSON_RemoveTag_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestRequestJSON.ProcessURL
struct UVaRestRequestJSON_ProcessURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VaRest.VaRestRequestJSON.HasTag
struct UVaRestRequestJSON_HasTag_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189[0x3];                                      // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function VaRest.VaRestRequestJSON.GetVerb
struct UVaRestRequestJSON_GetVerb_Params
{
public:
	enum class EVaRestRequestVerb                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestRequestJSON.GetURL
struct UVaRestRequestJSON_GetURL_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VaRest.VaRestRequestJSON.GetStatus
struct UVaRestRequestJSON_GetStatus_Params
{
public:
	enum class EVaRestRequestStatus              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestRequestJSON.GetResponseValue
struct UVaRestRequestJSON_GetResponseValue_Params
{
public:
	class UVaRestJsonValue*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestRequestJSON.GetResponseObject
struct UVaRestRequestJSON_GetResponseObject_Params
{
public:
	class UVaRestJsonObject*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestRequestJSON.GetResponseHeader
struct UVaRestRequestJSON_GetResponseHeader_Params
{
public:
	class FString                                HeaderName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VaRest.VaRestRequestJSON.GetResponseContentLength
struct UVaRestRequestJSON_GetResponseContentLength_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestRequestJSON.GetResponseContentAsString
struct UVaRestRequestJSON_GetResponseContentAsString_Params
{
public:
	bool                                         bCacheResponseContent;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A8[0x7];                                      // Fixing Size After Last Property 
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestRequestJSON.GetResponseContent
struct UVaRestRequestJSON_GetResponseContent_Params
{
public:
	TArray<uint8>                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VaRest.VaRestRequestJSON.GetResponseCode
struct UVaRestRequestJSON_GetResponseCode_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestRequestJSON.GetRequestObject
struct UVaRestRequestJSON_GetRequestObject_Params
{
public:
	class UVaRestJsonObject*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestRequestJSON.GetAllResponseHeaders
struct UVaRestRequestJSON_GetAllResponseHeaders_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VaRest.VaRestRequestJSON.ExecuteProcessRequest
struct UVaRestRequestJSON_ExecuteProcessRequest_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VaRest.VaRestRequestJSON.Cancel
struct UVaRestRequestJSON_Cancel_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function VaRest.VaRestRequestJSON.ApplyURL
struct UVaRestRequestJSON_ApplyURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                     Result;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestRequestJSON.AddTag
struct UVaRestRequestJSON_AddTag_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject
struct UVaRestSubsystem_StaticConstructVaRestJsonObject_Params
{
public:
	class UVaRestJsonObject*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VaRest.VaRestSubsystem.LoadJsonFromFile
struct UVaRestSubsystem_LoadJsonFromFile_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRelativeToContentDir;                           // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0[0x7];                                      // Fixing Size After Last Property 
	class UVaRestJsonObject*                     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestSubsystem.DecodeJsonValue
struct UVaRestSubsystem_DecodeJsonValue_Params
{
public:
	class FString                                JsonString;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestSubsystem.DecodeJsonObject
struct UVaRestSubsystem_DecodeJsonObject_Params
{
public:
	class FString                                JsonString;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonObject*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestSubsystem.ConstructVaRestRequestExt
struct UVaRestSubsystem_ConstructVaRestRequestExt_Params
{
public:
	enum class EVaRestRequestVerb                Verb;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVaRestRequestContentType         ContentType;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF[0x6];                                      // Fixing Size After Last Property 
	class UVaRestRequestJSON*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestSubsystem.ConstructVaRestRequest
struct UVaRestSubsystem_ConstructVaRestRequest_Params
{
public:
	class UVaRestRequestJSON*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VaRest.VaRestSubsystem.ConstructVaRestJsonObject
struct UVaRestSubsystem_ConstructVaRestJsonObject_Params
{
public:
	class UVaRestJsonObject*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestSubsystem.ConstructJsonValueString
struct UVaRestSubsystem_ConstructJsonValueString_Params
{
public:
	class FString                                StringValue;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestSubsystem.ConstructJsonValueObject
struct UVaRestSubsystem_ConstructJsonValueObject_Params
{
public:
	class UVaRestJsonObject*                     JsonObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestSubsystem.ConstructJsonValueNumber
struct UVaRestSubsystem_ConstructJsonValueNumber_Params
{
public:
	float                                        Number;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0[0x4];                                      // Fixing Size After Last Property 
	class UVaRestJsonValue*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VaRest.VaRestSubsystem.ConstructJsonValueBool
struct UVaRestSubsystem_ConstructJsonValueBool_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4[0x7];                                      // Fixing Size After Last Property 
	class UVaRestJsonValue*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VaRest.VaRestSubsystem.ConstructJsonValueArray
struct UVaRestSubsystem_ConstructJsonValueArray_Params
{
public:
	TArray<class UVaRestJsonValue*>              InArray;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UVaRestJsonValue*                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VaRest.VaRestSubsystem.CallURL
struct UVaRestSubsystem_CallURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVaRestRequestVerb                Verb;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVaRestRequestContentType         ContentType;                                       // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE[0x6];                                      // Fixing Size After Last Property 
	class UVaRestJsonObject*                     VaRestJson;                                        // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


