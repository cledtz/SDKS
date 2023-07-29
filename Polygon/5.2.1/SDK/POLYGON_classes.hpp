#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// Class POLYGON.AnimNotify_PlaySoundLocal
class UAnimNotify_PlaySoundLocal : public UAnimNotify
{
public:
	class USoundBase*                            Sound;                                             // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumeMultiplier;                                  // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMultiplier;                                   // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachName;                                        // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_PlaySoundLocal");
		return Clss;
	}

};

// 0x50 (0x80 - 0x30)
// Class POLYGON.BallisticMaterialResponseMap
class UBallisticMaterialResponseMap : public UDataAsset
{
public:
	TMap<class UPhysicalMaterial*, struct FBallisticMaterialResponseMapEntry> List;                                              // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BallisticMaterialResponseMap");
		return Clss;
	}

};

// 0x210 (0x4A0 - 0x290)
// Class POLYGON.TraceProjectile
class UTraceProjectile : public UActor
{
public:
	struct FVector                               Velocity;                                          // 0x290(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRandomStream                         RandomStream;                                      // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         OwnerSafe;                                         // 0x2B0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F02[0x67];                                    // Fixing Size After Last Property
	class UParticleSystemComponent*              ActiveTraceComponent;                              // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         DebugEnabled;                                      // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F05[0x3];                                     // Fixing Size After Last Property
	float                                        DebugTrailTime;                                    // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DebugTrailWidth;                                   // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          DebugTrailColorFast;                               // 0x32C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          DebugTrailColorSlow;                               // 0x33C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         DebugPooling;                                      // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F06[0x3];                                     // Fixing Size After Last Property
	struct FVector                               Wind;                                              // 0x350(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAtmosphereType                   AtmosphereType;                                    // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F07[0x3];                                     // Fixing Size After Last Property
	float                                        SeaLevelAirDensity;                                // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SeaLevelSpeedOfSound;                              // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F09[0x4];                                     // Fixing Size After Last Property
	class UCurveFloat*                           AirDensityCurve;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         SpeedOfSoundVariesWithAltitude;                    // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F0A[0x7];                                     // Fixing Size After Last Property
	class UCurveFloat*                           SpeedOfSoundCurve;                                 // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F0B[0x4];                                     // Fixing Size After Last Property
	float                                        SeaLevelAirPressure;                               // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SeaLevelAirTemperature;                            // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TemperatureLapseRate;                              // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TropopauseAltitude;                                // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SpecificGasConstant;                               // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               WorldCenterLocation;                               // 0x3A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         SphericalAltitude;                                 // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F0D[0x3];                                     // Fixing Size After Last Property
	float                                        SeaLevelRadius;                                    // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         OverrideGravity;                                   // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F0E[0x7];                                     // Fixing Size After Last Property
	struct FVector                               Gravity;                                           // 0x3D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         SafeLaunch;                                        // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         SafeLaunchIgnoreAttachParent;                      // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         SafeLaunchIgnoreAllAttached;                       // 0x3EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F0F[0x1];                                     // Fixing Size After Last Property
	float                                        SafeDelay;                                         // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActor*>                        SafeLaunchIgnoredActors;                           // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPrivate)
	float                                        MuzzleVelocityMin;                                 // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MuzzleVelocityMax;                                 // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Spread;                                            // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Mass;                                              // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Diameter;                                          // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FormFactor;                                        // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                           MachDragCurve;                                     // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        GrazingAngleExponent;                              // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinPenetration;                                    // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxPenetration;                                    // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PenetrationNormalization;                          // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PenetrationNormalizationGrazing;                   // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PenetrationEntryAngleSpread;                       // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PenetrationExitAngleSpread;                        // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RicochetProbability;                               // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RicochetProbabilityGrazing;                        // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RicochetRestitution;                               // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RicochetFriction;                                  // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RicochetSpread;                                    // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         SpeedControlsRicochetProbability;                  // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         AddImpulse;                                        // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F12[0x2];                                     // Fixing Size After Last Property
	float                                        ImpulseMultiplier;                                 // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EPenetrationTraceType             DefaultPenTraceType;                               // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F13[0x7];                                     // Fixing Size After Last Property
	class UBallisticMaterialResponseMap*         MaterialResponseMap;                               // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         MaterialDensityControlsPenetrationDepth;           // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         MaterialRestitutionControlsRicochet;               // 0x469(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         AllowComponentCollisions;                          // 0x46A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x46B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         TraceComplex;                                      // 0x46C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F16[0x3];                                     // Fixing Size After Last Property
	float                                        CollisionMargin;                                   // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DespawnVelocity;                                   // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActor*>                        IgnoredActors;                                     // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         DoFirstStepImmediately;                            // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         RandomFirstStepDelta;                              // 0x489(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F17[0x2];                                     // Fixing Size After Last Property
	int32                                        MaxTracesPerStep;                                  // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         Retrace;                                           // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         RetraceOnAnotherChannel;                           // 0x491(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECollisionChannel                 RetraceChannel;                                    // 0x492(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         RotateActor;                                       // 0x493(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         RotateRandomRoll;                                  // 0x494(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         EnablePooling;                                     // 0x495(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F19[0x2];                                     // Fixing Size After Last Property
	class UParticleSystem*                       TraceFX;                                           // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TraceProjectile");
		return Clss;
	}

	struct FVector UpdateVelocity(struct FVector& Location, struct FVector& PreviousVelocity, float DeltaTime);
	void SpawnWithExactVelocity(TSubclassOf<class UTraceProjectile> bulletClass, class UItem_Gun_General* Gun, struct FVector& SpawnLocation, struct FVector& StartVelocity, uint8 RandomSeed);
	void Spawn(TSubclassOf<class UTraceProjectile> bulletClass, class UItem_Gun_General* Gun, struct FVector& SpawnLocation, struct FVector& StartVelocity, uint8 RandomSeed);
	void OnTrajectoryUpdateReceived(struct FVector& Location, struct FVector& OldVelocity, struct FVector& NewVelocity);
	void OnTrace(struct FVector& StartLocation, struct FVector& EndLocation);
	void OnImpact(bool Ricochet, bool PassedThrough, struct FVector& ExitVelocity, struct FVector& Impulse, float PenetrationDepth, struct FHitResult& HitResult);
	void OnDeactivated();
	void Deactivate();
	bool CollisionFilter(struct FHitResult& HitResult);
};

// 0x18 (0x2A8 - 0x290)
// Class POLYGON.Bullet_Casing_General
class UBullet_Casing_General : public UActor
{
public:
	class USoundBase*                            SoundDrop;                                         // 0x290(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  Mesh;                                              // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UProjectileMovementComponent*          ProjectileMovementComponent;                       // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Bullet_Casing_General");
		return Clss;
	}

};

