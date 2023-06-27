#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

// 0x8 (0x10 - 0x8)
// ScriptStruct ProxyTable.LookupProxy
struct FLookupProxy : public FObjectChooserBase
{
public:
	class UProxyAsset*                           Proxy;                                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ProxyTable.ProxyEntry
struct FProxyEntry
{
public:
	class UProxyAsset*                           Proxy;                                             // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Key;                                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E8[0x4];                                     // Fixing Size After Last Property..
	struct FInstancedStruct                      ValueStruct;                                       // 0x10(0x10)(Edit, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
