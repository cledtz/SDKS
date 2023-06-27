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

// 0x148 (0x148 - 0x0)
// ScriptStruct LiveEditObject.LiveEditObjectTestStruct
struct FLiveEditObjectTestStruct
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Int8;                                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        Int16;                                             // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int32;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Int64;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E3F[0x4];                                     // Fixing Size After Last Property..
	double                                       Double;                                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x30(0x18)(NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E40[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               RawObjectPtr;                                      // 0x50(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ObjectPtr;                                         // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       SoftObjectPath;                                    // 0x60(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Struct;                                            // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FixedArray[0x4];                                   // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                DynamicArray;                                      // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<int32>                                  Set;                                               // 0xA8(0x50)(NativeAccessSpecifierPublic)
	TMap<int32, int32>                           Map;                                               // 0xF8(0x50)(NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
