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

// 0x38 (0x60 - 0x28)
// Class EntityCore.EntityComponent
class UEntityComponent : public UObject
{
public:
	uint8                                        Pad_237A[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityComponent");
		return Clss;
	}

};

// 0x8 (0x68 - 0x60)
// Class EntityCore.EntityDataBackedComponent
class UEntityDataBackedComponent : public UEntityComponent
{
public:
	uint8                                        Pad_237B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityDataBackedComponent");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class EntityCore.EntityPositionComponent
class UEntityPositionComponent : public UEntityDataBackedComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityPositionComponent");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class EntityCore.EntityRotationComponent
class UEntityRotationComponent : public UEntityDataBackedComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityRotationComponent");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class EntityCore.EntityScaleComponent
class UEntityScaleComponent : public UEntityDataBackedComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityScaleComponent");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class EntityCore.EntityCoreDataBackedRelativePositionComponent
class UEntityCoreDataBackedRelativePositionComponent : public UEntityDataBackedComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityCoreDataBackedRelativePositionComponent");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class EntityCore.Entity
class UEntity : public UObject
{
public:
	uint8                                        Pad_237C[0x8];                                     // Fixing Size After Last Property..
	class ULevel*                                Level;                                             // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Entity");
		return Clss;
	}

};

// 0x170 (0x1A0 - 0x30)
// Class EntityCore.EntityCoreSubsystem
class UEntityCoreSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_237D[0x10];                                    // Fixing Size After Last Property..
	TMap<uint32, struct FEntityComponentContainer> ComponentMap;                                      // 0x40(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_237E[0x58];                                    // Fixing Size After Last Property..
	TArray<class UEntityComponent*>              ComponentArray;                                    // 0xE8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<uint32, class UEntity*>                 Entities;                                          // 0xF8(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_237F[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityCoreSubsystem");
		return Clss;
	}

};

// 0x20 (0x80 - 0x60)
// Class EntityCore.EntityEnableableComponent
class UEntityEnableableComponent : public UEntityComponent
{
public:
	uint8                                        IsEnabled : 1;                                     // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        LastIsEnabled : 1;                                 // Mask: 0x2, PropSize: 0x10x60(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2380[0x1F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityEnableableComponent");
		return Clss;
	}

	void OnRep_Enabled();
};

// 0x38 (0xB8 - 0x80)
// Class EntityCore.EntityTickableComponent
class UEntityTickableComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_2381[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityTickableComponent");
		return Clss;
	}

};

// 0x0 (0xB8 - 0xB8)
// Class EntityCore.EntityScriptComponent
class UEntityScriptComponent : public UEntityTickableComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityScriptComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
