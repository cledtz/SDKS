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

// 0x10 (0xA0 - 0x90)
// Class VGameplayRst.AudioComponentBase
class UAudioComponentBase : public UEntityActorComponent
{
public:
	class UVerseAssetPtr*                        SoundAsset;                                        // 0x90(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FActiveSoundInfo                      ActiveSoundInfo;                                   // 0x98(0x8)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioComponentBase");
		return Clss;
	}

	void OnRep_SoundAsset();
	void OnRep_ActiveSoundInfo();
};

// 0x30 (0xD0 - 0xA0)
// Class VGameplayRst.ControllerStateComponent
class UControllerStateComponent : public UControllerComponent
{
public:
	TArray<class FString>                        ActiveStates;                                      // 0xA0(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A75[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControllerStateComponent");
		return Clss;
	}

	void OnRep_ActiveStates();
};

// 0x140 (0x228 - 0xE8)
// Class VGameplayRst.DatastoreComponentBase
class UDatastoreComponentBase : public UEntityActorPlayerComponent
{
public:
	struct FDatastoreState                       ReplicatedDatastoreState;                          // 0xE8(0x128)(Net, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A76[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DatastoreComponentBase");
		return Clss;
	}

};

// 0x0 (0xA0 - 0xA0)
// Class VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent
class UVerseLevelStreamingPlayerControllerRpcComponent : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseLevelStreamingPlayerControllerRpcComponent");
		return Clss;
	}

	void TellServer_ClientLevelUnloaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent);
	void TellServer_ClientLevelLoaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent);
};

// 0xA8 (0x138 - 0x90)
// Class VGameplayRst.VerseLevelStreamingComponentBase
class UVerseLevelStreamingComponentBase : public UEntityActorComponent
{
public:
	struct FVerseLevelStreamingLevelIdentifier   NewLevel;                                          // 0x90(0x28)(Net, RepNotify, NativeAccessSpecifierPublic)
	struct FVerseLevelStreamingLevelStatus       LevelStatus;                                       // 0xB8(0x28)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A77[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseLevelStreamingComponentBase");
		return Clss;
	}

	void OnRep_NewLevel();
	void OnLevelUnloaded_Server();
	void OnLevelUnloaded_Client();
	void OnLevelShown_Server();
	void OnLevelShown_Client();
};

// 0x8 (0x98 - 0x90)
// Class VGameplayRst.PointLightComponentBase
class UPointLightComponentBase : public UEntityActorComponent
{
public:
	class UVerseLightPropertiesBase*             ReplicatedLightProperties;                         // 0x90(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PointLightComponentBase");
		return Clss;
	}

};

// 0x8 (0x98 - 0x90)
// Class VGameplayRst.SpotLightComponentBase
class USpotLightComponentBase : public UEntityActorComponent
{
public:
	class UVerseLightPropertiesBase*             ReplicatedLightProperties;                         // 0x90(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpotLightComponentBase");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class VGameplayRst.VerseLightPropertiesBase
class UVerseLightPropertiesBase : public UObject
{
public:
	float                                        Intensity;                                         // 0x28(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          LightColor;                                        // 0x2C(0x10)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A78[0x4];                                     // Fixing Size After Last Property..
	class ULightComponentBase*                   LightComponent;                                    // 0x40(0x8)(ExportObject, Net, ZeroConstructor, InstancedReference, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseLightPropertiesBase");
		return Clss;
	}

	void OnRep_LightComponent();
	void OnRep_LightColor();
	void OnRep_Intensity();
};

// 0x8 (0x50 - 0x48)
// Class VGameplayRst.VerseLocalLightProperties
class UVerseLocalLightProperties : public UVerseLightPropertiesBase
{
public:
	float                                        AttenuationRadius;                                 // 0x48(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A79[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseLocalLightProperties");
		return Clss;
	}

	void OnRep_AttenuationRadius();
};

// 0x8 (0x58 - 0x50)
// Class VGameplayRst.VersePointLightProperties
class UVersePointLightProperties : public UVerseLocalLightProperties
{
public:
	float                                        SourceRadius;                                      // 0x50(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceLength;                                      // 0x54(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VersePointLightProperties");
		return Clss;
	}

	void OnRep_SourceRadius();
	void OnRep_SourceLength();
};

// 0x8 (0x60 - 0x58)
// Class VGameplayRst.VerseSpotLightProperties
class UVerseSpotLightProperties : public UVersePointLightProperties
{
public:
	float                                        InnerConeAngle;                                    // 0x58(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterConeAngle;                                    // 0x5C(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseSpotLightProperties");
		return Clss;
	}

	void OnRep_OuterConeAngle();
	void OnRep_InnerConeAngle();
};

// 0x10 (0xA0 - 0x90)
// Class VGameplayRst.ParticleSystemComponentBase
class UParticleSystemComponentBase : public UEntityActorComponent
{
public:
	class UVerseAssetPtr*                        ParticleSystemAsset;                               // 0x90(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bActive;                                           // 0x98(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A7A[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ParticleSystemComponentBase");
		return Clss;
	}

	void OnRep_ParticleSystemAsset();
	void OnRep_bActive();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
