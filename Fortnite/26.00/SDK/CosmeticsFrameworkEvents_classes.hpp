#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CosmeticsFrameworkEvents.CosmeticsEventRegistrar
class UCosmeticsEventRegistrar : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UCosmeticsEventRegistrar* GetDefaultObj();

	struct FCosmeticsEventHandle RegisterOnCosmeticApplicationCompleted_BP(FDelegateProperty_& Delegate, int32 Flags);
};

// 0x0 (0x28 - 0x28)
// Class CosmeticsFrameworkEvents.CosmeticsFinishable
class UCosmeticsFinishable : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UCosmeticsFinishable* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CosmeticsFrameworkEvents.CosmeticsMeshTarget
class UCosmeticsMeshTarget : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UCosmeticsMeshTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CosmeticsFrameworkEvents.CosmeticsStreaming
class UCosmeticsStreaming : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UCosmeticsStreaming* GetDefaultObj();

};

}


