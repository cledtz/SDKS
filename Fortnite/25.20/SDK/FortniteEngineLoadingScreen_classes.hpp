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

// 0x550 (0x580 - 0x30)
// Class FortniteEngineLoadingScreen.FortniteUserInterfaceSettings
class UFortniteUserInterfaceSettings : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                    WidthScaleCurve;                                   // 0x30(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve;                                  // 0xB8(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_iOS_InGame;                        // 0x140(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_iOS_InGame;                       // 0x1C8(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_iOS_FrontEnd;                      // 0x250(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_iOS_FrontEnd;                     // 0x2D8(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_Android_InGame;                    // 0x360(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_Android_InGame;                   // 0x3E8(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_Android_FrontEnd;                  // 0x470(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_Android_FrontEnd;                 // 0x4F8(0x88)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortniteUserInterfaceSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
