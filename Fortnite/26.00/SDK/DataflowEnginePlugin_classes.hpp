#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x298 - 0x290)
// Class DataflowEnginePlugin.DataflowActor
class UDataflowActor : public UActor
{
public:
	class UDataflowComponent*                    DataflowComponent;                                 // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDataflowActor* GetDefaultObj();

};

// 0x148 (0x6B0 - 0x568)
// Class DataflowEnginePlugin.DataflowComponent
class UDataflowComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_503D[0x148];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDataflowComponent* GetDefaultObj();

};

}