// 0x10 (0xB0 - 0xA0)
// Class POLYGON.ChatSystemComponent
class UChatSystemComponent : public UActorComponent
{
public:
	TArray<struct FGameChatMessage>              ChatHistory;                                       // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChatSystemComponent");
		return Clss;
	}

	void SentMessage_Multicast(const struct FGameChatMessage& Message);
	void SendMessage_Server(const struct FGameChatMessage& Message);
};

// 0x40 (0xE0 - 0xA0)
// Class POLYGON.GeneralBackendComponent
class UGeneralBackendComponent : public UActorComponent
{
public:
	uint8                                        Pad_1F2A[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeneralBackendComponent");
		return Clss;
	}

};

// 0x40 (0x120 - 0xE0)
// Class POLYGON.ClientBackendComponent
class UClientBackendComponent : public UGeneralBackendComponent
{
public:
	FMulticastInlineDelegateProperty_            OnSetPlayerId;                                     // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdatePlayerCombinedInfo;                        // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                PlayerMasterId;                                    // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    PlayerCombinedInfo;                                // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                    PlayerExperiments;                                 // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClientBackendComponent");
		return Clss;
	}

	void SetPlayerId(const class FString& NewPlayerMasterId);
	void SetPlayerCombinedInfo(class UPlayFabJsonObject* NewPlayerCombinedInfo, TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString);
	void SerPlayerExperiments(class UPlayFabJsonObject* Experiments);
	bool IsClientLoggedIn();
	void GiveVipLocal(const class FString& ID);
	class UPlayFabJsonObject* GetPlayerExperiments();
	class UPlayFabJsonObject* GetPlayerCombinedInfo();
};

// 0x60 (0x88 - 0x28)
// Class POLYGON.ClientGameInstance
class UClientGameInstance : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSetMasterId;                                     // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FText                                  KickReason;                                        // 0x38(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F66[0x10];                                    // Fixing Size After Last Property
	class UPlayFabJsonObject*                    PlayerCombinedInfo;                                // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UUserEntry*>                    UsersCache;                                        // 0x68(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F6A[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClientGameInstance");
		return Clss;
	}

	void SetServerTime(struct FDateTime& ServerTime);
	void SetPlayerId(const class FString& NewPlayerMasterId);
	void SetPlayerCombinedInfo(class UPlayFabJsonObject* NewPlayerCombinedInfo);
	void HandleNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, enum class ENetworkFailure FailureType, const class FString& ErrorString);
	struct FDateTime GetServerTime();
	class FString GetPlayerMasterId();
	class UPlayFabJsonObject* GetPlayerCombinedInfo();
};

// 0x70 (0x300 - 0x290)
// Class POLYGON.ControlPoint
class UControlPoint : public UActor
{
public:
	FMulticastInlineDelegateProperty_            OnCapturedTeam;                                    // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIsCapture;                                       // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChangeCapturePoints;                             // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EControlPoint                     ControlPointName;                                  // 0x2C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ETeam                             CapturedTeam;                                      // 0x2C1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsCapture;                                        // 0x2C2(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F7D[0x1];                                     // Fixing Size After Last Property
	int32                                        CapturePointsAlphaTeam;                            // 0x2C4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CapturePointsBravoTeam;                            // 0x2C8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F7F[0x4];                                     // Fixing Size After Last Property
	TArray<class UPG_PlayerState_Game*>          CapturePlayersAlphaTeam;                           // 0x2D0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UPG_PlayerState_Game*>          CapturePlayersBravoTeam;                           // 0x2E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F82[0x8];                                     // Fixing Size After Last Property
	class USceneComponent*                       Root;                                              // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlPoint");
		return Clss;
	}

	void OnRep_IsCapture();
	void OnRep_CapturePointsBravoTeam();
	void OnRep_CapturePointsAlphaTeam();
	void OnRep_CapturedTeam();
	class FString GetControlPointNameAsString();
	class FString GetControlPointNameAsOneLetter();
	bool ContainsCharacter(class UCharacter* Character);
};

// 0x0 (0x28 - 0x28)
// Class POLYGON.DataManagerLibrary
class UDataManagerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataManagerLibrary");
		return Clss;
	}

	class UDataContainerAsset* GetDataTableReferences();
};

// 0x10 (0x38 - 0x28)
// Class POLYGON.EOSPartyId
class UEOSPartyId : public UObject
{
public:
	uint8                                        Pad_1F8A[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EOSPartyId");
		return Clss;
	}

	class FString ToString();
};

// 0x10 (0x38 - 0x28)
// Class POLYGON.EOSPartyMemberId
class UEOSPartyMemberId : public UObject
{
public:
	uint8                                        Pad_1F8D[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EOSPartyMemberId");
		return Clss;
	}

	class FString ToString();
};

// 0x8 (0x38 - 0x30)
// Class POLYGON.EOSSubsystemAvanced
class UEOSSubsystemAvanced : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1F9D[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EOSSubsystemAvanced");
		return Clss;
	}

	void StartLogin(FDelegateProperty_ OnLoginComplete);
	void StartCreateParty(class UObject* WorldContextObject, int32 PartyTypeId, FDelegateProperty_ OnDone);
	TArray<class UEOSPartyMemberId*> GetPartyMembers(class UObject* WorldContextObject, class UEOSPartyId* PartyId);
	TArray<class UEOSPartyId*> GetJoinedParties(class UObject* WorldContextObject);
};

// 0x0 (0xA0 - 0xA0)
// Class POLYGON.EventManagerComponent
class UEventManagerComponent : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EventManagerComponent");
		return Clss;
	}

	void OnAmmoBoxAction();
	void AmmoBoxAction();
};

// 0x20 (0xC0 - 0xA0)
// Class POLYGON.FOVManagerComponent
class UFOVManagerComponent : public UActorComponent
{
public:
	float                                        AimingFOV_Alpha;                                   // 0xA0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultCameraFOV;                                  // 0xA4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentCameraFOV;                                  // 0xA8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DefaultMeshFOV;                                    // 0xAC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentMeshFOV;                                    // 0xB0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FB4[0x4];                                     // Fixing Size After Last Property
	class UMaterialParameterCollection*          MaterialCollection_CorrectFOV;                     // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FOVManagerComponent");
		return Clss;
	}

	void SetMeshFOV(float NewMeshFOV);
	void SetDefaultCameraFOV(float NewDefaultCameraFOV);
	void SetCameraFOV(float NewCameraFOV);
	void HardResetMeshFOV();
	void HardResetCameraFOV();
};

