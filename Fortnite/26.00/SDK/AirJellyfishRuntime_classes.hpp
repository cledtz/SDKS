#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x560 - 0x538)
// Class AirJellyfishRuntime.FortAirJellyfishAnimInstance
class UFortAirJellyfishAnimInstance : public UFortAnimInstance
{
public:
	float                                        RotatorLerpRate;                                   // 0x538(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityDirectionScalar;                           // 0x53C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RootRotation;                                      // 0x540(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_24D3[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAirJellyfishAnimInstance* GetDefaultObj();

};

}


