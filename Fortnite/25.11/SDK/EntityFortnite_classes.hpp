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
// Class EntityFortnite.EntityFortniteInterface
class UEntityFortniteInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityFortniteInterface");
		return Clss;
	}

};

// 0x0 (0xE8 - 0xE8)
// Class EntityFortnite.EntityFortnitePlayerComponent
class UEntityFortnitePlayerComponent : public UEntityActorPlayerComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityFortnitePlayerComponent");
		return Clss;
	}

};

// 0x10 (0x70 - 0x60)
// Class EntityFortnite.EntityFortniteStormControllerComponent
class UEntityFortniteStormControllerComponent : public UEntityComponent
{
public:
	TSubclassOf<class AEntityFortniteStormSpawner> StormSpawnerClass;                                 // 0x60(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AEntityFortniteStormSpawner*           StormSpawner;                                      // 0x68(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityFortniteStormControllerComponent");
		return Clss;
	}

};

// 0x8 (0x290 - 0x288)
// Class EntityFortnite.EntityFortniteStormSpawner
class AEntityFortniteStormSpawner : public AActor
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x288(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityFortniteStormSpawner");
		return Clss;
	}

	void Stop();
	void Start(float StartRadius, float BoundsRadius, TArray<struct FEntityFortniteStormPhase>& Phases);
	void Pause();
	bool Exists();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
