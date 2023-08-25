#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x370 (0x440 - 0xD0)
// Class EpicGamesEngine.VerseUEInputComponentBase
class UVerseUEInputComponentBase : public UEntityActorPlayerComponent
{
public:
	class UInputComponent*                       InputComponent;                                    // 0xD0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVerseActionMappingArray              ReplicatedActionMappingArray;                      // 0xD8(0x120)(Net, NativeAccessSpecifierPrivate)
	struct FVerseAxisMappingArray                ReplicatedAxisMappingArray;                        // 0x1F8(0x120)(Net, NativeAccessSpecifierPrivate)
	struct FVerseInputBindingArray               ReplicatedInputBindingArray;                       // 0x318(0x120)(Net, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C89[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseUEInputComponentBase* GetDefaultObj();

	void ServerTriggerAxis(class FName& AxisName, float Value);
	void ServerTriggerAction(class FName& ActionName, enum class EInputEvent InputEvent);
};

}