// 0x0 (0x28 - 0x28)
// Class POLYGON.FOVManagerInterface
class UFOVManagerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FOVManagerInterface");
		return Clss;
	}

	void SetCorrectiveFovMaterial(bool UseFovMaterial);
};

// 0x0 (0x38 - 0x38)
// Class POLYGON.GameSettings
class UGameSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameSettings");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class POLYGON.GunModulesInfo
class UGunModulesInfo : public UDataAsset
{
public:
	TArray<struct FGunModuleInfo>                Modules;                                           // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GunModulesInfo");
		return Clss;
	}

	struct FGunModuleInfo FindModule(const TArray<struct FGunModuleInfo>& Array, TSubclassOf<class UItem_Module_General> ModuleClass);
};

// 0x70 (0x110 - 0xA0)
// Class POLYGON.HealthStatsComponent
class UHealthStatsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnChangeHealth;                                    // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHealthProtection;                                // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIsAlive;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Health;                                            // 0xD0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsAlive;                                          // 0xD1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHealthProtection;                                 // 0xD2(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FC0[0x1];                                     // Fixing Size After Last Property
	float                                        LastTimeTakeDamage;                                // 0xD4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Stamina;                                           // 0xD8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FC1[0x4];                                     // Fixing Size After Last Property
	TArray<struct FPlayerAssist>                 KillAssists;                                       // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FC2[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HealthStatsComponent");
		return Clss;
	}

	void OnRep_HealthProtection();
	void OnRep_Health(uint8 PreviousHealth);
	void KillSelf_server();
	int32 GetStamina();
	bool GetHealthProtection();
	int32 GetHealth();
};

// 0x30 (0xD0 - 0xA0)
// Class POLYGON.InspectManagerComponent
class UInspectManagerComponent : public UActorComponent
{
public:
	uint8                                        Pad_1FCF[0x28];                                    // Fixing Size After Last Property
	class UBoxComponent*                         BoxCollision;                                      // 0xC8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InspectManagerComponent");
		return Clss;
	}

	void SetPivotOffset(const struct FVector2D& Offset);
	void ResetRotation();
	void OnClicked(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void EnableInspect();
	void DisableInspect();
};

// 0x0 (0x28 - 0x28)
// Class POLYGON.InteractInterface
class UInteractInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractInterface");
		return Clss;
	}

	void StopInteract(class UPG_Game_Character* Character);
	void StartInteract(class UPG_Game_Character* Character);
	void SetPlayerLooks(class UPG_Game_Character* Character, bool bIsLooks);
};

// 0x38 (0xD8 - 0xA0)
// Class POLYGON.InventoryComponent_Base
class UInventoryComponent_Base : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnSetPrimaryGun;                                   // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetSecondaryGun;                                 // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UItem_Gun_General*                     PrimaryGun;                                        // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UItem_Gun_General*                     SecondaryGun;                                      // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UItem_Watch_General>       WatchClass;                                        // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InventoryComponent_Base");
		return Clss;
	}

	void UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString);
	void OnRep_SecondaryGun();
	void OnRep_PrimaryGun();
};

// 0x38 (0x110 - 0xD8)
// Class POLYGON.InventoryComponent_Game
class UInventoryComponent_Game : public UInventoryComponent_Base
{
public:
	FMulticastInlineDelegateProperty_            OnSetCurrentGun;                                   // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChangeNumberGrenades;                            // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UItem_Gun_General*                     CurrentGun;                                        // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        GrenadesNumber;                                    // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FF7[0xF];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InventoryComponent_Game");
		return Clss;
	}

	TArray<class FString> SetGunModules(const class FString& GunInstanceId, TArray<class FString>& ItemsInstanceId);
	void RequestSetGunModules_server(const class FString& GunInstanceId, TArray<class FString>& ItemsInstanceId);
	void RequestEquipItems_server(TArray<class FString>& ItemsInstanceId);
	void OnRep_GrenadesNumber();
	void OnRep_CurrentGun(class UItem_Gun_General* PreviousGun);
	TArray<class FString> EquipItems(TArray<class FString>& ItemsInstanceId);
	void AddGrenate_server(uint8 Number);
};

// 0x0 (0xD8 - 0xD8)
// Class POLYGON.InventoryComponent_Menu
class UInventoryComponent_Menu : public UInventoryComponent_Base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InventoryComponent_Menu");
		return Clss;
	}

};

// 0x68 (0x2F8 - 0x290)
// Class POLYGON.Item_General
class UItem_General : public UActor
{
public:
	class FString                                ItemId;                                            // 0x290(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EItemType                         ItemType;                                          // 0x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FF8[0x7];                                     // Fixing Size After Last Property
	class FText                                  ItemName;                                          // 0x2A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             ItemIcon;                                          // 0x2C0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataContainerObjectWrapper           CustomData;                                        // 0x2F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_General");
		return Clss;
	}

};

// 0x60 (0x358 - 0x2F8)
// Class POLYGON.Item_Grenade_General
class UItem_Grenade_General : public UItem_General
{
public:
	float                                        GrenadeDamage;                                     // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FFE[0x4];                                     // Fixing Size After Last Property
	struct FVector_NetQuantize                   ReplicatedPosition;                                // 0x300(0x18)(Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                       ExplosionFX;                                       // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            SoundExplosion;                                    // 0x320(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCameraShakeBase>          ExplosionCameraShakeFirst;                         // 0x328(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCameraShakeBase>          ExplosionCameraShakeSecond;                        // 0x330(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCameraShakeBase>          GrenadeThrowCameraShake;                           // 0x338(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  Mesh;                                              // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URadialForceComponent*                 RadialForce;                                       // 0x348(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USphereComponent*                      GrenadeSphereRadius;                               // 0x350(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Grenade_General");
		return Clss;
	}

	void OnMeshHit(class UPrimitiveComponent* HitComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnGrenadeThrow();
	void NotifyThrow_server(struct FVector_NetQuantize& StartPosition, struct FVector_NetQuantize& Impulse);
};

