#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x70 - 0x60)
// Class InterchangeMessages.InterchangeResultMeshWarning
class UInterchangeResultMeshWarning : public UInterchangeResultWarning
{
public:
	class FString                                MeshName;                                          // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeResultMeshWarning* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class InterchangeMessages.InterchangeResultTextureWarning
class UInterchangeResultTextureWarning : public UInterchangeResultWarning
{
public:
	class FString                                TextureName;                                       // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeResultTextureWarning* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class InterchangeMessages.InterchangeResultMeshError
class UInterchangeResultMeshError : public UInterchangeResultError
{
public:
	class FString                                MeshName;                                          // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeResultMeshError* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class InterchangeMessages.InterchangeResultMeshWarning_Generic
class UInterchangeResultMeshWarning_Generic : public UInterchangeResultMeshWarning
{
public:
	class FText                                  Text;                                              // 0x70(0x18)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeResultMeshWarning_Generic* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class InterchangeMessages.InterchangeResultMeshError_Generic
class UInterchangeResultMeshError_Generic : public UInterchangeResultMeshError
{
public:
	class FText                                  Text;                                              // 0x70(0x18)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeResultMeshError_Generic* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
class UInterchangeResultMeshWarning_TooManyUVs : public UInterchangeResultMeshWarning
{
public:
	int32                                        ExcessUVs;                                         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55E[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeResultMeshWarning_TooManyUVs* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class InterchangeMessages.InterchangeResultTextureWarning_TextureFileDoNotExist
class UInterchangeResultTextureWarning_TextureFileDoNotExist : public UInterchangeResultTextureWarning
{
public:
	class FText                                  Text;                                              // 0x70(0x18)(NativeAccessSpecifierPublic)
	class FString                                MaterialName;                                      // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeResultTextureWarning_TextureFileDoNotExist* GetDefaultObj();

};

}


