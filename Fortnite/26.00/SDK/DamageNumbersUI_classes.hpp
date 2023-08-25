#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x488 - 0x2D0)
// Class DamageNumbersUI.CommonUserWidget_DamageNumbers
class UCommonUserWidget_DamageNumbers : public UCommonUserWidget
{
public:
	uint8                                        Pad_133C[0x10];                                    // Fixing Size After Last Property 
	struct FVector                               WorldSpacePos;                                     // 0x2E0(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CheckAnimalTag;                                    // 0x2F8(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Damage;                                            // 0x2FC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AdditionalVerticalScreenOffset;                    // 0x300(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_133E[0x4];                                     // Fixing Size After Last Property 
	double                                       SpawnTime;                                         // 0x308(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             DamageNumberScaleVector;                           // 0x310(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             ScreenSpaceOffsetFromHitActor;                     // 0x320(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             InverseHUDScaleVector;                             // 0x330(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActor*                                HitActor;                                          // 0x340(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHitAnimal;                                        // 0x348(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHitVehicle;                                       // 0x349(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPlayingCritAnimation;                           // 0x34A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1342[0x1];                                     // Fixing Size After Last Property 
	struct FLinearColor                          HitColor;                                          // 0x34C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          VehicleColor;                                      // 0x35C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          CritColor;                                         // 0x36C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          HealthColor;                                       // 0x37C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ShieldColor;                                       // 0x38C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          CritColor_Text;                                    // 0x39C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ShieldColor_Text;                                  // 0x3AC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          HealthColor_InnerStroke;                           // 0x3BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ShieldColor_InnerStroke;                           // 0x3CC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          CritColor_InnerStroke;                             // 0x3DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DamageIconVehicleColor;                            // 0x3EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DamageIconShieldColor;                             // 0x3FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DamageIconShieldOutline1Color;                     // 0x40C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DamageIconShieldOutline2Color;                     // 0x41C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DamageIconVehicleOutline1Color;                    // 0x42C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DamageIconVehicleOutline2Color;                    // 0x43C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1348[0x4];                                     // Fixing Size After Last Property 
	class UWidgetAnimation*                      OnDamage;                                          // 0x450(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnDamage_Crit;                                     // 0x458(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_Number;                                       // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_Number_Stroke;                                // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                DamageTypeCrit;                                    // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                DamageTypeIcon;                                    // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                DamageTypeIcon_EMP;                                // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCommonUserWidget_DamageNumbers* GetDefaultObj();

	void UpdateScreenSpacePosition();
	void Reset();
	void OnShieldBreak(bool bIsOvershield);
	void OnDamageDealt(double InDamage, class UActor* InActor, bool bInShield, bool bInCrit, const struct FVector& InWorldSpacePos, bool bInEMP);
};

// 0x88 (0x340 - 0x2B8)
// Class DamageNumbersUI.FortUserWidget_DamageNumbers
class UFortUserWidget_DamageNumbers : public UFortUserWidget
{
public:
	double                                       VerticalShiftForNewDamage;                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       AccumulationTime;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxNumberCount;                                    // 0x2C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1364[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               OffsetFromPawnLocationDBNO;                        // 0x2D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               OffsetFromPawnLocation;                            // 0x2E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPlayerPawn*                       BoundPawn;                                         // 0x300(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          HideDamageNumbersTag;                              // 0x308(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          DamageAtLocTag;                                    // 0x30C(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TagsToNotDisplayDmgNumbersOnSpecificActors;        // 0x310(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      DynamicEntryBox_Numbers;                           // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          DamageCueEMPTag;                                   // 0x338(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPrecreateDamageNumberEntries;                     // 0x33C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1368[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortUserWidget_DamageNumbers* GetDefaultObj();

	void UpdateBinding();
	void OnShieldBreak(bool bInOverShield);
	void OnPawnSet();
	void OnDamageNumberFinishedAnimating(class UCommonUserWidget_DamageNumbers* Widget);
	void OnDamageDealt(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, class UActor* HitActor, const struct FVector& HitLocation, const struct FGameplayTagContainer& Tags);
	void ClearBinding();
};

// 0x0 (0x28 - 0x28)
// Class DamageNumbersUI.FortGameSettingRegistryExtension_DamageNumbers
class UFortGameSettingRegistryExtension_DamageNumbers : public UFortGameSettingRegistryExtension
{
public:

	static class UClass* StaticClass();
	static class UFortGameSettingRegistryExtension_DamageNumbers* GetDefaultObj();

};

}


