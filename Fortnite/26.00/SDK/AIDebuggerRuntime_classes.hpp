#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AIDebuggerRuntime.AIDebuggerCheatManager
class UAIDebuggerCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class UAIDebuggerCheatManager* GetDefaultObj();

	void StartAIDebugger(const class FString& AIDebuggerSoftClassPath);
	void NextNavMesh();
	void EnableNavMeshVisualizer(bool bEnable);
};

// 0xA8 (0x610 - 0x568)
// Class AIDebuggerRuntime.AIDebuggerRendererComponent
class UAIDebuggerRendererComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_462[0x98];                                     // Fixing Size After Last Property 
	class UMaterial*                             NavMeshMaterial;                                   // 0x600(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NavLinkLineThickness;                              // 0x608(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NavLinkMaxDrawDistance;                            // 0x60C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAIDebuggerRendererComponent* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class AIDebuggerRuntime.FortControllerComponent_AIDebugger
class UFortControllerComponent_AIDebugger : public UFortControllerComponent
{
public:
	class UPlayerController*                     OwnerPC;                                           // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIDebuggerRendererComponent> NavMeshRendererComponentClass;                     // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        DefaultEnabledVisualizers;                         // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_47B[0x3];                                      // Fixing Size After Last Property 
	int32                                        DefaultNavDataIndexToDisplay;                      // 0xBC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        EnabledVisualizers;                                // 0xC0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        NumNavMeshes;                                      // 0xC1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_47E[0x1E];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortControllerComponent_AIDebugger* GetDefaultObj();

	void VisualizeNextNavMesh();
	void VisualizeNavMeshID(int32 NavMeshID);
	void SetVisualizationEnable(enum class EAIDebuggerVisualization VisualizationType, bool bEnable);
	void OnRep_EnabledVisualizers();
	void OnPlayerExitedIsland(const struct FEventMessageTag& Channel, struct FPlayerExitSpatialActorContextWithPawn& PlayerExitSpatialActorContext);
	bool IsVisualizationEnabled(enum class EAIDebuggerVisualization VisualizationType);
	class UAIDebuggerRendererComponent* GetOrCreateRenderer();
};

}


