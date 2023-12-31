#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x88 - 0x68)
// Class NeuralMorphModel.NeuralMorphInputInfo
class UNeuralMorphInputInfo : public UMLDeformerMorphModelInputInfo
{
public:
	TArray<struct FNeuralMorphBoneGroup>         BoneGroups;                                        // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNeuralMorphCurveGroup>        CurveGroups;                                       // 0x78(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNeuralMorphInputInfo* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class NeuralMorphModel.NeuralMorphModelInstance
class UNeuralMorphModelInstance : public UMLDeformerMorphModelInstance
{
public:
	class UNeuralMorphNetworkInstance*           NetworkInstance;                                   // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_45B3[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNeuralMorphModelInstance* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class NeuralMorphModel.NeuralMorphModelVizSettings
class UNeuralMorphModelVizSettings : public UMLDeformerMorphModelVizSettings
{
public:
	enum class ENeuralMorphMaskVizMode           MaskVizMode;                                       // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45B9[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNeuralMorphModelVizSettings* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class NeuralMorphModel.NeuralMorphMLPLayer
class UNeuralMorphMLPLayer : public UObject
{
public:
	int32                                        NumInputs;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumOutputs;                                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Depth;                                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45BE[0x4];                                     // Fixing Size After Last Property 
	TArray<float>                                Weights;                                           // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Biases;                                            // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNeuralMorphMLPLayer* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class NeuralMorphModel.NeuralMorphMLP
class UNeuralMorphMLP : public UObject
{
public:
	TArray<class UNeuralMorphMLPLayer*>          Layers;                                            // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNeuralMorphMLP* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class NeuralMorphModel.NeuralMorphNetwork
class UNeuralMorphNetwork : public UObject
{
public:
	class UNeuralMorphMLP*                       MainMLP;                                           // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNeuralMorphMLP*                       GroupMLP;                                          // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<float>                                InputMeans;                                        // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                InputStd;                                          // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ENeuralMorphMode                  Mode;                                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_45C5[0x3];                                     // Fixing Size After Last Property 
	int32                                        NumMorphsPerBone;                                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumBones;                                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumCurves;                                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumFloatsPerCurve;                                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumGroups;                                         // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumItemsPerGroup;                                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_45C7[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNeuralMorphNetwork* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class NeuralMorphModel.NeuralMorphNetworkInstance
class UNeuralMorphNetworkInstance : public UObject
{
public:
	uint8                                        Pad_45C9[0x50];                                    // Fixing Size After Last Property 
	class UNeuralMorphNetwork*                   Network;                                           // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNeuralMorphNetworkInstance* GetDefaultObj();

};

// 0x100 (0x288 - 0x188)
// Class NeuralMorphModel.NeuralMorphModel
class UNeuralMorphModel : public UMLDeformerMorphModel
{
public:
	TArray<struct FNeuralMorphBoneGroup>         BoneGroups;                                        // 0x188(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNeuralMorphCurveGroup>        CurveGroups;                                       // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FNeuralMorphMaskInfo> BoneMaskInfos;                                     // 0x1A8(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FNeuralMorphMaskInfo> BoneGroupMaskInfos;                                // 0x1F8(0x50)(NativeAccessSpecifierPublic)
	enum class ENeuralMorphMode                  Mode;                                              // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45CC[0x3];                                     // Fixing Size After Last Property 
	int32                                        LocalNumMorphTargetsPerBone;                       // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GlobalNumMorphTargets;                             // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumIterations;                                     // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalNumHiddenLayers;                              // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalNumNeuronsPerLayer;                           // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GlobalNumHiddenLayers;                             // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GlobalNumNeuronsPerLayer;                          // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BatchSize;                                         // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LearningRate;                                      // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegularizationFactor;                              // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableBoneMasks;                                  // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45D0[0x3];                                     // Fixing Size After Last Property 
	float                                        SmoothLossBeta;                                    // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45D2[0x4];                                     // Fixing Size After Last Property 
	class UNeuralMorphNetwork*                   NeuralMorphNetwork;                                // 0x280(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNeuralMorphModel* GetDefaultObj();

};

}


