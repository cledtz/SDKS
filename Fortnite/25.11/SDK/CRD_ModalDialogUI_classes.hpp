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
// Class CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction
class UCreativeModalDialogAllowedConversionFunction : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeModalDialogAllowedConversionFunction");
		return Clss;
	}

	enum class ECreativeModalDialogViewmodelResponse GetResponseNone(const struct FWidgetEventField& Field);
	enum class ECreativeModalDialogViewmodelResponse GetResponseButton6(const struct FWidgetEventField& Field);
	enum class ECreativeModalDialogViewmodelResponse GetResponseButton5(const struct FWidgetEventField& Field);
	enum class ECreativeModalDialogViewmodelResponse GetResponseButton4(const struct FWidgetEventField& Field);
	enum class ECreativeModalDialogViewmodelResponse GetResponseButton3(const struct FWidgetEventField& Field);
	enum class ECreativeModalDialogViewmodelResponse GetResponseButton2(const struct FWidgetEventField& Field);
	enum class ECreativeModalDialogViewmodelResponse GetResponseButton1(const struct FWidgetEventField& Field);
};

// 0x0 (0x28 - 0x28)
// Class CRD_ModalDialogUI.CreativeModalDialogConversionFunction
class UCreativeModalDialogConversionFunction : public UCreativeModalDialogAllowedConversionFunction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeModalDialogConversionFunction");
		return Clss;
	}

	enum class ECreativeModalDialogViewmodelResponse TranslateResponse(const struct FWidgetEventField& Field, enum class ECreativeModalDialogViewmodelResponse Response);
	int32 GetRowIndexForButtonFromContentAlignment(enum class ECreativeModalDialogAlignmentOption AlignmentOption, int32 ButtonIndex, int32 WideMaxColumns, int32 TallMaxColumns, int32 DefaultMaxColumns);
	struct FMargin GetMarginFromContentAlignment(enum class ECreativeModalDialogAlignmentOption AlignmentOption, float TallMarginAmount, float WideMarginAmount, float CenteredFullMarginAmount, float DefaultMarginAmount);
	float GetFloatingValueFromContentAlignment(enum class ECreativeModalDialogAlignmentOption AlignmentOption, float TallValue, float WideValue, float CenteredFullValue, float DefaultValue);
	int32 GetColumnIndexForButtonFromContentAlignment(enum class ECreativeModalDialogAlignmentOption AlignmentOption, int32 ButtonIndex, int32 WideMaxColumns, int32 TallMaxColumns, int32 DefaultMaxColumns);
	enum class ECreativeModalDialogViewmodelResponse AssignCreativeModalDialogViewmodelResponse(const struct FMVVMEventField& Field, enum class ECreativeModalDialogViewmodelResponse Response);
};

// 0x188 (0x1F0 - 0x68)
// Class CRD_ModalDialogUI.CreativeModalDialogViewmodel
class UCreativeModalDialogViewmodel : public UMVVMViewModelBase
{
public:
	class FText                                  Title;                                             // 0x68(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Body;                                              // 0x80(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UDataTable*                            TextStyleSet;                                      // 0x98(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  Button01_MainText;                                 // 0xA0(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button02_MainText;                                 // 0xB8(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button03_MainText;                                 // 0xD0(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button04_MainText;                                 // 0xE8(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button05_MainText;                                 // 0x100(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button06_MainText;                                 // 0x118(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button01_SubText;                                  // 0x130(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button02_SubText;                                  // 0x148(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button03_SubText;                                  // 0x160(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button04_SubText;                                  // 0x178(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button05_SubText;                                  // 0x190(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  Button06_SubText;                                  // 0x1A8(0x18)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UTexture2D*                            Art01_Image;                                       // 0x1C0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            Art02_Image;                                       // 0x1C8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECreativeModalDialogAlignmentOption ContentAlignment;                                  // 0x1D0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowBackground;                                   // 0x1D1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81CA[0x2];                                     // Fixing Size After Last Property..
	float                                        DialogBackgroundAlpha;                             // 0x1D4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECreativeModalDialogTimerOption   TimerOption;                                       // 0x1D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81CB[0x3];                                     // Fixing Size After Last Property..
	float                                        Timeout;                                           // 0x1DC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RemainingTimeForTimeout;                           // 0x1E0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumberOfButtons;                                   // 0x1E4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECreativeModalBackActionBoundButtonOption BackActionBoundButton;                             // 0x1E8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECreativeModalDialogViewmodelResponse Response;                                          // 0x1E9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81CC[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeModalDialogViewmodel");
		return Clss;
	}

	bool ShouldButton6UseFallbackDefaultInputAction();
	bool ShouldButton5UseFallbackDefaultInputAction();
	bool ShouldButton4UseFallbackDefaultInputAction();
	bool ShouldButton3UseFallbackDefaultInputAction();
	bool ShouldButton2UseFallbackDefaultInputAction();
	bool ShouldButton1UseFallbackDefaultInputAction();
	bool IsTimerVisible();
	bool IsButton6Visible();
	bool IsButton5Visible();
	bool IsButton4Visible();
	bool IsButton3Visible();
	bool IsButton2Visible();
	bool IsButton1Visible();
	enum class EVerticalAlignment GetVerticalAlignment();
	enum class ESlateVisibility GetTimerVisibility();
	float GetTimeoutProgress();
	enum class EHorizontalAlignment GetHorizontalAlignment();
	enum class ESlateVisibility GetButton6Visibility();
	struct FDataTableRowHandle GetButton6TriggeringInputAction();
	enum class ESlateVisibility GetButton5Visibility();
	struct FDataTableRowHandle GetButton5TriggeringInputAction();
	enum class ESlateVisibility GetButton4Visibility();
	struct FDataTableRowHandle GetButton4TriggeringInputAction();
	enum class ESlateVisibility GetButton3Visibility();
	struct FDataTableRowHandle GetButton3TriggeringInputAction();
	enum class ESlateVisibility GetButton2Visibility();
	struct FDataTableRowHandle GetButton2TriggeringInputAction();
	enum class ESlateVisibility GetButton1Visibility();
	struct FDataTableRowHandle GetButton1TriggeringInputAction();
	enum class ESlateVisibility GetBackgroundVisibility();
};

// 0x10 (0x408 - 0x3F8)
// Class CRD_ModalDialogUI.CreativeModalDialogWidget
class UCreativeModalDialogWidget : public UCommonActivatableWidget
{
public:
	struct FDataTableRowHandle                   MainMenuInputRowHandle;                            // 0x3F8(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeModalDialogWidget");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
