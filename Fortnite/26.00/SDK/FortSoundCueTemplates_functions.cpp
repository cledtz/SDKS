#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortSoundCueTemplates.FortSoundCueTemplateBase
// (None)

class UClass* UFortSoundCueTemplateBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSoundCueTemplateBase");

	return Clss;
}


// FortSoundCueTemplateBase FortSoundCueTemplates.Default__FortSoundCueTemplateBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSoundCueTemplateBase* UFortSoundCueTemplateBase::GetDefaultObj()
{
	static class UFortSoundCueTemplateBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSoundCueTemplateBase*>(UFortSoundCueTemplateBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.EmoteBase
// (None)

class UClass* UEmoteBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteBase");

	return Clss;
}


// EmoteBase FortSoundCueTemplates.Default__EmoteBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmoteBase* UEmoteBase::GetDefaultObj()
{
	static class UEmoteBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteBase*>(UEmoteBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.EmoteFoley
// (None)

class UClass* UEmoteFoley::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteFoley");

	return Clss;
}


// EmoteFoley FortSoundCueTemplates.Default__EmoteFoley
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmoteFoley* UEmoteFoley::GetDefaultObj()
{
	static class UEmoteFoley* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteFoley*>(UEmoteFoley::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.EmoteMusic
// (None)

class UClass* UEmoteMusic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteMusic");

	return Clss;
}


// EmoteMusic FortSoundCueTemplates.Default__EmoteMusic
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmoteMusic* UEmoteMusic::GetDefaultObj()
{
	static class UEmoteMusic* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteMusic*>(UEmoteMusic::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.EmoteMusic3P
// (None)

class UClass* UEmoteMusic3P::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteMusic3P");

	return Clss;
}


// EmoteMusic3P FortSoundCueTemplates.Default__EmoteMusic3P
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmoteMusic3P* UEmoteMusic3P::GetDefaultObj()
{
	static class UEmoteMusic3P* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteMusic3P*>(UEmoteMusic3P::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PlayerFoleyBase
// (None)

class UClass* UPlayerFoleyBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerFoleyBase");

	return Clss;
}


// PlayerFoleyBase FortSoundCueTemplates.Default__PlayerFoleyBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerFoleyBase* UPlayerFoleyBase::GetDefaultObj()
{
	static class UPlayerFoleyBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerFoleyBase*>(UPlayerFoleyBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PlayerFoley
// (None)

class UClass* UPlayerFoley::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerFoley");

	return Clss;
}


// PlayerFoley FortSoundCueTemplates.Default__PlayerFoley
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerFoley* UPlayerFoley::GetDefaultObj()
{
	static class UPlayerFoley* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerFoley*>(UPlayerFoley::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.FootstepFoley
// (None)

class UClass* UFootstepFoley::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FootstepFoley");

	return Clss;
}


// FootstepFoley FortSoundCueTemplates.Default__FootstepFoley
// (Public, ClassDefaultObject, ArchetypeObject)

class UFootstepFoley* UFootstepFoley::GetDefaultObj()
{
	static class UFootstepFoley* Default = nullptr;

	if (!Default)
		Default = static_cast<UFootstepFoley*>(UFootstepFoley::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.FortSoundCueTemplateDefaults
// (None)

class UClass* UFortSoundCueTemplateDefaults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSoundCueTemplateDefaults");

	return Clss;
}


// FortSoundCueTemplateDefaults FortSoundCueTemplates.Default__FortSoundCueTemplateDefaults
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSoundCueTemplateDefaults* UFortSoundCueTemplateDefaults::GetDefaultObj()
{
	static class UFortSoundCueTemplateDefaults* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSoundCueTemplateDefaults*>(UFortSoundCueTemplateDefaults::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings
// (None)

class UClass* UFortSoundCueTemplateDefaultSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSoundCueTemplateDefaultSettings");

	return Clss;
}


// FortSoundCueTemplateDefaultSettings FortSoundCueTemplates.Default__FortSoundCueTemplateDefaultSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSoundCueTemplateDefaultSettings* UFortSoundCueTemplateDefaultSettings::GetDefaultObj()
{
	static class UFortSoundCueTemplateDefaultSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSoundCueTemplateDefaultSettings*>(UFortSoundCueTemplateDefaultSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings.GetSettingsForTemplateType
// (Final, Native, Public)
// Parameters:
// TSubclassOf<class UFortSoundCueTemplateBase>TemplateType                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortSoundCueTemplateDefaults*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortSoundCueTemplateDefaults* UFortSoundCueTemplateDefaultSettings::GetSettingsForTemplateType(TSubclassOf<class UFortSoundCueTemplateBase> TemplateType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSoundCueTemplateDefaultSettings", "GetSettingsForTemplateType");

	Params::UFortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType_Params Parms{};

	Parms.TemplateType = TemplateType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortSoundCueTemplates.FortSoundCueTemplateSettings
// (None)

class UClass* UFortSoundCueTemplateSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSoundCueTemplateSettings");

	return Clss;
}


// FortSoundCueTemplateSettings FortSoundCueTemplates.Default__FortSoundCueTemplateSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSoundCueTemplateSettings* UFortSoundCueTemplateSettings::GetDefaultObj()
{
	static class UFortSoundCueTemplateSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSoundCueTemplateSettings*>(UFortSoundCueTemplateSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function FortSoundCueTemplates.FortSoundCueTemplateSettings.GetDefaultSettingsForTemplateType
// (Final, Native, Public, Const)
// Parameters:
// TSubclassOf<class UFortSoundCueTemplateBase>TemplateType                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortSoundCueTemplateDefaults*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortSoundCueTemplateDefaults* UFortSoundCueTemplateSettings::GetDefaultSettingsForTemplateType(TSubclassOf<class UFortSoundCueTemplateBase> TemplateType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSoundCueTemplateSettings", "GetDefaultSettingsForTemplateType");

	Params::UFortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType_Params Parms{};

	Parms.TemplateType = TemplateType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortSoundCueTemplates.FortSoundCueTemplateSimple
// (None)

class UClass* UFortSoundCueTemplateSimple::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSoundCueTemplateSimple");

	return Clss;
}


// FortSoundCueTemplateSimple FortSoundCueTemplates.Default__FortSoundCueTemplateSimple
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSoundCueTemplateSimple* UFortSoundCueTemplateSimple::GetDefaultObj()
{
	static class UFortSoundCueTemplateSimple* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSoundCueTemplateSimple*>(UFortSoundCueTemplateSimple::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.GliderThrustSCTDefaults
// (None)

class UClass* UGliderThrustSCTDefaults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GliderThrustSCTDefaults");

	return Clss;
}


// GliderThrustSCTDefaults FortSoundCueTemplates.Default__GliderThrustSCTDefaults
// (Public, ClassDefaultObject, ArchetypeObject)

class UGliderThrustSCTDefaults* UGliderThrustSCTDefaults::GetDefaultObj()
{
	static class UGliderThrustSCTDefaults* Default = nullptr;

	if (!Default)
		Default = static_cast<UGliderThrustSCTDefaults*>(UGliderThrustSCTDefaults::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.GliderThrustLoop
// (None)

class UClass* UGliderThrustLoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GliderThrustLoop");

	return Clss;
}


// GliderThrustLoop FortSoundCueTemplates.Default__GliderThrustLoop
// (Public, ClassDefaultObject, ArchetypeObject)

class UGliderThrustLoop* UGliderThrustLoop::GetDefaultObj()
{
	static class UGliderThrustLoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UGliderThrustLoop*>(UGliderThrustLoop::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.GliderThrustStart
// (None)

class UClass* UGliderThrustStart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GliderThrustStart");

	return Clss;
}


// GliderThrustStart FortSoundCueTemplates.Default__GliderThrustStart
// (Public, ClassDefaultObject, ArchetypeObject)

class UGliderThrustStart* UGliderThrustStart::GetDefaultObj()
{
	static class UGliderThrustStart* Default = nullptr;

	if (!Default)
		Default = static_cast<UGliderThrustStart*>(UGliderThrustStart::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.GliderOpen
// (None)

class UClass* UGliderOpen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GliderOpen");

	return Clss;
}


// GliderOpen FortSoundCueTemplates.Default__GliderOpen
// (Public, ClassDefaultObject, ArchetypeObject)

class UGliderOpen* UGliderOpen::GetDefaultObj()
{
	static class UGliderOpen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGliderOpen*>(UGliderOpen::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.GliderClose
// (None)

class UClass* UGliderClose::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GliderClose");

	return Clss;
}


// GliderClose FortSoundCueTemplates.Default__GliderClose
// (Public, ClassDefaultObject, ArchetypeObject)

class UGliderClose* UGliderClose::GetDefaultObj()
{
	static class UGliderClose* Default = nullptr;

	if (!Default)
		Default = static_cast<UGliderClose*>(UGliderClose::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.MusicPack
// (None)

class UClass* UMusicPack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MusicPack");

	return Clss;
}


// MusicPack FortSoundCueTemplates.Default__MusicPack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMusicPack* UMusicPack::GetDefaultObj()
{
	static class UMusicPack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMusicPack*>(UMusicPack::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PhysicsStateSCTDefaults
// (None)

class UClass* UPhysicsStateSCTDefaults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsStateSCTDefaults");

	return Clss;
}


// PhysicsStateSCTDefaults FortSoundCueTemplates.Default__PhysicsStateSCTDefaults
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsStateSCTDefaults* UPhysicsStateSCTDefaults::GetDefaultObj()
{
	static class UPhysicsStateSCTDefaults* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsStateSCTDefaults*>(UPhysicsStateSCTDefaults::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PhysicsStateLoop
// (None)

class UClass* UPhysicsStateLoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsStateLoop");

	return Clss;
}


// PhysicsStateLoop FortSoundCueTemplates.Default__PhysicsStateLoop
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsStateLoop* UPhysicsStateLoop::GetDefaultObj()
{
	static class UPhysicsStateLoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsStateLoop*>(UPhysicsStateLoop::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PhysicsImpactSCTDefaults
// (None)

class UClass* UPhysicsImpactSCTDefaults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsImpactSCTDefaults");

	return Clss;
}


// PhysicsImpactSCTDefaults FortSoundCueTemplates.Default__PhysicsImpactSCTDefaults
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsImpactSCTDefaults* UPhysicsImpactSCTDefaults::GetDefaultObj()
{
	static class UPhysicsImpactSCTDefaults* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsImpactSCTDefaults*>(UPhysicsImpactSCTDefaults::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PhysicsImpact
// (None)

class UClass* UPhysicsImpact::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsImpact");

	return Clss;
}


// PhysicsImpact FortSoundCueTemplates.Default__PhysicsImpact
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsImpact* UPhysicsImpact::GetDefaultObj()
{
	static class UPhysicsImpact* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsImpact*>(UPhysicsImpact::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PickaxeSCTDefaults
// (None)

class UClass* UPickaxeSCTDefaults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickaxeSCTDefaults");

	return Clss;
}


// PickaxeSCTDefaults FortSoundCueTemplates.Default__PickaxeSCTDefaults
// (Public, ClassDefaultObject, ArchetypeObject)

class UPickaxeSCTDefaults* UPickaxeSCTDefaults::GetDefaultObj()
{
	static class UPickaxeSCTDefaults* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickaxeSCTDefaults*>(UPickaxeSCTDefaults::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PickaxeBase
// (None)

class UClass* UPickaxeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickaxeBase");

	return Clss;
}


// PickaxeBase FortSoundCueTemplates.Default__PickaxeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPickaxeBase* UPickaxeBase::GetDefaultObj()
{
	static class UPickaxeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickaxeBase*>(UPickaxeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PickaxeSwing
// (None)

class UClass* UPickaxeSwing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickaxeSwing");

	return Clss;
}


// PickaxeSwing FortSoundCueTemplates.Default__PickaxeSwing
// (Public, ClassDefaultObject, ArchetypeObject)

class UPickaxeSwing* UPickaxeSwing::GetDefaultObj()
{
	static class UPickaxeSwing* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickaxeSwing*>(UPickaxeSwing::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PickaxeReady
// (None)

class UClass* UPickaxeReady::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickaxeReady");

	return Clss;
}


// PickaxeReady FortSoundCueTemplates.Default__PickaxeReady
// (Public, ClassDefaultObject, ArchetypeObject)

class UPickaxeReady* UPickaxeReady::GetDefaultObj()
{
	static class UPickaxeReady* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickaxeReady*>(UPickaxeReady::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PickaxeImpactEnemy
// (None)

class UClass* UPickaxeImpactEnemy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickaxeImpactEnemy");

	return Clss;
}


// PickaxeImpactEnemy FortSoundCueTemplates.Default__PickaxeImpactEnemy
// (Public, ClassDefaultObject, ArchetypeObject)

class UPickaxeImpactEnemy* UPickaxeImpactEnemy::GetDefaultObj()
{
	static class UPickaxeImpactEnemy* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickaxeImpactEnemy*>(UPickaxeImpactEnemy::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PlayerFoleyDefaults
// (None)

class UClass* UPlayerFoleyDefaults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerFoleyDefaults");

	return Clss;
}


// PlayerFoleyDefaults FortSoundCueTemplates.Default__PlayerFoleyDefaults
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerFoleyDefaults* UPlayerFoleyDefaults::GetDefaultObj()
{
	static class UPlayerFoleyDefaults* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerFoleyDefaults*>(UPlayerFoleyDefaults::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.WeaponLowAmmo
// (None)

class UClass* UWeaponLowAmmo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponLowAmmo");

	return Clss;
}


// WeaponLowAmmo FortSoundCueTemplates.Default__WeaponLowAmmo
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponLowAmmo* UWeaponLowAmmo::GetDefaultObj()
{
	static class UWeaponLowAmmo* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponLowAmmo*>(UWeaponLowAmmo::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.WeaponOutOfAmmo
// (None)

class UClass* UWeaponOutOfAmmo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponOutOfAmmo");

	return Clss;
}


// WeaponOutOfAmmo FortSoundCueTemplates.Default__WeaponOutOfAmmo
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponOutOfAmmo* UWeaponOutOfAmmo::GetDefaultObj()
{
	static class UWeaponOutOfAmmo* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponOutOfAmmo*>(UWeaponOutOfAmmo::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.WeaponReloadStart
// (None)

class UClass* UWeaponReloadStart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponReloadStart");

	return Clss;
}


// WeaponReloadStart FortSoundCueTemplates.Default__WeaponReloadStart
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponReloadStart* UWeaponReloadStart::GetDefaultObj()
{
	static class UWeaponReloadStart* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponReloadStart*>(UWeaponReloadStart::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.WeaponReloadInsert
// (None)

class UClass* UWeaponReloadInsert::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponReloadInsert");

	return Clss;
}


// WeaponReloadInsert FortSoundCueTemplates.Default__WeaponReloadInsert
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponReloadInsert* UWeaponReloadInsert::GetDefaultObj()
{
	static class UWeaponReloadInsert* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponReloadInsert*>(UWeaponReloadInsert::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.WeaponReloadEnd
// (None)

class UClass* UWeaponReloadEnd::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponReloadEnd");

	return Clss;
}


// WeaponReloadEnd FortSoundCueTemplates.Default__WeaponReloadEnd
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponReloadEnd* UWeaponReloadEnd::GetDefaultObj()
{
	static class UWeaponReloadEnd* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponReloadEnd*>(UWeaponReloadEnd::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.WeaponTargetingStart
// (None)

class UClass* UWeaponTargetingStart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponTargetingStart");

	return Clss;
}


// WeaponTargetingStart FortSoundCueTemplates.Default__WeaponTargetingStart
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponTargetingStart* UWeaponTargetingStart::GetDefaultObj()
{
	static class UWeaponTargetingStart* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponTargetingStart*>(UWeaponTargetingStart::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.WeaponTargetingEnd
// (None)

class UClass* UWeaponTargetingEnd::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponTargetingEnd");

	return Clss;
}


// WeaponTargetingEnd FortSoundCueTemplates.Default__WeaponTargetingEnd
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponTargetingEnd* UWeaponTargetingEnd::GetDefaultObj()
{
	static class UWeaponTargetingEnd* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponTargetingEnd*>(UWeaponTargetingEnd::StaticClass()->DefaultObject);

	return Default;
}

}


