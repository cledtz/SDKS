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

// 0x8 (0x290 - 0x288)
// Class DataflowEnginePlugin.DataflowActor
class ADataflowActor : public AActor
{
public:
	class UDataflowComponent*                    DataflowComponent;                                 // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataflowActor");
		return Clss;
	}

};

// 0x148 (0x6B0 - 0x568)
// Class DataflowEnginePlugin.DataflowComponent
class UDataflowComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_42F5[0x148];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataflowComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
