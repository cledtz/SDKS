#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInterchangeCurveInterpMode : uint8
{
	Linear                         = 0,
	Constant                       = 1,
	Cubic                          = 2,
	None                           = 3,
	EInterchangeCurveInterpMode_MAX = 4,
};

enum class EInterchangeCurveTangentMode : uint8
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	None                           = 3,
	EInterchangeCurveTangentMode_MAX = 4,
};

enum class EInterchangeCurveTangentWeightMode : uint8
{
	WeightedNone                   = 0,
	WeightedArrive                 = 1,
	WeightedLeave                  = 2,
	WeightedBoth                   = 3,
	EInterchangeCurveTangentWeightMode_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// ScriptStruct InterchangeCommonParser.InterchangeCurveKey
struct FInterchangeCurveKey
{
public:
	enum class EInterchangeCurveInterpMode       InterpMode;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeCurveTangentMode      TangentMode;                                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeCurveTangentWeightMode TangentWeightMode;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5584[0x1];                                     // Fixing Size After Last Property 
	float                                        Time;                                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArriveTangent;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArriveTangentWeight;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangent;                                      // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangentWeight;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct InterchangeCommonParser.InterchangeCurve
struct FInterchangeCurve
{
public:
	TArray<struct FInterchangeCurveKey>          Keys;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct InterchangeCommonParser.InterchangeStepCurve
struct FInterchangeStepCurve
{
public:
	TArray<float>                                KeyTimes;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5586[0x60];                                    // Fixing Size Of Struct
};

}


