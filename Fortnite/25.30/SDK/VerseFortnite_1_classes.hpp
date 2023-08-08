#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.AI
class UAI : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortLeashable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFocusInterface_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UAI_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject);
	void _L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UAI_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.AI_focus_interface
class UAI_focus_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_focus_interface");
		return Clss;
	}

	class UConcurrency_task* MaintainFocus_L_Nvector3_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MaintainFocus_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.AI_fort_leashable
class UAI_fort_leashable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_fort_leashable");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R(const struct FTuple_Lvector3_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R(const struct FTuple_Lagent_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.AI_navigatable
class UAI_navigatable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_navigatable");
		return Clss;
	}

	class UConcurrency_task* Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x20 (0x48 - 0x28)
// VerseClass VerseFortnite.AI_navigation_target
class UAI_navigation_target : public UObject
{
public:
	uint8                                        Pad_666F[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_navigation_target");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Characters
class UCharacters : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Characters");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigatorAgent_U_L_Ngame__action__instigator_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigator_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetFortCharacter_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	struct FCharacters_stasis_args Characters_stasis_args_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5);
	struct FCharacters_stasis_args Characters_stasis_args_Factory();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Characters_fort_character
class UCharacters_fort_character : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Characters_fort_character");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R(const struct FTuple_Lvector3_Mrotation_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R(const struct FCharacters_stasis_args& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x330 (0x380 - 0x50)
// VerseClass VerseFortnite.Characters_fort_character_impl
class UCharacters_fort_character_impl : public UVerseFortniteCharacter
{
public:
	FVerseFunctionProperty_                      __verse_0xCB6F79D3__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent; // 0x50(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1B4AAA99__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent; // 0x60(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2F94B078__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation; // 0x70(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE791C181__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation; // 0x80(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x454A4B2C__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent; // 0x90(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC92ABB7D__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD90058E7__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0F127353__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD3C45C5B__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut; // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1E524A70__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching; // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xEF5FA653__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround; // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x35BF825D__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir; // 0x100(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x07C93F4C__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater; // 0x110(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x93AC94CF__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling; // 0x120(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x18D996AC__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding; // 0x130(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x15F5E912__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying; // 0x140(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0337C666__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R; // 0x150(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x33C4CAA3__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis; // 0x160(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCBE35292__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow; // 0x170(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC5397112__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide; // 0x180(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2A43A893__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R; // 0x190(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9084EF8E__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable; // 0x1A0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9F0B7868__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R; // 0x1B0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x48326568__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield; // 0x1C0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8B41548F__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R; // 0x1D0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x26941A48__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield; // 0x1E0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4BA33B47__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R; // 0x1F0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF6DD1D2E__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent; // 0x200(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDCD5C88E__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent; // 0x210(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x919B3D8B__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R; // 0x220(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xBCC8CFC8__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R; // 0x230(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7782AD90__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent; // 0x240(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x641F6E2B__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth; // 0x250(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF2F0AAD0__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R; // 0x260(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3244305D__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth; // 0x270(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x339B570D__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R; // 0x280(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3579A169__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R; // 0x290(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF6BFDA59__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R; // 0x2A0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF8CC989C__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent; // 0x2B0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6B57E438__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform; // 0x2C0(0x10)(InstancedReference, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x4DE1175C_DamagedHealthEventInternal;     // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x3EFD7EED_DamagedShieldEventInternal;     // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0xF4EDADDB_HealedHealthEventInternal;      // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x87F1C46A_HealedShieldEventInternal;      // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x0008931F_CrouchedEventInternal;          // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0xCE63A4CB_JumpedEventInternal;            // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x242DF4E0_SprintedEventInternal;          // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x5587B813_EliminatedEventInternal;        // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_6731[0x70];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Characters_fort_character_impl");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R(const struct FTuple_Lvector3_Mrotation_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R(const struct FCharacters_stasis_args& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R(const struct FGame_healing_args& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_transform _L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R(const struct FGame_damage_args& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3, class UVerseEngine_subscribable_event* _ExprResult_4, uint64 _InstancingGraph_5, class UVerseEngine_subscribable_event* _ExprResult_6, uint64 _InstancingGraph_7, class UVerseEngine_subscribable_event* _ExprResult_8, uint64 _InstancingGraph_9, class UVerseEngine_subscribable_event* _ExprResult_10, uint64 _InstancingGraph_11, class UVerseEngine_subscribable_event* _ExprResult_12, uint64 _InstancingGraph_13, class UVerseEngine_subscribable_event* _ExprResult_14, uint64 _InstancingGraph_15);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.FortPlayerUtilities
class UFortPlayerUtilities : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerUtilities");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectatePlayer_U_L_Nplayer_M_Ntuple_L_R_M_Nplayer_R(const struct FTuple_Lplayer_Mtuple_L_R_Mplayer_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectateEliminator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSetSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSendToLobby_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eRespawn_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R(const struct FTuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eIsSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_player*> _L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eGetPlayersSpectating_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Game
class UGame : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Game");
		return Clss;
	}

	struct FGame_healing_result Game_healing_result_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FOptionProperty_ _ExprResult_2, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_3, FOptionProperty_ _ExprResultStack_4, FVerseStringProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResult_6, FOptionProperty_ _ExprResult_7, FOptionProperty_ __verse_0x00000000__3, uint8 _ExprResult_8, FOptionProperty_ _ExprResultStack_9);
	struct FGame_healing_result Game_healing_result_Factory(FOptionProperty_ _ExprResult_0, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FOptionProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionProperty_ _ExprResultStack_5);
	struct FGame_healing_args Game_healing_args_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FOptionProperty_ _ExprResult_2, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_3, FOptionProperty_ _ExprResultStack_4, FVerseStringProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResult_6, FOptionProperty_ _ExprResult_7, FOptionProperty_ __verse_0x00000000__3, uint8 _ExprResult_8, FOptionProperty_ _ExprResultStack_9);
	struct FGame_healing_args Game_healing_args_Factory(FOptionProperty_ _ExprResult_0, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FOptionProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionProperty_ _ExprResultStack_5);
	struct FGame_damage_result Game_damage_result_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FOptionProperty_ _ExprResult_2, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_3, FOptionProperty_ _ExprResultStack_4, FVerseStringProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResult_6, FOptionProperty_ _ExprResult_7, FOptionProperty_ __verse_0x00000000__3, uint8 _ExprResult_8, FOptionProperty_ _ExprResultStack_9);
	struct FGame_damage_result Game_damage_result_Factory(FOptionProperty_ _ExprResult_0, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FOptionProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionProperty_ _ExprResultStack_5);
	struct FGame_damage_args Game_damage_args_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FOptionProperty_ _ExprResult_2, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_3, FOptionProperty_ _ExprResultStack_4, FVerseStringProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResult_6, FOptionProperty_ _ExprResult_7, FOptionProperty_ __verse_0x00000000__3, uint8 _ExprResult_8, FOptionProperty_ _ExprResultStack_9);
	struct FGame_damage_args Game_damage_args_Factory(FOptionProperty_ _ExprResult_0, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FOptionProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionProperty_ _ExprResultStack_5);
	struct FGame_elimination_result Game_elimination_result_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FGame_elimination_result Game_elimination_result_Factory();
	void _InitCDO();
};

