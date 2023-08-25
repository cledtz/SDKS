#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UDNAIndexMapping* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class RigLogicModule.DNAAsset
class UDNAAsset : public UAssetUserData
{
public:
	class FString                                DnaFileName;                                       // 0x28(0x10)(Edit, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BDC[0x98];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDNAAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RigLogicModule.SkelMeshDNAUtils
class USkelMeshDNAUtils : public UObject
{
public:

	static class UClass* StaticClass();
	static class USkelMeshDNAUtils* GetDefaultObj();

};

}


