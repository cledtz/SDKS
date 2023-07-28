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

// 0x20 (0x88 - 0x68)
// Class NeuralMorphModel.NeuralMorphInputInfo
class UNeuralMorphInputInfo : public UMLDeformerInputInfo
{
public:
	TArray<struct FNeuralMorphBoneGroup>         BoneGroups;                                        // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNeuralMorphCurveGroup>        CurveGroups;                                       // 0x78(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NeuralMorphInputInfo");
		return Clss;
	}

};

// 0x28 (0xD8 - 0xB0)
// Class NeuralMorphModel.NeuralMorphModelInstance
class UNeuralMorphModelInstance : public UMLDeformerMorphModelInstance
{
public:
	class UNeuralMorphNetworkInstance*           NetworkInstance;                                   // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_828C[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NeuralMorphModelInstance");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class NeuralMorphModel.NeuralMorphModelVizSettings
class UNeuralMorphModelVizSettings : public UMLDeformerMorphModelVizSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NeuralMorphModelVizSettings");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class NeuralMorphModel.NeuralMorphMLPLayer
class UNeuralMorphMLPLayer : public UObject
{
public:
	int32                                        NumInputs;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumOutputs;                                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Depth;                                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_828D[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                Weights;                                           // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Biases;                                            // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NeuralMorphMLPLayer");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class NeuralMorphModel.NeuralMorphMLP
class UNeuralMorphMLP : public UObject
{
public:
	TArray<class UNeuralMorphMLPLayer*>          Layers;                                            // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NeuralMorphMLP");
		return Clss;
	}

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
	uint8                                        Pad_828E[0x3];                                     // Fixing Size After Last Property..
	int32                                        NumMorphsPerBone;                                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumBones;                                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumCurves;                                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumFloatsPerCurve;                                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumGroups;                                         // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumItemsPerGroup;                                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_828F[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NeuralMorphNetwork");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class NeuralMorphModel.NeuralMorphNetworkInstance
class UNeuralMorphNetworkInstance : public UObject
{
public:
	uint8                                        Pad_8290[0x50];                                    // Fixing Size After Last Property..
	class UNeuralMorphNetwork*                   Network;                                           // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NeuralMorphNetworkInstance");
		return Clss;
	}

};

// 0x58 (0x1B8 - 0x160)
// Class NeuralMorphModel.NeuralMorphModel
class UNeuralMorphModel : public UMLDeformerMorphModel
{
public:
	TArray<struct FNeuralMorphBoneGroup>         BoneGroups;                                        // 0x160(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNeuralMorphCurveGroup>        CurveGroups;                                       // 0x170(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENeuralMorphMode                  Mode;                                              // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8291[0x3];                                     // Fixing Size After Last Property..
	int32                                        LocalNumMorphTargetsPerBone;                       // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GlobalNumMorphTargets;                             // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumIterations;                                     // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalNumHiddenLayers;                              // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalNumNeuronsPerLayer;                           // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GlobalNumHiddenLayers;                             // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GlobalNumNeuronsPerLayer;                          // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BatchSize;                                         // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LearningRate;                                      // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LearningRateDecay;                                 // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegularizationFactor;                              // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeuralMorphNetwork*                   NeuralMorphNetwork;                                // 0x1B0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NeuralMorphModel");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
