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
// Class EntityActor.EntityAbilityInterface
class UEntityAbilityInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityAbilityInterface");
		return Clss;
	}

};

// 0x8 (0x68 - 0x60)
// Class EntityActor.EntityActorCustomReplicationComponent
class UEntityActorCustomReplicationComponent : public UEntityComponent
{
public:
	enum class EEntityActorReplicationOverrideType ReplicationOverride;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEntityActorReplicationRelevancyBucketType ReplicationRelevancyBucketType;                    // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D0A[0x2];                                     // Fixing Size After Last Property..
	float                                        CustomReplicationRelevancyRange;                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorCustomReplicationComponent");
		return Clss;
	}

};

// 0x8 (0x298 - 0x290)
// Class EntityActor.SimObject
class ASimObject : public AActor
{
public:
	uint8                                        Pad_3D0B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SimObject");
		return Clss;
	}

};

// 0x20 (0xC0 - 0xA0)
// Class EntityActor.ActorToEntityAdapterComponent
class UActorToEntityAdapterComponent : public UActorComponent
{
public:
	uint8                                        Pad_3D0C[0x8];                                     // Fixing Size After Last Property..
	TArray<class UEntityComponent*>              SerializedComponents;                              // 0xA8(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        bForceOwnerReplication : 1;                        // Mask: 0x1, PropSize: 0x10xB8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D0D[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActorToEntityAdapterComponent");
		return Clss;
	}

};

// 0x30 (0x90 - 0x60)
// Class EntityActor.EntityActorComponent
class UEntityActorComponent : public UEntityComponent
{
public:
	uint8                                        Pad_3D0E[0x8];                                     // Fixing Size After Last Property..
	class UActorComponent*                       ActorComponent;                                    // 0x68(0x8)(Edit, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCreatedActorComponent;                            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D0F[0x1F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorComponent");
		return Clss;
	}

	void OnRep_ActorComponent();
};

// 0x38 (0x68 - 0x30)
// Class EntityActor.EntityActorSubsystem
class UEntityActorSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_3D10[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorSubsystem");
		return Clss;
	}

};

// 0x38 (0xB8 - 0x80)
// Class EntityActor.EntityDynamicActivationComponent
class UEntityDynamicActivationComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_3D11[0x8];                                     // Fixing Size After Last Property..
	float                                        TransitionTargetTime;                              // 0x88(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTargetState;                                      // 0x8C(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D12[0x3];                                     // Fixing Size After Last Property..
	TArray<class UEntityComponent*>              LinkedComponents;                                  // 0x90(0x10)(Net, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D13[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityDynamicActivationComponent");
		return Clss;
	}

	void OnRep_TransitionTarget();
	void OnEnabledChanged(bool bIsEnabled);
};

// 0x8 (0x68 - 0x60)
// Class EntityActor.EntityToActorAdapterComponent
class UEntityToActorAdapterComponent : public UEntityComponent
{
public:
	uint8                                        Pad_3D14[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityToActorAdapterComponent");
		return Clss;
	}

};

// 0x8 (0x68 - 0x60)
// Class EntityActor.EntityActorLocalInputComponent
class UEntityActorLocalInputComponent : public UEntityComponent
{
public:
	enum class EAutoReceiveInput                 AutoReceiveControllerInput;                        // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D15[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorLocalInputComponent");
		return Clss;
	}

};

// 0x80 (0x100 - 0x80)
// Class EntityActor.EntityActorCollisionComponent
class UEntityActorCollisionComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_3D18[0x48];                                    // Fixing Size After Last Property..
	class FName                                  ShadowVar_CollisionProfileName;                    // 0xC8(0x4)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D19[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UPrimitiveComponent>    PrimitiveComponentCache;                           // 0xD0(0x28)(ExportObject, Net, Transient, InstancedReference, RepNotify, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D1A[0x2];                                     // Fixing Size After Last Property..
	enum class ECollisionShapeMode               CollisionShapeMode;                                // 0xFA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D1B[0x5];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorCollisionComponent");
		return Clss;
	}

	void OnRep_PrimitiveComponent();
	void OnRep_CollisionProfileName();
	void OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnEnabledChanged(bool bIsEnabled);
};

