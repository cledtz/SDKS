#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB0 - 0x98)
// Class CompanionAI.PingComponentBase
class UPingComponentBase : public UAIComponent
{
public:
	uint8                                        Pad_252C[0x10];                                    // Fixing Size After Last Property
	class UFortPawnComponent_AIBotPingCommand*   CachedAIBotPingCommand;                            // 0xA8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PingComponentBase");
		return Clss;
	}

	void HandleOnNPCUnconvertedEvent(class UFortPawn* UnconvertedFortPawn, enum class EUnconvertReason UnconvertReason);
	void HandleOnNPCConvertedEvent(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
