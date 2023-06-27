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

enum class EAudioParameterType : uint8
{
	None                           = 0,
	Boolean                        = 1,
	Integer                        = 2,
	Float                          = 3,
	String                         = 4,
	Object                         = 5,
	NoneArray                      = 6,
	BooleanArray                   = 7,
	IntegerArray                   = 8,
	FloatArray                     = 9,
	StringArray                    = 10,
	ObjectArray                    = 11,
	Trigger                        = 12,
	COUNT                          = 13,
	EAudioParameterType_MAX        = 14,
};

enum class EPcmBitDepthConversion : uint8
{
	SameAsSource                   = 0,
	Int16                          = 1,
	Float32                        = 2,
	EPcmBitDepthConversion_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct AudioExtensions.SoundGeneratorOutput
struct FSoundGeneratorOutput
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct AudioExtensions.AudioParameter
struct FAudioParameter
{
public:
	class FName                                  ParamName;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatParam;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolParam;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B5[0x3];                                     // Fixing Size After Last Property..
	int32                                        IntParam;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ObjectParam;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringParam;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                ArrayFloatParam;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 ArrayBoolParam;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ArrayIntParam;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ArrayObjectParam;                                  // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FString>                        ArrayStringParam;                                  // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAudioParameterType               ParamType;                                         // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B6[0x3];                                     // Fixing Size After Last Property..
	class FName                                  TypeName;                                          // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B7[0x10];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