// 0x80 (0xE8 - 0x68)
// Class EntityActor.EntityActorPlayerComponent
class UEntityActorPlayerComponent : public UEntityDataBackedComponent
{
public:
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x68(0x30)(Net, Transient, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class APlayerController>      PlayerControllerCache;                             // 0x98(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class APlayerState>           PlayerStateCache;                                  // 0xC0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorPlayerComponent");
		return Clss;
	}

	void OnRep_PlayerId();
};

// 0x20 (0x80 - 0x60)
// Class EntityActor.EntityActorSkeletalMeshRenderComponent
class UEntityActorSkeletalMeshRenderComponent : public UEntityComponent
{
public:
	uint8                                        Pad_3D1C[0x8];                                     // Fixing Size After Last Property..
	bool                                         bAddedMeshRenderComponent;                         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D1D[0x7];                                     // Fixing Size After Last Property..
	class USkeletalMesh*                         ShadowVar_SkeletalMesh;                            // 0x70(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECollisionEnabled                 ShadowVar_EnableCollision;                         // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D1E[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorSkeletalMeshRenderComponent");
		return Clss;
	}

};

// 0x18 (0xA8 - 0x90)
// Class EntityActor.EntityActorStaticMeshRenderComponent
class UEntityActorStaticMeshRenderComponent : public UEntityActorComponent
{
public:
	TArray<class UMaterialInterface*>            ShadowVar_MeshMaterials;                           // 0x90(0x10)(Net, ZeroConstructor, RepNotify, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ECollisionEnabled                 ShadowVar_EnableCollision;                         // 0xA0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D1F[0x3];                                     // Fixing Size After Last Property..
	float                                        ShadowVar_MaxDrawDistance;                         // 0xA4(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorStaticMeshRenderComponent");
		return Clss;
	}

	void OnRep_MeshMaterials();
	void OnRep_MaxDrawDistance();
	void OnRep_EnableCollision();
};

// 0x28 (0xB8 - 0x90)
// Class EntityActor.EntityActorTextDisplayComponent
class UEntityActorTextDisplayComponent : public UEntityActorComponent
{
public:
	class FText                                  DisplayText;                                       // 0x90(0x18)(Edit, Net, RepNotify, NativeAccessSpecifierPrivate)
	float                                        ShadowVar_WorldSize;                               // 0xA8(0x4)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FColor                                ShadowVar_TextRenderColor;                         // 0xAC(0x4)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAddedTextRenderComponent;                         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D20[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorTextDisplayComponent");
		return Clss;
	}

	void SetWorldSize(float Value);
	void SetVerticalAlignment(enum class EVerticalTextAligment Value);
	void SetTextRenderColor(const struct FColor& Value);
	void SetText(class FText Text);
	void SetRelativeScale(const struct FVector& RelativeScale);
	void SetRelativeRotation(const struct FRotator& RelativeRotation);
	void SetRelativeLocation(const struct FVector& RelativeLocation);
	void SetHorizontalAlignment(enum class EHorizTextAligment Value);
	void OnRep_WorldSize();
	void OnRep_TextRenderColor();
	void OnRep_DisplayText();
	float GetWorldSize();
	enum class EVerticalTextAligment GetVerticalAlignment();
	struct FColor GetTextRenderColor();
	class FText GetText();
	struct FVector GetRelativeLocation();
	enum class EHorizTextAligment GetHorizontalAlignment();
};

// 0x20 (0x88 - 0x68)
// Class EntityActor.EntityActorPositionComponent
class UEntityActorPositionComponent : public UEntityPositionComponent
{
public:
	struct FVector                               ShadowVar_Location;                                // 0x68(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D22[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorPositionComponent");
		return Clss;
	}

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

// 0x28 (0x90 - 0x68)
// Class EntityActor.EntityActorRotationComponent
class UEntityActorRotationComponent : public UEntityRotationComponent
{
public:
	struct FRotator                              ShadowVar_Rotation;                                // 0x68(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D24[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorRotationComponent");
		return Clss;
	}

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

// 0x20 (0x88 - 0x68)
// Class EntityActor.EntityActorScaleComponent
class UEntityActorScaleComponent : public UEntityScaleComponent
{
public:
	struct FVector                               ShadowVar_Scale;                                   // 0x68(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D26[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityActorScaleComponent");
		return Clss;
	}

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