// 0x458 (0x750 - 0x2F8)
// Class POLYGON.Item_Gun_General
class UItem_Gun_General : public UItem_General
{
public:
	uint8                                        Pad_201D[0x8];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnChangeCurrentNumberAmmo;                         // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChangeStockAmmo;                                 // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetGunModules;                                   // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_201E[0x8];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnApplyGunDamage;                                  // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_201F[0x18];                                    // Fixing Size After Last Property
	TSoftObjectPtr<class UTexture2D>             GunWhileIcon;                                      // 0x360(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LevelRequired;                                     // 0x390(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAvailable;                                      // 0x394(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGunClass                         GunClass;                                          // 0x395(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGunSlot                          GunSlot;                                           // 0x396(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGunShootingType                  GunShootingType;                                   // 0x397(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UTraceProjectile>        ProjectileClass;                                   // 0x398(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BulletVelocityMultiplier;                          // 0x3C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2020[0x4];                                     // Fixing Size After Last Property
	TArray<int32>                                Levels;                                            // 0x3D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        GunDamage;                                         // 0x3E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageMultiplierHead;                              // 0x3E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxMagazineAmmo;                                   // 0x3E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxStockAmmo;                                      // 0x3EC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeBetweenShots;                                  // 0x3F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GunUpRecoil;                                       // 0x3F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GunBackwardRecoil;                                 // 0x3F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GunRecoilAlphaPerShot;                             // 0x3FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GunRecoilLift;                                     // 0x400(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GunRecoilControlMultiplier;                        // 0x404(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FirstShotKickMultiplier;                           // 0x408(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AccuracyHip;                                       // 0x40C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpreadShot;                                        // 0x410(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Mobility;                                          // 0x414(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AimDownTimeMultiplier;                             // 0x418(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ReloadTimeMultiplier;                              // 0x41C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DrawTimeMultiplier;                                // 0x420(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2021[0x4];                                     // Fixing Size After Last Property
	TSoftObjectPtr<class UGunModulesInfo>        RelatedModulesInfo;                                // 0x428(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UUserWidget>             ProgressWidget;                                    // 0x458(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       SleeveFX;                                          // 0x488(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            SoundBulletCasingDrop;                             // 0x490(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCameraShakeBase>          ShotCameraShake;                                   // 0x498(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                         IdleCharacterAnimation;                            // 0x4A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          ReloadCharacterAnimation;                          // 0x4A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ReloadCharacterAnimationAimingStartTime;           // 0x4B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2022[0x4];                                     // Fixing Size After Last Property
	class UAnimMontage*                          ReloadFullCharacterAnimation;                      // 0x4B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ReloadFullCharacterAnimationAimingStartTime;       // 0x4C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2023[0x4];                                     // Fixing Size After Last Property
	class UAnimMontage*                          ShotCharacterAnimation;                            // 0x4C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          EndShotCharacterAnimation;                         // 0x4D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          BoltCharacterAnimation;                            // 0x4D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          GrenadeThrowAdditiveAnimation;                     // 0x4E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          EquipAnimation;                                    // 0x4E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          AimingEquipAnimation;                              // 0x4F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          HolsterAnimation;                                  // 0x4F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          AimingAnimation;                                   // 0x500(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                         ShotGunAnimation;                                  // 0x508(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                         BoltGunAnimation;                                  // 0x510(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                         ReloadGunAnimation;                                // 0x518(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                         ReloadFullGunAnimation;                            // 0x520(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                         NoAmmoGunAnimation;                                // 0x528(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               FirstPersonGunPosition;                            // 0x530(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ThirdPersonGunPosition;                            // 0x548(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransform                            LeftHandOffset;                                    // 0x560(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SprintLiftGun;                                     // 0x5C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2029[0x8];                                     // Fixing Size After Last Property
	struct FTransform                            WatchOffset;                                       // 0x5E0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class USoundBase>             SoundShot;                                         // 0x640(0x30)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            SoundBlankShot;                                    // 0x670(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            SoundAiming;                                       // 0x678(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class USoundBase>>     CustomSounds;                                      // 0x680(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        CallHardReset;                                     // 0x690(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_202E[0x3];                                     // Fixing Size After Last Property
	int32                                        CurrentMagazineAmmo;                               // 0x694(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint16                                       CurrentStockAmmo;                                  // 0x698(0x2)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        ReloadCaller;                                      // 0x69A(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_202F[0x5];                                     // Fixing Size After Last Property
	TArray<TWeakObjectPtr<class UTraceProjectile>> PoolProjectiles;                                   // 0x6A0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class UBullet_Casing_General>> PoolBulletCasings;                                 // 0x6B0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2031[0x4];                                     // Fixing Size After Last Property
	float                                        CurrentSpread;                                     // 0x6C4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                        CurrentGunModuleClasses;                           // 0x6C8(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class UItem_Module_General*>          CurrentGunModuleReferences;                        // 0x6D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FGunShot                              GunShot;                                           // 0x6E8(0x20)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector_NetQuantize                   GunHitOfShortShot;                                 // 0x708(0x18)(Net, Transient, RepNotify, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2034[0x8];                                     // Fixing Size After Last Property
	class UAudioComponent*                       ActiveSoundShot;                                   // 0x728(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayFabJsonObject*                    ItemReference;                                     // 0x730(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                GunMesh;                                           // 0x738(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  Magazine;                                          // 0x740(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2035[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Gun_General");
		return Clss;
	}

	void UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString);
	void UpdateAmmoCount_server(uint8 CurrentNumberAmmo);
	void SetGunModules(class UPlayFabJsonObject* Modules);
	void RequestReload_server(uint8 CurrentNumberAmmo);
	void OnSetPlayerState();
	void OnRep_ReloadCaller(uint8 PreviousValue);
	void OnRep_GunShot(const struct FGunShot& PreviousShot);
	void OnRep_GunHitOfShortShot(const struct FVector_NetQuantize& PreviousValue);
	void OnRep_CurrentStockAmmo();
	void OnRep_CurrentGunModuleClasses();
	void OnRep_CallHardReset(uint8 PreviousValue);
	void NotifyServerTraceHit(struct FGunHitOnCharacter& HitOnCharacter);
	void NotifyServerOfShot(struct FGunShot& GunShot);
	void NotifyServerHitWithEnergy(struct FGunHitOnCharacter& HitOnCharacter, uint8 Energy);
	void NotifyServerHit(struct FGunHitOnCharacter& HitOnCharacter);
	void NotifyGrantedProgressDataContainer_client(const class FString& ItemInstanceId);
	class UPlayFabJsonObject* GetItemReference();
	struct FVector GetForwardShot();
	int32 GetCurrentStockAmmo();
	void CockBolt_server();
	void CockBolt_multicast();
	void AddStockAmmo_server(int8 AddAmmo);
};

// 0x0 (0x750 - 0x750)
// Class POLYGON.Item_Gun_Pistol
class UItem_Gun_Pistol : public UItem_Gun_General
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Gun_Pistol");
		return Clss;
	}

};

// 0x0 (0x750 - 0x750)
// Class POLYGON.Item_Gun_Rifle
class UItem_Gun_Rifle : public UItem_Gun_General
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Gun_Rifle");
		return Clss;
	}

};

// 0x0 (0x750 - 0x750)
// Class POLYGON.Item_Gun_Sniper
class UItem_Gun_Sniper : public UItem_Gun_General
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Gun_Sniper");
		return Clss;
	}

};

