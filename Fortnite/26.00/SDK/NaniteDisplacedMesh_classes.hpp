#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x80 - 0x28)
// Class NaniteDisplacedMesh.NaniteDisplacedMesh
class UNaniteDisplacedMesh : public UObject
{
public:
	uint8                                        Pad_2729[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNaniteDisplacedMesh* GetDefaultObj();

};

// 0x10 (0x630 - 0x620)
// Class NaniteDisplacedMesh.NaniteDisplacedMeshComponent
class UNaniteDisplacedMeshComponent : public UStaticMeshComponent
{
public:
	class UNaniteDisplacedMesh*                  DisplacedMesh;                                     // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2730[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNaniteDisplacedMeshComponent* GetDefaultObj();

};

}


