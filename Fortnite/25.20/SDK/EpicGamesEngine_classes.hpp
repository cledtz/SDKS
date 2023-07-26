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

// 0x370 (0x458 - 0xE8)
// Class EpicGamesEngine.VerseUEInputComponentBase
class UVerseUEInputComponentBase : public UEntityActorPlayerComponent
{
public:
	class UInputComponent*                       InputComponent;                                    // 0xE8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVerseActionMappingArray              ReplicatedActionMappingArray;                      // 0xF0(0x120)(Net, NativeAccessSpecifierPrivate)
	struct FVerseAxisMappingArray                ReplicatedAxisMappingArray;                        // 0x210(0x120)(Net, NativeAccessSpecifierPrivate)
	struct FVerseInputBindingArray               ReplicatedInputBindingArray;                       // 0x330(0x120)(Net, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C7A[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseUEInputComponentBase");
		return Clss;
	}

	void ServerTriggerAxis(class FName& AxisName, float Value);
	void ServerTriggerAction(class FName& ActionName, enum class EInputEvent InputEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
