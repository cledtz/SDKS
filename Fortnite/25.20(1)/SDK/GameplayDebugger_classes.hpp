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

// 0xB8 (0x348 - 0x290)
// Class GameplayDebugger.GameplayDebuggerCategoryReplicator
class UGameplayDebuggerCategoryReplicator : public UActor
{
public:
	class UPlayerController*                     OwnerPC;                                           // 0x290(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsEnabled;                                        // 0x298(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3766[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayDebuggerNetPack              ReplicatedData;                                    // 0x2A0(0x18)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FGameplayDebuggerDebugActor           DebugActor;                                        // 0x2B8(0x10)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayDebuggerVisLogSync           VisLogSync;                                        // 0x2C8(0x10)(Net, Protected, NativeAccessSpecifierProtected)
	class UGameplayDebuggerRenderingComponent*   RenderingComp;                                     // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3767[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayDebuggerCategoryReplicator");
		return Clss;
	}

	void ServerSetViewPoint(struct FVector& InViewLocation, struct FVector& InViewDirection);
	void ServerSetEnabled(bool bEnable);
	void ServerSetDebugActor(class UActor* Actor, bool bSelectInEditor);
	void ServerSetCategoryEnabled(int32 CategoryId, bool bEnable);
	void ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId);
	void ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId);
	void ServerResetViewPoint();
	void OnRep_ReplicatedData();
	void ClientDataPackPacket(struct FGameplayDebuggerDataPackRPCParams& Params);
};

// 0x230 (0x258 - 0x28)
// Class GameplayDebugger.GameplayDebuggerConfig
class UGameplayDebuggerConfig : public UObject
{
public:
	struct FKey                                  ActivationKey;                                     // 0x28(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategoryRowNextKey;                                // 0x40(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategoryRowPrevKey;                                // 0x58(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot0;                                     // 0x70(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot1;                                     // 0x88(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot2;                                     // 0xA0(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot3;                                     // 0xB8(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot4;                                     // 0xD0(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot5;                                     // 0xE8(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot6;                                     // 0x100(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot7;                                     // 0x118(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot8;                                     // 0x130(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot9;                                     // 0x148(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugCanvasPaddingLeft;                            // 0x160(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugCanvasPaddingRight;                           // 0x164(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugCanvasPaddingTop;                             // 0x168(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugCanvasPaddingBottom;                          // 0x16C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugCanvasEnableTextShadow;                      // 0x170(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3768[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayDebuggerCategoryConfig> Categories;                                        // 0x178(0x10)(Edit, EditFixedSize, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGameplayDebuggerExtensionConfig> Extensions;                                        // 0x188(0x10)(Edit, EditFixedSize, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_3769[0xC0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayDebuggerConfig");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class GameplayDebugger.GameplayDebuggerUserSettings
class UGameplayDebuggerUserSettings : public UDeveloperSettings
{
public:
	uint8                                        bEnableGameplayDebuggerInEditor : 1;               // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_227 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_376A[0x3];                                     // Fixing Size After Last Property..
	float                                        MaxViewDistance;                                   // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxViewAngle;                                      // 0x38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FontSize;                                          // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayDebuggerUserSettings");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class GameplayDebugger.GameplayDebuggerLocalController
class UGameplayDebuggerLocalController : public UObject
{
public:
	class UGameplayDebuggerCategoryReplicator*   CachedReplicator;                                  // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayDebuggerPlayerManager*        CachedPlayerManager;                               // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActor*                                DebugActorCandidate;                               // 0x38(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFont*                                 HUDFont;                                           // 0x40(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_376B[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayDebuggerLocalController");
		return Clss;
	}

};

// 0x30 (0x2C0 - 0x290)
// Class GameplayDebugger.GameplayDebuggerPlayerManager
class UGameplayDebuggerPlayerManager : public UActor
{
public:
	uint8                                        Pad_376C[0x8];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayDebuggerPlayerData>   PlayerData;                                        // 0x298(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayDebuggerCategoryReplicator*> PendingRegistrations;                              // 0x2A8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_376D[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayDebuggerPlayerManager");
		return Clss;
	}

};

// 0x68 (0x620 - 0x5B8)
// Class GameplayDebugger.GameplayDebuggerRenderingComponent
class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_376E[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayDebuggerRenderingComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
