#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class VerseSimulationMetadata.VerseSimulationAttribConfig
class UVerseSimulationAttribConfig : public UObject
{
public:
	TArray<class FName>                          AllowedEditablePropertyNames;                      // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<class FName>                          DisallowedEditablePropertyNames;                   // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FSoftClassPath>                DisallowedObjectPropertyClasses;                   // 0x48(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	bool                                         bAllowTuples;                                      // 0x58(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowMultidimensionalArrays;                      // 0x59(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFilterProperties;                                 // 0x5A(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFilterObjectProperties;                           // 0x5B(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF4[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseSimulationAttribConfig");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
