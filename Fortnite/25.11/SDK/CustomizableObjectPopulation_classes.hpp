#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class CustomizableObjectPopulation.CustomizableObjectPopulation
class UCustomizableObjectPopulation : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClassWeightPair>              ClassWeights;                                      // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCustomizableObjectPopulationGenerator* Generator;                                         // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CustomizableObjectPopulation");
		return Clss;
	}

	bool RegeneratePopulation(int32 Seed, TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate);
	int32 GeneratePopulation(TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate);
};

// 0x68 (0x90 - 0x28)
// Class CustomizableObjectPopulation.CustomizableObjectPopulationClass
class UCustomizableObjectPopulationClass : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizableObject*                   CustomizableObject;                                // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        AllowList;                                         // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Blocklist;                                         // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectPopulationCharacteristic> Characteristics;                                   // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8297[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CustomizableObjectPopulationClass");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class CustomizableObjectPopulation.CustomizableObjectPopulationGenerator
class UCustomizableObjectPopulationGenerator : public UObject
{
public:
	TArray<class UCustomizableObject*>           PopulationObjects;                                 // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8298[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CustomizableObjectPopulationGenerator");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