// 0x48 (0x340 - 0x2F8)
// Class POLYGON.Item_Module_General
class UItem_Module_General : public UItem_General
{
public:
	uint8                                        Pad_203D[0x8];                                     // Fixing Size After Last Property
	enum class EGunModuleType                    GunModuleType;                                     // 0x300(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_203E[0x7];                                     // Fixing Size After Last Property
	TSoftObjectPtr<class UTexture2D>             ModuleWhiteIcon;                                   // 0x308(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDefault;                                        // 0x338(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2041[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Module_General");
		return Clss;
	}

};

// 0x10 (0x350 - 0x340)
// Class POLYGON.Item_Module_Accessory
class UItem_Module_Accessory : public UItem_Module_General
{
public:
	class FName                                  MountingSocket;                                    // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  ModuleMesh;                                        // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Module_Accessory");
		return Clss;
	}

};

// 0x8 (0x348 - 0x340)
// Class POLYGON.Item_Module_Barrel
class UItem_Module_Barrel : public UItem_Module_General
{
public:
	class UStaticMeshComponent*                  ModuleMesh;                                        // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Module_Barrel");
		return Clss;
	}

};

// 0x18 (0x368 - 0x350)
// Class POLYGON.Item_Module_Flashlight
class UItem_Module_Flashlight : public UItem_Module_Accessory
{
public:
	FMulticastInlineDelegateProperty_            OnEnable;                                          // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bIsEnable;                                         // 0x360(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_204F[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Module_Flashlight");
		return Clss;
	}

	void SetFlashlightEnable_server(bool IsEnable);
	void SetFlashlightEnable(bool IsEnable, bool bCallOnServer);
	void OnSetCurrentGun(class UItem_Gun_General* PreviousGun);
	void OnRep_IsEnable(bool OldState);
	void OnChangeEnableState(bool bPlaySound);
};

// 0x48 (0x388 - 0x340)
// Class POLYGON.Item_Module_Optic
class UItem_Module_Optic : public UItem_Module_General
{
public:
	class FName                                  MountingSocket;                                    // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FOV;                                               // 0x348(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StepsImpact;                                       // 0x34C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BackwardRecoilMultiplier;                          // 0x350(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlurPower;                                         // 0x354(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlurRadius;                                        // 0x358(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlurDensity;                                       // 0x35C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlurBlackout;                                      // 0x360(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsScope;                                          // 0x364(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2057[0x3];                                     // Fixing Size After Last Property
	class UStaticMesh*                           AimingMesh;                                        // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ActivateAimingMeshFovAlpha;                        // 0x370(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DeactivateAimingMeshFovAlpha;                      // 0x374(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstance*                     AimingMaterial;                                    // 0x378(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  ModuleMesh;                                        // 0x380(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Module_Optic");
		return Clss;
	}

	void ToggleAiming(bool IsAiming);
};

// 0x18 (0x358 - 0x340)
// Class POLYGON.Item_Module_Skin
class UItem_Module_Skin : public UItem_Module_General
{
public:
	enum class EItemRareType                     Rare;                                              // 0x340(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2059[0x7];                                     // Fixing Size After Last Property
	class UMaterialInstance*                     SkinMaterial;                                      // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstance*                     SkinMaterialCorrectFOV;                            // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Module_Skin");
		return Clss;
	}

};

// 0x10 (0x350 - 0x340)
// Class POLYGON.Item_Module_Strap
class UItem_Module_Strap : public UItem_Module_General
{
public:
	enum class EItemRareType                     Rare;                                              // 0x340(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_205A[0x7];                                     // Fixing Size After Last Property
	class UStaticMeshComponent*                  ModuleMesh;                                        // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Module_Strap");
		return Clss;
	}

};

// 0x8 (0x348 - 0x340)
// Class POLYGON.Item_Module_Underbarrel
class UItem_Module_Underbarrel : public UItem_Module_General
{
public:
	class UStaticMeshComponent*                  ModuleMesh;                                        // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Module_Underbarrel");
		return Clss;
	}

};

// 0x78 (0x3C0 - 0x348)
// Class POLYGON.Item_Module_Underbarrel_Grip
class UItem_Module_Underbarrel_Grip : public UItem_Module_Underbarrel
{
public:
	uint8                                        Pad_205B[0x8];                                     // Fixing Size After Last Property
	struct FTransform                            WatchOffset;                                       // 0x350(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                         GripHandPose;                                      // 0x3B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_205C[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Module_Underbarrel_Grip");
		return Clss;
	}

};

// 0x18 (0x310 - 0x2F8)
// Class POLYGON.Item_Watch_General
class UItem_Watch_General : public UItem_General
{
public:
	uint8                                        Pad_205D[0x8];                                     // Fixing Size After Last Property
	enum class EItemRareType                     Rare;                                              // 0x300(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_205E[0x7];                                     // Fixing Size After Last Property
	class UStaticMeshComponent*                  WatchMesh;                                         // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Item_Watch_General");
		return Clss;
	}

};

// 0x0 (0x350 - 0x350)
// Class POLYGON.PG_AnimInstance
class UPG_AnimInstance : public UAnimInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_AnimInstance");
		return Clss;
	}

};

// 0x0 (0xF00 - 0xF00)
// Class POLYGON.PG_CharacterMovementComponent
class UPG_CharacterMovementComponent : public UCharacterMovementComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_CharacterMovementComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class POLYGON.PG_FunctionLibraryKit
class UPG_FunctionLibraryKit : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_FunctionLibraryKit");
		return Clss;
	}

	class FString ParseOption(const class FString& Options, const class FString& Key, const class FString& Separator);
	enum class EAzureRegion GetRegionEnum(const class FString& RegionName);
	float GetRateScale(class UAnimSequenceBase* AnimationSequenceBase);
	class FString GetProjectVersion();
	int32 GetBuildNumber();
	void ExitGame();
};

// 0x10 (0x1D0 - 0x1C0)
// Class POLYGON.PG_GameInstance
class UPG_GameInstance : public UGameInstance
{
public:
	class UServerGameInstance*                   ServerGameInstance;                                // 0x1C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClientGameInstance*                   ClientGameInstance;                                // 0x1C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_GameInstance");
		return Clss;
	}

	class UServerGameInstance* GetServerGameInstance();
	class UClientGameInstance* GetClientGameInstance();
};

// 0x0 (0x378 - 0x378)
// Class POLYGON.PG_GameMode_Base
class UPG_GameMode_Base : public UGameMode
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_GameMode_Base");
		return Clss;
	}

};