// 0x8 (0x30 - 0x28)
// VerseClass VerseFortnite.Game_agent_instigator_impl
class UGame_agent_instigator_impl : public UObject
{
public:
	class USimulation_agent*                     __verse_0x8D191063_TheAgent;                       // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Game_agent_instigator_impl");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Game_damageable
class UGame_damageable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Game_damageable");
		return Clss;
	}

	class UObject* _L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R(const struct FGame_damage_args& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Game_game_action_causer
class UGame_game_action_causer : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Game_game_action_causer");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Game_game_action_instigator
class UGame_game_action_instigator : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Game_game_action_instigator");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Game_healable
class UGame_healable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Game_healable");
		return Clss;
	}

	class UObject* _L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R(const struct FGame_healing_args& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Game_healthful
class UGame_healthful : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Game_healthful");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Game_positional
class UGame_positional : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Game_positional");
		return Clss;
	}

	struct FSpatialMath_transform _L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Game_shieldable
class UGame_shieldable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Game_shieldable");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Playspaces_fort_playspace
class UPlayspaces_fort_playspace : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Playspaces_fort_playspace");
		return Clss;
	}

	class UObject* _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_player*> _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x50 (0x108 - 0xB8)
// VerseClass VerseFortnite.Playspaces_fort_playspace_impl
class UPlayspaces_fort_playspace_impl : public UVerseFortnitePlayspace
{
public:
	FVerseFunctionProperty_                      __verse_0x3B43FA74__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x179254F9__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5ED7C0BA__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8B6A4ED9__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0xD574E81A_PlayerAddedEventInternal;       // 0xF8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x91891F4A_PlayerRemovedEventInternal;     // 0x100(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Playspaces_fort_playspace_impl");
		return Clss;
	}

	class UObject* _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_player*> _L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3);
};

