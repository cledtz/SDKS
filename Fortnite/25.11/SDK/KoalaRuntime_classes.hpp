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

// 0x8 (0x178 - 0x170)
// Class KoalaRuntime.FortContextualTutorial_GameplayEventKoala
class UFortContextualTutorial_GameplayEventKoala : public UFortContextualTutorial_GameplayEvent
{
public:
	uint8                                        Pad_8263[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortContextualTutorial_GameplayEventKoala");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class KoalaRuntime.KoalaAnalytics
class UKoalaAnalytics : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KoalaAnalytics");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class KoalaRuntime.KoalaGlobals
class UKoalaGlobals : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KoalaGlobals");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
