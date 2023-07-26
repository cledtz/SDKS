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

// 0x50 (0x78 - 0x28)
// Class LiveLinkComponents.LiveLinkComponentSettings
class ULiveLinkComponentSettings : public UObject
{
public:
	TMap<TSubclassOf<class ULiveLinkRole>, TSubclassOf<class ULiveLinkControllerBase>> DefaultControllerForRole;                          // 0x28(0x50)(Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkComponentSettings");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class LiveLinkComponents.LiveLinkControllerBase
class ULiveLinkControllerBase : public UObject
{
public:
	struct FComponentReference                   ComponentPicker;                                   // 0x28(0x28)(Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_867C[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkControllerBase");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class LiveLinkComponents.LiveLinkLightController
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkLightController");
		return Clss;
	}

};

// 0x8 (0x70 - 0x68)
// Class LiveLinkComponents.LiveLinkTransformController
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	struct FLiveLinkTransformControllerData      TransformData;                                     // 0x68(0x6)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_867D[0x2];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkTransformController");
		return Clss;
	}

};

// 0xA8 (0x148 - 0xA0)
// Class LiveLinkComponents.LiveLinkComponentController
class ULiveLinkComponentController : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation        SubjectRepresentation;                             // 0xA0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class ULiveLinkRole>, class ULiveLinkControllerBase*> ControllerMap;                                     // 0xB0(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, NoClear, Interp, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bUpdateInEditor;                                   // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_867E[0x7];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerMapUpdatedDelegate;                    // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bDisableEvaluateLiveLinkWhenSpawnable;             // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEvaluateLiveLink;                                 // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateInPreviewEditor;                            // 0x12A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_867F[0x1D];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkComponentController");
		return Clss;
	}

	void SetSubjectRepresentation(const struct FLiveLinkSubjectRepresentation& InSubjectRepresentation);
	struct FLiveLinkSubjectRepresentation GetSubjectRepresentation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
