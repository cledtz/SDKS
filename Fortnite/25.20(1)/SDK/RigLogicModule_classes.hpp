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
// Class RigLogicModule.DNAIndexMapping
class UDNAIndexMapping : public UAssetUserData
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DNAIndexMapping");
		return Clss;
	}

};

// 0xA8 (0xD0 - 0x28)
// Class RigLogicModule.DNAAsset
class UDNAAsset : public UAssetUserData
{
public:
	class FString                                DnaFileName;                                       // 0x28(0x10)(Edit, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8569[0x98];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DNAAsset");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class RigLogicModule.SkelMeshDNAUtils
class USkelMeshDNAUtils : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SkelMeshDNAUtils");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
