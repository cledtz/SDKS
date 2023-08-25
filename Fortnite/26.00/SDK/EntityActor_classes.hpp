#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UEntityAbilityInterface* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EntityActor.EntityActorCustomReplicationComponent
class UEntityActorCustomReplicationComponent : public UEntityComponent
{
public:
	enum class EEntityActorReplicationOverrideType ReplicationOverride;                               // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEntityActorReplicationRelevancyBucketType ReplicationRelevancyBucketType;                    // 0x59(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_181F[0x2];                                     // Fixing Size After Last Property 
	float                                        CustomReplicationRelevancyRange;                   // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntityActorCustomReplicationComponent* GetDefaultObj();

};

// 0x8 (0x298 - 0x290)
// Class EntityActor.SimObject
class USimObject : public UActor
{
public:
	uint8                                        Pad_1820[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USimObject* GetDefaultObj();

};

// 0x20 (0xC0 - 0xA0)
// Class EntityActor.ActorToEntityAdapterComponent
class UActorToEntityAdapterComponent : public UActorComponent
{
public:
	uint8                                        Pad_1822[0x8];                                     // Fixing Size After Last Property 
	TArray<class UEntityComponent*>              SerializedComponents;                              // 0xA8(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        bForceOwnerReplication : 1;                        // Mask: 0x1, PropSize: 0x10xB8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1823[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UActorToEntityAdapterComponent* GetDefaultObj();

};

// 0x30 (0x88 - 0x58)
// Class EntityActor.EntityActorComponent
class UEntityActorComponent : public UEntityComponent
{
public:
	uint8                                        Pad_182A[0x8];                                     // Fixing Size After Last Property 
	class UActorComponent*                       ActorComponent;                                    // 0x60(0x8)(Edit, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCreatedActorComponent;                            // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_182D[0x1F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityActorComponent* GetDefaultObj();

	void OnRep_ActorComponent();
};

// 0x38 (0x68 - 0x30)
// Class EntityActor.EntityActorSubsystem
class UEntityActorSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_182E[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityActorSubsystem* GetDefaultObj();

};

// 0x38 (0xB0 - 0x78)
// Class EntityActor.EntityDynamicActivationComponent
class UEntityDynamicActivationComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_1830[0x8];                                     // Fixing Size After Last Property 
	float                                        TransitionTargetTime;                              // 0x80(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTargetState;                                      // 0x84(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1832[0x3];                                     // Fixing Size After Last Property 
	TArray<class UEntityComponent*>              LinkedComponents;                                  // 0x88(0x10)(Net, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1833[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityDynamicActivationComponent* GetDefaultObj();

	void OnRep_TransitionTarget();
	void OnEnabledChanged(bool bIsEnabled);
};

// 0x8 (0x60 - 0x58)
// Class EntityActor.EntityToActorAdapterComponent
class UEntityToActorAdapterComponent : public UEntityComponent
{
public:
	uint8                                        Pad_1835[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityToActorAdapterComponent* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EntityActor.EntityActorLocalInputComponent
class UEntityActorLocalInputComponent : public UEntityComponent
{
public:
	enum class EAutoReceiveInput                 AutoReceiveControllerInput;                        // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1837[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityActorLocalInputComponent* GetDefaultObj();

};

// 0x78 (0xF0 - 0x78)
// Class EntityActor.EntityActorCollisionComponent
class UEntityActorCollisionComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_1848[0x48];                                    // Fixing Size After Last Property 
	class FName                                  ShadowVar_CollisionProfileName;                    // 0xC0(0x4)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_184A[0x4];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UPrimitiveComponent>    PrimitiveComponentCache;                           // 0xC8(0x20)(ExportObject, Net, Transient, InstancedReference, RepNotify, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_184C[0x2];                                     // Fixing Size After Last Property 
	enum class ECollisionShapeMode               CollisionShapeMode;                                // 0xEA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_184E[0x5];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityActorCollisionComponent* GetDefaultObj();

	void OnRep_PrimitiveComponent();
	void OnRep_CollisionProfileName();
	void OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnEnabledChanged(bool bIsEnabled);
};

// 0x70 (0xD0 - 0x60)
// Class EntityActor.EntityActorPlayerComponent
class UEntityActorPlayerComponent : public UEntityDataBackedComponent
{
public:
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x60(0x30)(Net, Transient, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UPlayerController>      PlayerControllerCache;                             // 0x90(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UPlayerState>           PlayerStateCache;                                  // 0xB0(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntityActorPlayerComponent* GetDefaultObj();

	void OnRep_PlayerId();
};

// 0x20 (0x78 - 0x58)
// Class EntityActor.EntityActorSkeletalMeshRenderComponent
class UEntityActorSkeletalMeshRenderComponent : public UEntityComponent
{
public:
	uint8                                        Pad_1859[0x8];                                     // Fixing Size After Last Property 
	bool                                         bAddedMeshRenderComponent;                         // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_185A[0x7];                                     // Fixing Size After Last Property 
	class USkeletalMesh*                         ShadowVar_SkeletalMesh;                            // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECollisionEnabled                 ShadowVar_EnableCollision;                         // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_185D[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityActorSkeletalMeshRenderComponent* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class EntityActor.EntityActorStaticMeshRenderComponent
class UEntityActorStaticMeshRenderComponent : public UEntityActorComponent
{
public:
	TArray<class UMaterialInterface*>            ShadowVar_MeshMaterials;                           // 0x88(0x10)(Net, ZeroConstructor, RepNotify, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ECollisionEnabled                 ShadowVar_EnableCollision;                         // 0x98(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1868[0x3];                                     // Fixing Size After Last Property 
	float                                        ShadowVar_MaxDrawDistance;                         // 0x9C(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntityActorStaticMeshRenderComponent* GetDefaultObj();

	void OnRep_MeshMaterials();
	void OnRep_MaxDrawDistance();
	void OnRep_EnableCollision();
};

// 0x28 (0xB0 - 0x88)
// Class EntityActor.EntityActorTextDisplayComponent
class UEntityActorTextDisplayComponent : public UEntityActorComponent
{
public:
	class FText                                  DisplayText;                                       // 0x88(0x18)(Edit, Net, RepNotify, NativeAccessSpecifierPrivate)
	float                                        ShadowVar_WorldSize;                               // 0xA0(0x4)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FColor                                ShadowVar_TextRenderColor;                         // 0xA4(0x4)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAddedTextRenderComponent;                         // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18A2[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityActorTextDisplayComponent* GetDefaultObj();

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

// 0x20 (0x80 - 0x60)
// Class EntityActor.EntityActorPositionComponent
class UEntityActorPositionComponent : public UEntityPositionComponent
{
public:
	struct FVector                               ShadowVar_Location;                                // 0x60(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18AC[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityActorPositionComponent* GetDefaultObj();

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

// 0x28 (0x88 - 0x60)
// Class EntityActor.EntityActorRotationComponent
class UEntityActorRotationComponent : public UEntityRotationComponent
{
public:
	struct FRotator                              ShadowVar_Rotation;                                // 0x60(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18BC[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityActorRotationComponent* GetDefaultObj();

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

// 0x20 (0x80 - 0x60)
// Class EntityActor.EntityActorScaleComponent
class UEntityActorScaleComponent : public UEntityScaleComponent
{
public:
	struct FVector                               ShadowVar_Scale;                                   // 0x60(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18C3[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEntityActorScaleComponent* GetDefaultObj();

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

}


