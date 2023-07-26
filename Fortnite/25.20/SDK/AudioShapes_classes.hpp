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

// 0x98 (0x140 - 0xA8)
// Class AudioShapes.AudioShapeComponent
class UAudioShapeComponent : public UAudioGameplayComponent
{
public:
	uint8                                        Pad_17A3[0x8];                                     // Fixing Size After Last Property..
	float                                        MaxDistanceOffset;                                 // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothingDistance;                                 // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInTime;                                        // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutTime;                                       // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAudibleStateChanged;                             // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class FName, class UAudioComponent*>    AudioComponents;                                   // 0xD0(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class APlayerController*>             LocalControllers;                                  // 0x120(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_17A4[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioShapeComponent");
		return Clss;
	}

	void UpdateAudioShape(TArray<class APlayerController*>& InLocalControllers);
	void Enable();
	void Disable();
};

// 0x88 (0x1C8 - 0x140)
// Class AudioShapes.AudioShapePrimitiveComponent
class UAudioShapePrimitiveComponent : public UAudioShapeComponent
{
public:
	class USoundBase*                            SoundOnEdge;                                       // 0x140(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            SoundOnInside;                                     // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInsideStateChanged;                              // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bUseOwningActorTransform;                          // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoRefreshShape;                                 // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A5[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               ActorTransformScale;                               // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A6[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioShapePrimitiveComponent");
		return Clss;
	}

	bool GetIsPlayerInside();
	class UAudioComponent* GetInsideAudioComponent();
	class UAudioComponent* GetEdgeAudioComponent();
};

// 0x68 (0x230 - 0x1C8)
// Class AudioShapes.AudioShapeBoxComponent
class UAudioShapeBoxComponent : public UAudioShapePrimitiveComponent
{
public:
	uint8                                        Pad_17A7[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            BoxTransform;                                      // 0x1D0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioShapeBoxComponent");
		return Clss;
	}

	void SetBoxTransform(struct FTransform& InTransform);
};

// 0x8 (0x1D0 - 0x1C8)
// Class AudioShapes.AudioShapeCylinderComponent
class UAudioShapeCylinderComponent : public UAudioShapePrimitiveComponent
{
public:
	float                                        HalfHeight;                                        // 0x1C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x1CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioShapeCylinderComponent");
		return Clss;
	}

	void SetRadius(float InRadius);
	void SetHalfHeight(float InHalfHeight);
};

// 0x30 (0x1F8 - 0x1C8)
// Class AudioShapes.AudioShapeLineComponent
class UAudioShapeLineComponent : public UAudioShapePrimitiveComponent
{
public:
	struct FVector                               StartPoint;                                        // 0x1C8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndPoint;                                          // 0x1E0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioShapeLineComponent");
		return Clss;
	}

	void SetStartPoint(struct FVector& InStartPoint);
	void SetEndPoint(struct FVector& InEndPoint);
};

// 0x18 (0x1E0 - 0x1C8)
// Class AudioShapes.AudioShapeLineListComponent
class UAudioShapeLineListComponent : public UAudioShapePrimitiveComponent
{
public:
	TArray<struct FVector>                       PointList;                                         // 0x1C8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bClosedLoop;                                       // 0x1D8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AC[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioShapeLineListComponent");
		return Clss;
	}

	bool UpdatePoint(int32 InIndex, struct FVector& InPoint);
	bool RemovePoint(int32 InIndex);
	void GetPoints(TArray<struct FVector>* OutPoints);
	int32 AddPoint(struct FVector& InPoint);
};

// 0x8 (0x1D0 - 0x1C8)
// Class AudioShapes.AudioShapeSphereComponent
class UAudioShapeSphereComponent : public UAudioShapePrimitiveComponent
{
public:
	float                                        Radius;                                            // 0x1C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AD[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioShapeSphereComponent");
		return Clss;
	}

	void SetRadius(float InRadius);
};

// 0x58 (0x88 - 0x30)
// Class AudioShapes.AudioShapeSubsystem
class UAudioShapeSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_17AE[0x28];                                    // Fixing Size After Last Property..
	TArray<class UAudioShapeComponent*>          AudioShapes;                                       // 0x58(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class APlayerController*>             LocalControllers;                                  // 0x68(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17AF[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioShapeSubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
