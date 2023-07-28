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

// 0x88 (0x318 - 0x290)
// Class AttachableWheelsRuntime.AttachableWheel
class UAttachableWheel : public UActor
{
public:
	class UStaticMeshComponent*                  WheelMeshComponent;                                // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              WheelOrientation;                                  // 0x298(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        WheelDistance;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8306[0x4];                                     // Fixing Size After Last Property..
	class UPhysicsConstraintComponent*           AxleConstraint;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAttachableWheelAttachData            AttachData;                                        // 0x2C0(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, EditConst, RepNotify, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AttachableWheel");
		return Clss;
	}

	void OnRep_AttachData(struct FAttachableWheelAttachData& AttachDataPrev);
	void OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, enum class EComponentPhysicsStateChange StateChange);
	void OnDetached(class UPrimitiveComponent* DetachedComponent);
	void OnAttached(class UPrimitiveComponent* AttachedComponent);
	bool GetWorldSpaceAttachData(struct FAttachableWheelAttachData* OutAttachData, class UPrimitiveComponent* PrimitiveComponent, class FName BodyName);
	class UPrimitiveComponent* GetAttachedComponent();
	void DrawDebug();
	bool DetachFrom(class UPrimitiveComponent* InComponent);
	void Detach();
	bool AttachTo(class UPrimitiveComponent* InComponent, struct FVector& WorldLocation, struct FVector& AxleDirection);
	bool AttachInPlace(class UPrimitiveComponent* InComponent);
};

// 0x50 (0xF0 - 0xA0)
// Class AttachableWheelsRuntime.AttachableWheelsComponent
class UAttachableWheelsComponent : public UActorComponent
{
public:
	TSet<class UAttachableWheel*>                AttachedWheels;                                    // 0xA0(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AttachableWheelsComponent");
		return Clss;
	}

	void OnWheelDetached(class UAttachableWheel* AttachedWheel);
	void OnWheelAttached(class UAttachableWheel* AttachedWheel);
	bool HandleWheelDetached_Internal(class UAttachableWheel* AttachedWheel);
	bool HandleWheelAttached_Internal(class UAttachableWheel* AttachedWheel);
	TArray<class UAttachableWheel*> GetAttachedWheels();
	class UAttachableWheel* GetAttachedWheelClosestOnAxis(struct FVector& Point, float* OutClosetDistanceToAxis, struct FVector* OutClosestPointOnAxis, struct FVector* OutClosestAxis);
	void DrawDebug();
	int32 DetachAllWheels();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
