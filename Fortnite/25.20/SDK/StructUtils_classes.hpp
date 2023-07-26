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

// 0x0 (0x28 - 0x28)
// Class StructUtils.PropertyBagMissingObject
class UPropertyBagMissingObject : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PropertyBagMissingObject");
		return Clss;
	}

};

// 0x18 (0xD8 - 0xC0)
// Class StructUtils.PropertyBag
class UPropertyBag : public UScriptStruct
{
public:
	TArray<struct FPropertyBagPropertyDesc>      PropertyDescs;                                     // 0xC0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3749[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PropertyBag");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
