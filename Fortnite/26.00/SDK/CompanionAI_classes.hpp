#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA8 - 0x90)
// Class CompanionAI.PingComponentBase
class UPingComponentBase : public UAIComponent
{
public:
	uint8                                        Pad_1C9A[0x10];                                    // Fixing Size After Last Property 
	class UFortPawnComponent_AIBotPingCommand*   CachedAIBotPingCommand;                            // 0xA0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPingComponentBase* GetDefaultObj();

	void HandleOnNPCUnconvertedEvent(class UFortPawn* UnconvertedFortPawn, enum class EUnconvertReason UnconvertReason);
	void HandleOnNPCConvertedEvent(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn);
};

}


