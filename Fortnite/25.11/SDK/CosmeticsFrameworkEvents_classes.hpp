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
// Class CosmeticsFrameworkEvents.CosmeticsEventTarget
class UCosmeticsEventTarget : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CosmeticsEventTarget");
		return Clss;
	}

	struct FCosmeticsEventHandle RegisterOnCosmeticApplicationCompleted_BP(FDelegateProperty_& Delegate, int32 Flags);
};

// 0x0 (0x28 - 0x28)
// Class CosmeticsFrameworkEvents.CosmeticsFinishable
class UCosmeticsFinishable : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CosmeticsFinishable");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CosmeticsFrameworkEvents.CosmeticsMeshTarget
class UCosmeticsMeshTarget : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CosmeticsMeshTarget");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CosmeticsFrameworkEvents.CosmeticsStreaming
class UCosmeticsStreaming : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CosmeticsStreaming");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
