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

// 0x110 (0x138 - 0x28)
// Class NaniteDisplacedMesh.NaniteDisplacedMesh
class UNaniteDisplacedMesh : public UObject
{
public:
	uint8                                        Pad_41AD[0x110];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NaniteDisplacedMesh");
		return Clss;
	}

};

// 0x10 (0x630 - 0x620)
// Class NaniteDisplacedMesh.NaniteDisplacedMeshComponent
class UNaniteDisplacedMeshComponent : public UStaticMeshComponent
{
public:
	class UNaniteDisplacedMesh*                  DisplacedMesh;                                     // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41AE[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NaniteDisplacedMeshComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
