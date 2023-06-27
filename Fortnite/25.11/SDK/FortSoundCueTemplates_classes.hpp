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

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.FortSoundCueTemplateBase
class UFortSoundCueTemplateBase : public USoundCueTemplate
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSoundCueTemplateBase");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.EmoteBase
class UEmoteBase : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmoteBase");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.EmoteFoley
class UEmoteFoley : public UEmoteBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmoteFoley");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.EmoteMusic
class UEmoteMusic : public UEmoteBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmoteMusic");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.EmoteMusic3P
class UEmoteMusic3P : public UEmoteBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmoteMusic3P");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.PlayerFoleyBase
class UPlayerFoleyBase : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerFoleyBase");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.PlayerFoley
class UPlayerFoley : public UPlayerFoleyBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerFoley");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.FootstepFoley
class UFootstepFoley : public UPlayerFoley
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FootstepFoley");
		return Clss;
	}

};

// 0x60 (0x90 - 0x30)
// Class FortSoundCueTemplates.FortSoundCueTemplateDefaults
class UFortSoundCueTemplateDefaults : public UDataAsset
{
public:
	class USoundClass*                           SoundClass;                                        // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     Attenuation;                                       // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     Concurrency;                                       // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumeMultiplier;                                  // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchMultiplier;                                   // 0x4C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortSubmixPair>               SubmixSends;                                       // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortBusPair>                  PreEffectBusSends;                                 // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortBusPair>                  PostEffectBusSends;                                // 0x70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class USoundWave*                            LicensedTrackAlternative;                          // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                      LicensedSubmix;                                    // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSoundCueTemplateDefaults");
		return Clss;
	}

};

// 0x50 (0x80 - 0x30)
// Class FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings
class UFortSoundCueTemplateDefaultSettings : public UDataAsset
{
public:
	TMap<TSubclassOf<class UFortSoundCueTemplateBase>, class UFortSoundCueTemplateDefaults*> TemplateDefaults;                                  // 0x30(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSoundCueTemplateDefaultSettings");
		return Clss;
	}

	class UFortSoundCueTemplateDefaults* GetSettingsForTemplateType(TSubclassOf<class UFortSoundCueTemplateBase> TemplateType);
};

// 0x28 (0x58 - 0x30)
// Class FortSoundCueTemplates.FortSoundCueTemplateSettings
class UFortSoundCueTemplateSettings : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class UFortSoundCueTemplateDefaultSettings> DefaultTemplateSettings;                           // 0x30(0x28)(Edit, Config, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSoundCueTemplateSettings");
		return Clss;
	}

	class UFortSoundCueTemplateDefaults* GetDefaultSettingsForTemplateType(TSubclassOf<class UFortSoundCueTemplateBase> TemplateType);
};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.FortSoundCueTemplateSimple
class UFortSoundCueTemplateSimple : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSoundCueTemplateSimple");
		return Clss;
	}

};

// 0x160 (0x1F0 - 0x90)
// Class FortSoundCueTemplates.GliderThrustSCTDefaults
class UGliderThrustSCTDefaults : public UFortSoundCueTemplateDefaults
{
public:
	struct FGliderThrustData                     Forward;                                           // 0x90(0x58)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FGliderThrustData                     Sideways;                                          // 0xE8(0x58)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FGliderThrustData                     Backwards;                                         // 0x140(0x58)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FGliderThrustData                     AnyDirection;                                      // 0x198(0x58)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GliderThrustSCTDefaults");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.GliderThrustLoop
class UGliderThrustLoop : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GliderThrustLoop");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.GliderThrustStart
class UGliderThrustStart : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GliderThrustStart");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.GliderOpen
class UGliderOpen : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GliderOpen");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.GliderClose
class UGliderClose : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GliderClose");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.MusicPack
class UMusicPack : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MusicPack");
		return Clss;
	}

};

// 0x248 (0x2D8 - 0x90)
// Class FortSoundCueTemplates.PhysicsStateSCTDefaults
class UPhysicsStateSCTDefaults : public UFortSoundCueTemplateDefaults
{
public:
	class FName                                  SpeedParameterName;                                // 0x90(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1500[0x4];                                     // Fixing Size After Last Property..
	struct FPhysicsStateData                     Rolling;                                           // 0x98(0x90)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPhysicsStateData                     Sliding;                                           // 0x128(0x90)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPhysicsStateData                     Flying;                                            // 0x1B8(0x90)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FPhysicsStateData                     Floating;                                          // 0x248(0x90)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PhysicsStateSCTDefaults");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.PhysicsStateLoop
class UPhysicsStateLoop : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PhysicsStateLoop");
		return Clss;
	}

};

// 0x110 (0x1A0 - 0x90)
// Class FortSoundCueTemplates.PhysicsImpactSCTDefaults
class UPhysicsImpactSCTDefaults : public UFortSoundCueTemplateDefaults
{
public:
	class FName                                  ImpactTypeParameterName;                           // 0x90(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StrengthParameterName;                             // 0x94(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPhysicsImpactData                    Light;                                             // 0x98(0x58)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPhysicsImpactData                    Medium;                                            // 0xF0(0x58)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPhysicsImpactData                    Heavy;                                             // 0x148(0x58)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PhysicsImpactSCTDefaults");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.PhysicsImpact
class UPhysicsImpact : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PhysicsImpact");
		return Clss;
	}

};

// 0x20 (0xB0 - 0x90)
// Class FortSoundCueTemplates.PickaxeSCTDefaults
class UPickaxeSCTDefaults : public UFortSoundCueTemplateDefaults
{
public:
	class USoundAttenuation*                     CloseAttenuation;                                  // 0x90(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     DistantAttenuation;                                // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundWave*>                    DistantVariations;                                 // 0xA0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PickaxeSCTDefaults");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.PickaxeBase
class UPickaxeBase : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PickaxeBase");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.PickaxeSwing
class UPickaxeSwing : public UPickaxeBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PickaxeSwing");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.PickaxeReady
class UPickaxeReady : public UPickaxeBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PickaxeReady");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.PickaxeImpactEnemy
class UPickaxeImpactEnemy : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PickaxeImpactEnemy");
		return Clss;
	}

};

// 0x48 (0xD8 - 0x90)
// Class FortSoundCueTemplates.PlayerFoleyDefaults
class UPlayerFoleyDefaults : public UFortSoundCueTemplateDefaults
{
public:
	class USoundClass*                           LocalPlayerSoundClass;                             // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           TeammateSoundClass;                                // 0x98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           HostileSoundClass;                                 // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     LocalPlayerAttenuation;                            // 0xA8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     AboveAttenuation;                                  // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     BelowAttenuation;                                  // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     ParallelAttenuation;                               // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDistanceDatum>                ElevationCrossfadeDistances;                       // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerFoleyDefaults");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.WeaponLowAmmo
class UWeaponLowAmmo : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeaponLowAmmo");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.WeaponOutOfAmmo
class UWeaponOutOfAmmo : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeaponOutOfAmmo");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.WeaponReloadStart
class UWeaponReloadStart : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeaponReloadStart");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.WeaponReloadInsert
class UWeaponReloadInsert : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeaponReloadInsert");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.WeaponReloadEnd
class UWeaponReloadEnd : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeaponReloadEnd");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.WeaponTargetingStart
class UWeaponTargetingStart : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeaponTargetingStart");
		return Clss;
	}

};

// 0x0 (0x560 - 0x560)
// Class FortSoundCueTemplates.WeaponTargetingEnd
class UWeaponTargetingEnd : public UFortSoundCueTemplateSimple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeaponTargetingEnd");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
