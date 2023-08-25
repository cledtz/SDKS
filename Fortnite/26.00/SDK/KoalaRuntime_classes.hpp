#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_26F6[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortContextualTutorial_GameplayEventKoala* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class KoalaRuntime.KoalaAnalytics
class UKoalaAnalytics : public UObject
{
public:

	static class UClass* StaticClass();
	static class UKoalaAnalytics* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class KoalaRuntime.KoalaGlobals
class UKoalaGlobals : public UObject
{
public:

	static class UClass* StaticClass();
	static class UKoalaGlobals* GetDefaultObj();

};

}