// 0x60 (0x3D8 - 0x378)
// Class POLYGON.PG_GameMode_Game
class UPG_GameMode_Game : public UPG_GameMode_Base
{
public:
	class UOnlineBeaconHost*                     Beacon;                                            // 0x378(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FBeaconSlotRequest>            PlayersQueue;                                      // 0x380(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UReservedSlot*>                 ReservedSlots;                                     // 0x390(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class FString>                        BlackListPlayersID;                                // 0x3A0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_206C[0x10];                                    // Fixing Size After Last Property
	int32                                        TotalGameTime;                                     // 0x3C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_206D[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    ServerData;                                        // 0x3C8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UServerBackendComponent*               ServerBackendComponent;                            // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_GameMode_Game");
		return Clss;
	}

	void LoginPlayer(class UPG_PlayerController_Game* PlayerController, const class FString& PlayerMasterId);
};

// 0x0 (0x378 - 0x378)
// Class POLYGON.PG_GameMode_Game_StandBy
class UPG_GameMode_Game_StandBy : public UGameMode
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_GameMode_Game_StandBy");
		return Clss;
	}

};

// 0x0 (0x378 - 0x378)
// Class POLYGON.PG_GameMode_Menu
class UPG_GameMode_Menu : public UPG_GameMode_Base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_GameMode_Menu");
		return Clss;
	}

};

// 0x1F0 (0x4F8 - 0x308)
// Class POLYGON.PG_GameState_Game
class UPG_GameState_Game : public UGameState
{
public:
	FMulticastInlineDelegateProperty_            OnChangeGameState;                                 // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGameTimer;                                       // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCanMovePlayers;                                  // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTeamWon;                                         // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChangePlayersArray;                              // 0x348(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChangeTeamAlphaArray;                            // 0x358(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChangeTeamBravoArray;                            // 0x368(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChangeTotalScore;                                // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnServerFps;                                       // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EPG_GameState                     GameState;                                         // 0x398(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2079[0x7];                                     // Fixing Size After Last Property
	struct FMapInfo                              CurrentMapInfo;                                    // 0x3A0(0xE0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	uint16                                       GameTimer;                                         // 0x480(0x2)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanMovePlayers;                                   // 0x482(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ETeam                             WinningTeam;                                       // 0x483(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_207A[0x4];                                     // Fixing Size After Last Property
	TArray<class UPG_PlayerState_Game*>          Players;                                           // 0x488(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	TArray<class UPG_PlayerState_Game*>          TeamAlpha;                                         // 0x498(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	TArray<class UPG_PlayerState_Game*>          TeamBravo;                                         // 0x4A8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	TArray<class UTeamBase*>                     AllTeamBases;                                      // 0x4B8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UControlPoint*>                 AllControlPoints;                                  // 0x4C8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UPlayerStart*>                  PlayerStarts;                                      // 0x4D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint16                                       ScoreAlphaTeam;                                    // 0x4E8(0x2)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       ScoreBravoTeam;                                    // 0x4EA(0x2)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_207D[0x2];                                     // Fixing Size After Last Property
	uint8                                        ServerFps;                                         // 0x4EE(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_207E[0x9];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_GameState_Game");
		return Clss;
	}

	void SetCanMovePlayers(bool NewMoveState);
	void OnRep_WinningTeam();
	void OnRep_TeamBravo();
	void OnRep_TeamAlpha();
	void OnRep_ServerFps();
	void OnRep_ScoreBravoTeam();
	void OnRep_ScoreAlphaTeam();
	void OnRep_Players();
	void OnRep_GameTimer();
	void OnRep_GameState();
	void OnRep_CanMovePlayers();
	void NotifyPlayerWasKicked(const class FString& badGuyName, bool bNameWasOptimized);
	int32 GetScoreBravoTeam();
	int32 GetScoreAlphaTeam();
	int32 GetMaxScoreForWin();
	int32 GetGameTimer();
};

// 0x110 (0x740 - 0x630)
// Class POLYGON.PG_Game_Character
class UPG_Game_Character : public UCharacter
{
public:
	uint8                                        Pad_20A9[0x10];                                    // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnSetPlayerState;                                  // 0x640(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetActorHiddenInGame;                            // 0x650(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AA[0x1];                                     // Fixing Size After Last Property
	enum class EPlayerAction                     PlayerAction;                                      // 0x661(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20AB[0x2];                                     // Fixing Size After Last Property
	float                                        LeanBodyAlpha;                                     // 0x664(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        RespawnCounter;                                    // 0x668(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20AC[0xB];                                     // Fixing Size After Last Property
	float                                        ControllerPitchRotation;                           // 0x674(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ControllerYawRotation;                             // 0x678(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20AD[0xC];                                     // Fixing Size After Last Property
	class UActor*                                FocusActor;                                        // 0x688(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20AE[0x8];                                     // Fixing Size After Last Property
	class UActor*                                CurrentInteractActor;                              // 0x698(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B0[0x8];                                     // Fixing Size After Last Property
	class UParticleSystem*                       ParticleDamageBlood;                               // 0x6A8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            SoundBullet;                                       // 0x6B0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAnimInstance>             FirstPersonAnimInstanceClass;                      // 0x6B8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMesh*                         FirstPersonCharacterMesh;                          // 0x6C0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMesh*                         ThirdPersonCharacterMesh;                          // 0x6C8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UArrowComponent*                       ViewArrow;                                         // 0x6D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                      FirstPersonCamera;                                 // 0x6D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpringArmComponent*                   ThirdPersonCameraBoom;                             // 0x6E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                      ThirdPersonCamera;                                 // 0x6E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputComponent*                       PlayerInputComponent;                              // 0x6F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetComponent*                      WidgetPlayerMarker;                                // 0x6F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpringArmComponent*                   SpectatorCameraBoom;                               // 0x700(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneCaptureComponent2D*              SpectatorCameraCapture;                            // 0x708(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                Armor;                                             // 0x710(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  HeadGear;                                          // 0x718(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  Backpack;                                          // 0x720(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UItem_Watch_General*                   Watch;                                             // 0x728(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHealthStatsComponent*                 HealthStatsComponent;                              // 0x730(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWeaponComponent*                      WeaponComponent;                                   // 0x738(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_Game_Character");
		return Clss;
	}

	void StopInteractWithObject_server();
	void StopInteractWithObject();
	void StartShooting();
	void StartInteractWithObject_server(class UActor* InteractActor);
	void StartInteractWithObject();
	void SetNeutralizationVignetteImpact(float NewNeutralizationVignetteImpact);
	void SetIsSprinting_server(bool NewState);
	void Respawn_client(struct FVector_NetQuantize& NewLocation, struct FVector_NetQuantizeNormal& NewRotator);
	void Respawn();
	void PlayerLooks();
	void OnRep_RespawnCounter(uint8 PreviousValue);
	void OnRep_PlayerAction(enum class EPlayerAction PreviousAction);
	void NotifyDeathWithImpulse_multicast(class UPG_PlayerState_Game* Killer, enum class EPlayerDeathType DeathType, struct FVector_NetQuantize& Impulse, uint8& BoneIndex);
	void NotifyDeath_multicast(class UPG_PlayerState_Game* Killer, enum class EPlayerDeathType DeathType);
	void LeanBody_server(int8 LeanBodyAlpha);
	void HitAtProtectedCharacter();
	enum class ETeam GetTeam();
	enum class EPlayerAction GetPlayerAction();
	float GetNeutralizationVignetteImpact();
	bool GetIsSprinting();
	class UCameraComponent* GetActiveCamera();
	void EventTakeDamage(struct FVector& Origin);
	void DeathEvent(class UPG_PlayerState_Game* Killer, enum class EPlayerDeathType DeathType);
	void ChangeIsAlive();
	void CameraNeutralizationEffectEvent(float Damage);
	void ActionWhenTakeDamage_client(class UActor* DamageCauser);
	void ActionWhenGunHit_client(class UPG_Game_Character* CharacterInstigator, uint8 HitBoneIndex);
};

