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
// Class CosmeticsFrameworkModifiers.CosmeticModifierInterface
class UCosmeticModifierInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CosmeticModifierInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CosmeticsFrameworkModifiers.CosmeticModifierOwnerInterface
class UCosmeticModifierOwnerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CosmeticModifierOwnerInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CosmeticsFrameworkModifiers.CosmeticModifierProviderInterface
class UCosmeticModifierProviderInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CosmeticModifierProviderInterface");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
