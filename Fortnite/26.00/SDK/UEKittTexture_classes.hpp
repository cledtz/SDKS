#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x170 - 0x138)
// Class UEKittTexture.UEKittTexture
class UUEKittTexture : public UTexture
{
public:
	struct FIntPoint                             Dimensions;                                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ClearColor;                                        // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26EC[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUEKittTexture* GetDefaultObj();

};

}


