#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x8 - 0x8)
// ScriptStruct ProxyTable.ChooserParameterProxyTableBase
struct FChooserParameterProxyTableBase : public FChooserParameterBase
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ProxyTable.ProxyTableContextProperty
struct FProxyTableContextProperty : public FChooserParameterProxyTableBase
{
public:
	struct FChooserPropertyBinding               Binding;                                           // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ProxyTable.LookupProxy
struct FLookupProxy : public FObjectChooserBase
{
public:
	class UProxyAsset*                           Proxy;                                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      ProxyTable;                                        // 0x10(0x10)(Edit, NoClear, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ProxyTable.LookupProxyWithOverrideTable
struct FLookupProxyWithOverrideTable : public FObjectChooserBase
{
public:
	class UProxyAsset*                           Proxy;                                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProxyTable*                           OverrideProxyTable;                                // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ProxyTable.ProxyStructOutput
struct FProxyStructOutput
{
public:
	struct FChooserStructPropertyBinding         Binding;                                           // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      Value;                                             // 0x18(0x10)(Edit, NoClear, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ProxyTable.ProxyEntry
struct FProxyEntry
{
public:
	class UProxyAsset*                           Proxy;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Key;                                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E6[0x4];                                     // Fixing Size After Last Property 
	struct FInstancedStruct                      ValueStruct;                                       // 0x10(0x10)(Edit, NoClear, NativeAccessSpecifierPublic)
	TArray<struct FProxyStructOutput>            OutputStructData;                                  // 0x20(0x10)(Edit, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ProxyTable.RuntimeProxyValue
struct FRuntimeProxyValue
{
public:
	struct FInstancedStruct                      Value;                                             // 0x0(0x10)(NativeAccessSpecifierPublic)
	TArray<struct FProxyStructOutput>            OutputStructData;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