// 0x28 (0x2B8 - 0x290)
// Class POLYGON.PG_Menu_Character
class UPG_Menu_Character : public UActor
{
public:
	TWeakObjectPtr<class UPG_Menu_Character>     Instance;                                          // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                Mesh;                                              // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                Armor;                                             // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  HeadGear;                                          // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  Backpack;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_Menu_Character");
		return Clss;
	}

};

// 0x0 (0x2B8 - 0x2B8)
// Class POLYGON.PG_BeaconHostObject
class UPG_BeaconHostObject : public UOnlineBeaconHostObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_BeaconHostObject");
		return Clss;
	}

};

// 0x30 (0x350 - 0x320)
// Class POLYGON.PG_BeaconClient
class UPG_BeaconClient : public UOnlineBeaconClient
{
public:
	uint8                                        Pad_20CE[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_BeaconClient");
		return Clss;
	}

	void SendNumberInQueue_client(uint8 Number);
	void ResponseReserveSlot_client(uint8 Payload);
	void RequestReserveSlot_server(TArray<struct FUniqueNetIdRepl>& UnequeIds, bool IsUsedMatchmaker);
	void RequestReserveSlot(TArray<struct FUniqueNetIdRepl>& UnequeIds, bool IsUsedMatchmaker, FDelegateProperty_ OnResponseReserveSlot, FDelegateProperty_ OnPutInQueue);
	void LeaveQueue();
	bool ConnectToServer(const class FString& IP, int32 BeaconPort, FDelegateProperty_ OnConnectedStateChange);
};

// 0x30 (0x880 - 0x850)
// Class POLYGON.PG_PlayerController_Base
class UPG_PlayerController_Base : public UPlayerController
{
public:
	FMulticastInlineDelegateProperty_            OnSetPlayerState;                                  // 0x850(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnClientReset;                                     // 0x860(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        AimMode;                                           // 0x870(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CrouchMode;                                        // 0x874(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LeanMode;                                          // 0x878(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SprintMode;                                        // 0x87C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_PlayerController_Base");
		return Clss;
	}

	void ShowError(class FText& ErrorMessage, class FText& ErrorDetails);
	bool IsInvertMouse();
	float GetMouseSensitivityValue();
	float GetMouseSensitivityAimingValue();
};

// 0x30 (0x8B0 - 0x880)
// Class POLYGON.PG_PlayerController_Game
class UPG_PlayerController_Game : public UPG_PlayerController_Base
{
public:
	FMulticastInlineDelegateProperty_            OnDeployIsAvailable;                               // 0x880(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        TimeVoteKick;                                      // 0x890(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeployIsAvailable;                                // 0x894(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2126[0xB];                                     // Fixing Size After Last Property
	class UEventManagerComponent*                EventManagerComponent;                             // 0x8A0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFOVManagerComponent*                  FOVManagerComponent;                               // 0x8A8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_PlayerController_Game");
		return Clss;
	}

	void VoteKick(class UPG_PlayerState_Game* badGuy);
	void StopInteractionEvent();
	void StopInteraction_Client();
	void StartInteractionEvent(float InteractionTime);
	void StartInteraction_Client(float InteractionTime);
	void SetVisibleLoadingScreen(bool IsVisible);
	void RequestSpawnOnSquadMember_server(class UPG_PlayerState_Game* SquadMember);
	void RequestSpawnOnControlPoint_server(enum class EControlPoint SpawnToControlPoint);
	void RequestSpawnOnBase_server();
	void OnRep_DeployIsAvailable();
	void LoginPlayer_server(const class FString& PlayerMasterId);
	void DisplayMessageToChatEvent(const struct FGameChatMessage& Message);
};

// 0x0 (0x880 - 0x880)
// Class POLYGON.PG_PlayerController_Menu
class UPG_PlayerController_Menu : public UPG_PlayerController_Base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_PlayerController_Menu");
		return Clss;
	}

};

// 0x18 (0x3C0 - 0x3A8)
// Class POLYGON.PG_PlayerState_Base
class UPG_PlayerState_Base : public UPlayerState
{
public:
	FMulticastInlineDelegateProperty_            OnPlayerNameChanged;                               // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UClientBackendComponent*               ClientBackendComponent;                            // 0x3B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_PlayerState_Base");
		return Clss;
	}

	void UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString);
	void SetPlayerName(const class FString& PlayerName);
	struct FUniqueNetIdRepl GetUniqueNetId();
};

// 0x88 (0x448 - 0x3C0)
// Class POLYGON.PG_PlayerState_Game
class UPG_PlayerState_Game : public UPG_PlayerState_Base
{
public:
	FMulticastInlineDelegateProperty_            OnSetTeam;                                         // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChangeNumberKills;                               // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChangeNumberDeaths;                              // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteKick;                                        // 0x3F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_213E[0x8];                                     // Fixing Size After Last Property
	TArray<class UPG_PlayerState_Game*>          VoteKickPlayers;                                   // 0x408(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	enum class ETeam                             Team;                                              // 0x418(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        NumberKills;                                       // 0x419(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        NumberDeaths;                                      // 0x41A(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        NumberKillsByMe;                                   // 0x41B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        NumberKillsOfMe;                                   // 0x41C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2140[0x7];                                     // Fixing Size After Last Property
	bool                                         bIsAdmin;                                          // 0x424(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsPatron;                                         // 0x425(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2141[0x2];                                     // Fixing Size After Last Property
	class UPlayerCoreComponent*                  PlayerCoreComponent;                               // 0x428(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInventoryComponent_Game*              InventoryComponent;                                // 0x430(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USquadComponent*                       SquadComponent;                                    // 0x438(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChatSystemComponent*                  ChatSystemComponent;                               // 0x440(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_PlayerState_Game");
		return Clss;
	}

	void SetTeam(enum class ETeam NewTeam);
	void OnRep_VoteKickPlayers();
	void OnRep_Team();
	void OnRep_NumberKills();
	void OnRep_NumberDeaths();
	bool CustomIsInactive();
};

