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
// Class LiveLinkInterface.LiveLinkController
class ULiveLinkController : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkController");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkFrameInterpolationProcessor");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFramePreProcessor
class ULiveLinkFramePreProcessor : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkFramePreProcessor");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkRole
class ULiveLinkRole : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkRole");
		return Clss;
	}

};

// 0x80 (0xA8 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceSettings
class ULiveLinkSourceSettings : public UObject
{
public:
	enum class ELiveLinkSourceMode               Mode;                                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42D0[0x7];                                     // Fixing Size After Last Property..
	struct FLiveLinkSourceBufferManagementSettings BufferSettings;                                    // 0x30(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ConnectionString;                                  // 0x90(0x10)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkSourceFactory>    Factory;                                           // 0xA0(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkSourceSettings");
		return Clss;
	}

};

// 0x50 (0xF8 - 0xA8)
// Class LiveLinkInterface.LiveLinkCurveRemapSettings
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings      CurveConversionSettings;                           // 0xA8(0x50)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkCurveRemapSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFrameTranslator
class ULiveLinkFrameTranslator : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkFrameTranslator");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceFactory
class ULiveLinkSourceFactory : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkSourceFactory");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class LiveLinkInterface.LiveLinkSubjectSettings
class ULiveLinkSubjectSettings : public UObject
{
public:
	TArray<class ULiveLinkFramePreProcessor*>    PreProcessors;                                     // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class ULiveLinkFrameInterpolationProcessor*  InterpolationProcessor;                            // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULiveLinkFrameTranslator*>      Translators;                                       // 0x40(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x50(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            FrameRate;                                         // 0x58(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRebroadcastSubject;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42D1[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkSubjectSettings");
		return Clss;
	}

};

// 0x130 (0x158 - 0x28)
// Class LiveLinkInterface.LiveLinkVirtualSubject
class ULiveLinkVirtualSubject : public UObject
{
public:
	uint8                                        Pad_42D2[0x8];                                     // Fixing Size After Last Property..
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLiveLinkSubjectName>          Subjects;                                          // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ULiveLinkFrameTranslator*>      FrameTranslators;                                  // 0x48(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bRebroadcastSubject;                               // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_42D3[0xFF];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkVirtualSubject");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkBasicRole
class ULiveLinkBasicRole : public ULiveLinkRole
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkBasicRole");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkAnimationRole
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkAnimationRole");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkTransformRole
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkTransformRole");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkCameraRole
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkCameraRole");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkLightRole
class ULiveLinkLightRole : public ULiveLinkTransformRole
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkLightRole");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
