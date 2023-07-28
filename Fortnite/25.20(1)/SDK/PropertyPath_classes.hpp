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

// 0x128 (0x150 - 0x28)
// Class PropertyPath.PropertyPathTestObject
class UPropertyPathTestObject : public UObject
{
public:
	bool                                         Bool;                                              // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x2A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x2B(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x2C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B4[0x3];                                     // Fixing Size After Last Property..
	int32                                        Integer;                                           // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B5[0x4];                                     // Fixing Size After Last Property..
	class FString                                String;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B6[0x4];                                     // Fixing Size After Last Property..
	struct FPropertyPathTestStruct               Struct;                                            // 0x50(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPropertyPathTestStruct               StructRef;                                         // 0xA0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPropertyPathTestStruct               StructConstRef;                                    // 0xF0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x140(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B7[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PropertyPathTestObject");
		return Clss;
	}

	void SetStructRef(const struct FPropertyPathTestStruct& InStruct);
	void SetStructConstRef(const struct FPropertyPathTestStruct& InStruct);
	void SetStruct(const struct FPropertyPathTestStruct& InStruct);
	void SetFloat(float InFloat);
	struct FPropertyPathTestStruct GetStructRef();
	struct FPropertyPathTestStruct GetStructConstRef();
	struct FPropertyPathTestStruct GetStruct();
	float GetFloat();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