// 0x8 (0x3C8 - 0x3C0)
// Class POLYGON.PG_PlayerState_Menu
class UPG_PlayerState_Menu : public UPG_PlayerState_Base
{
public:
	class UInventoryComponent_Menu*              InventoryComponent;                                // 0x3C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PG_PlayerState_Menu");
		return Clss;
	}

};

// 0xF8 (0x198 - 0xA0)
// Class POLYGON.PlayerCoreComponent
class UPlayerCoreComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTotalProgress;                                   // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNewLevelReceived;                                // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAddedGameScore;                                  // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotifyPossibilityUnlockModule;                   // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_216D[0x8];                                     // Fixing Size After Last Property
	int32                                        InitialTotalProgress;                              // 0xE8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TotalProgress;                                     // 0xEC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasVipStatus;                                     // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_216F[0xA7];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerCoreComponent");
		return Clss;
	}

	void UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString);
	void Reset();
	void OnRep_TotalProgress();
	void NotifyAddedGameScore_client(TArray<struct FScoreInfo>& ScoreInfos);
	struct FLevelInfo GetNextLevelInfo();
	struct FLevelInfo GetNextLevelByLevelID(class FName LevelID);
	struct FLevelInfo GetLevelByProgress(int32 Progress);
	struct FLevelInfo GetCurrentLevelInfo();
	void AddCredits(int32 AddCredits);
};

// 0x50 (0x78 - 0x28)
// Class POLYGON.ReservedSlot
class UReservedSlot : public UObject
{
public:
	uint8                                        Pad_2173[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReservedSlot");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class POLYGON.ServerBackendComponent
class UServerBackendComponent : public UGeneralBackendComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ServerBackendComponent");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class POLYGON.ServerGameInstance
class UServerGameInstance : public UObject
{
public:
	uint8                                        Pad_2177[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ServerGameInstance");
		return Clss;
	}

	void OnGSDKShutdown();
	void OnGSDKServerActive();
	void OnGSDKReadyForPlayers();
	bool OnGSDKHealthCheck();
};

// 0x50 (0xF0 - 0xA0)
// Class POLYGON.SquadComponent
class USquadComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnMembersUpdate;                                   // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIsMemberMySquad;                                 // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCooldownStarted;                                 // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bIsMemberMySquad;                                  // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2178[0x7];                                     // Fixing Size After Last Property
	TArray<class UPG_PlayerState_Game*>          Members;                                           // 0xD8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        CooldownCounter;                                   // 0xE8(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2179[0x3];                                     // Fixing Size After Last Property
	float                                        CooldownStartTime;                                 // 0xEC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SquadComponent");
		return Clss;
	}

	void OnRep_Members();
	void OnRep_CooldownCounter();
};

// 0x28 (0x2B8 - 0x290)
// Class POLYGON.SupportBox
class USupportBox : public UActor
{
public:
	uint8                                        Pad_2185[0x8];                                     // Fixing Size After Last Property
	TArray<class UPG_Game_Character*>            CoverageCharacters;                                // 0x298(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  BoxMesh;                                           // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetComponent*                      WidgetTypeSupportBox;                              // 0x2B0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SupportBox");
		return Clss;
	}

	void OnCoverageEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnCoverageBeginOverlap(class UPrimitiveComponent* OverlappedComp, class UActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, struct FHitResult& SweepResult);
};

// 0x8 (0x2C0 - 0x2B8)
// Class POLYGON.SupportBox_Ammo
class USupportBox_Ammo : public USupportBox
{
public:
	class USoundBase*                            ActionSound;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SupportBox_Ammo");
		return Clss;
	}

};

// 0x0 (0x2B8 - 0x2B8)
// Class POLYGON.SupportBox_Health
class USupportBox_Health : public USupportBox
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SupportBox_Health");
		return Clss;
	}

};

// 0x8 (0x298 - 0x290)
// Class POLYGON.TeamBase
class UTeamBase : public UActor
{
public:
	enum class ETeam                             Team;                                              // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2188[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TeamBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class POLYGON.UserEntry
class UUserEntry : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserEntry");
		return Clss;
	}

};

// 0xB0 (0x150 - 0xA0)
// Class POLYGON.WeaponComponent
class UWeaponComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnAiming;                                          // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2194[0x1D];                                    // Fixing Size After Last Property
	bool                                         bIsAiming;                                         // 0xCD(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bGunIsDown;                                        // 0xCE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2195[0x1];                                     // Fixing Size After Last Property
	class UParticleSystem*                       FireFXLocal;                                       // 0xD0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                       FireFXSimulate;                                    // 0xD8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                       HitFX_Metal;                                       // 0xE0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                       HitFX_Stone;                                       // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                       HitFX_Dirt;                                        // 0xF0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                       HitFX_Wood;                                        // 0xF8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                       HitFX_Water;                                       // 0x100(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                       HitFX_Glass;                                       // 0x108(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                       HitFX_Blood;                                       // 0x110(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    DecalImpact;                                       // 0x118(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            SoundCharacterHit;                                 // 0x120(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            SoundCharacterHit_Protection;                      // 0x128(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            SoundRicochetHit;                                  // 0x130(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            SoundBodyHit;                                      // 0x138(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2197[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeaponComponent");
		return Clss;
	}

	void ToggleAiming_server();
	void SetWantsToAiming_server(bool NewState);
	void SetStrivingGunRecoilAlpha_Pitch(float NewStrivingPitchRecoil);
	void SetGunRecoilIsActive_Backward();
	void SetGunRecoilAlpha_Yaw(float NewYawRecoil);
	void SetGunRecoilAlpha_Roll(float NewRollRecoil);
	void SelectGunSlot_server(uint8 Slot);
	void OnSetSecondaryGun();
	void OnSetPrimaryGun();
	void OnSetPlayerState();
	void OnSetCurrentGun(class UItem_Gun_General* OldCurrentGun);
	void OnRep_IsAiming();
	void NotifyServerThrowGrenade();
	bool IsWantsToAiming();
	bool IsAiming();
	bool GetIsShooting();
	float GetGunRecoilAlpha_Yaw();
	float GetGunRecoilAlpha_Roll();
	float GetGunRecoilAlpha_Pitch();
	float GetGunRecoilAlpha_Backward();
	class UItem_Gun_General* GetCurrentGun();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