// 0x10 (0x160 - 0x150)
// VerseClass VerseFortnite.task_AI_focus_interface$MaintainFocus_L_Nagent_R
class UTask_AI_focus_interface_MaintainFocus_L_Nagent_R : public UConcurrency_task
{
public:
	class UAI_focus_interface*                   _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x158(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_AI_focus_interface$MaintainFocus_L_Nagent_R");
		return Clss;
	}

	int64 Update();
};

// 0x20 (0x170 - 0x150)
// VerseClass VerseFortnite.task_AI_focus_interface$MaintainFocus_L_Nvector3_R
class UTask_AI_focus_interface_MaintainFocus_L_Nvector3_R : public UConcurrency_task
{
public:
	class UAI_focus_interface*                   _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x158(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_AI_focus_interface$MaintainFocus_L_Nvector3_R");
		return Clss;
	}

	int64 Update();
};

// 0x29 (0x179 - 0x150)
// VerseClass VerseFortnite.task_AI_navigatable$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
class UTask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{
public:
	class UAI_navigatable*                       _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;                       // 0x158(0x1A)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_6805[0x6];                                     // Fixing Size After Last Property
	enum class EAI_navigation_result             _RetVal;                                           // 0x178(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_AI_navigatable$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");
		return Clss;
	}

	int64 Update();
};

// 0x18 (0x168 - 0x150)
// VerseClass VerseFortnite.task_AI_navigatable$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
class UTask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{
public:
	class UAI_navigatable*                       _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xB2CDDD72_Argument;                       // 0x158(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_AI_navigatable$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");
		return Clss;
	}

	int64 Update();
};

// 0x70 (0x100 - 0x90)
// VerseClass VerseFortnite.Teams_fort_br_team_collection
class UTeams_fort_br_team_collection : public UVerseFortniteBRTeamCollection
{
public:
	FVerseFunctionProperty_                      __verse_0x2B14CBA3__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams; // 0x90(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7D93C574__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF54858F7__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA8860961__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x50AAD761__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R; // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x91ADE272__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R; // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDE2FEE1D__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R; // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Teams_fort_br_team_collection");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_team*> _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R(const struct FTuple_Lteam_Mteam_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R(const struct FTuple_Lagent_Magent_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R(class USimulation_team* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x70 (0xB8 - 0x48)
// VerseClass VerseFortnite.Teams_fort_minigame_team_collection
class UTeams_fort_minigame_team_collection : public UVerseFortniteMinigameTeamCollection
{
public:
	FVerseFunctionProperty_                      __verse_0x2B14CBA3__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7D93C574__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF54858F7__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA8860961__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x50AAD761__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x91ADE272__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDE2FEE1D__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Teams_fort_minigame_team_collection");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_team*> _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R(const struct FTuple_Lteam_Mteam_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R(const struct FTuple_Lagent_Magent_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R(class USimulation_team* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Teams_fort_team_collection
class UTeams_fort_team_collection : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Teams_fort_team_collection");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_team*> _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R(const struct FTuple_Lteam_Mteam_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R(const struct FTuple_Lagent_Magent_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R(class USimulation_team* __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Vehicles
class UVehicles : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Vehicles");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fVehicles_N_Roperator_U_2eGetVehicle_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortnite.Vehicles_fort_vehicle
class UVehicles_fort_vehicle : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Vehicles_fort_vehicle");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	TArray<class UObject*> _L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0xC8 (0x110 - 0x48)
// VerseClass VerseFortnite.Vehicles_fort_vehicle_impl
class UVehicles_fort_vehicle_impl : public UVerseFortniteActorWrapper
{
public:
	FVerseFunctionProperty_                      __verse_0x8C0CA4A3__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3F07A9C6__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFC37D805__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD063A709__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x919B3D8B__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xBCC8CFC8__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7782AD90__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x641F6E2B__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF2F0AAD0__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3244305D__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x339B570D__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6B57E438__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x4996425D_DamagedEventInternal;           // 0x108(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Vehicles_fort_vehicle_impl");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_transform _L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	TArray<class UObject*> _L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R(const struct FGame_damage_args& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
