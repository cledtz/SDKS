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
// Class Slate.ToolMenuBase
class UToolMenuBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToolMenuBase");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Slate.SlateSettings
class USlateSettings : public UObject
{
public:
	bool                                         bExplicitCanvasChildZOrder;                        // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143B[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateSettings");
		return Clss;
	}

};

// 0x3B0 (0x3E0 - 0x30)
// Class Slate.ButtonWidgetStyle
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                          ButtonStyle;                                       // 0x30(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ButtonWidgetStyle");
		return Clss;
	}

};

// 0xA10 (0xA40 - 0x30)
// Class Slate.CheckBoxWidgetStyle
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                        CheckBoxStyle;                                     // 0x30(0xA10)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckBoxWidgetStyle");
		return Clss;
	}

};

// 0x600 (0x630 - 0x30)
// Class Slate.ComboBoxWidgetStyle
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                        ComboBoxStyle;                                     // 0x30(0x600)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComboBoxWidgetStyle");
		return Clss;
	}

};

// 0x5A0 (0x5D0 - 0x30)
// Class Slate.ComboButtonWidgetStyle
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x30(0x5A0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComboButtonWidgetStyle");
		return Clss;
	}

};

// 0xD80 (0xDB0 - 0x30)
// Class Slate.EditableTextBoxWidgetStyle
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x30(0xD80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableTextBoxWidgetStyle");
		return Clss;
	}

};

// 0x2C0 (0x2F0 - 0x30)
// Class Slate.EditableTextWidgetStyle
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                    EditableTextStyle;                                 // 0x30(0x2C0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableTextWidgetStyle");
		return Clss;
	}

};

// 0x260 (0x290 - 0x30)
// Class Slate.ProgressWidgetStyle
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                     ProgressBarStyle;                                  // 0x30(0x260)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProgressWidgetStyle");
		return Clss;
	}

};

// 0x6E0 (0x710 - 0x30)
// Class Slate.ScrollBarWidgetStyle
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x30(0x6E0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScrollBarWidgetStyle");
		return Clss;
	}

};

// 0x330 (0x360 - 0x30)
// Class Slate.ScrollBoxWidgetStyle
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                       ScrollBoxStyle;                                    // 0x30(0x330)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScrollBoxWidgetStyle");
		return Clss;
	}

};

// 0x590 (0x5C0 - 0x30)
// Class Slate.SpinBoxWidgetStyle
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                         SpinBoxStyle;                                      // 0x30(0x590)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpinBoxWidgetStyle");
		return Clss;
	}

};

// 0x310 (0x340 - 0x30)
// Class Slate.TextBlockWidgetStyle
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                       TextBlockStyle;                                    // 0x30(0x310)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TextBlockWidgetStyle");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
