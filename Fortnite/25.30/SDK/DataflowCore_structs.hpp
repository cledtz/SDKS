#pragma once

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

// 0x38 (0x38 - 0x0)
// ScriptStruct DataflowCore.DataflowConnection
struct FDataflowConnection
{
public:
	uint8                                        Pad_952[0x38];                                     // Fixing Size Of Struct
};

// 0x8 (0x40 - 0x38)
// ScriptStruct DataflowCore.DataflowInput
struct FDataflowInput : public FDataflowConnection
{
public:
	uint8                                        Pad_953[0x8];                                      // Fixing Size Of Struct
};

// 0x28 (0x60 - 0x38)
// ScriptStruct DataflowCore.DataflowOutput
struct FDataflowOutput : public FDataflowConnection
{
public:
	uint8                                        Pad_954[0x28];                                     // Fixing Size Of Struct
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct DataflowCore.DataflowNode
struct FDataflowNode
{
public:
	uint8                                        Pad_955[0xC8];                                     // Fixing Size After Last Property
	bool                                         bActive;                                           // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_956[0x1F];                                     // Fixing Size Of Struct
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct DataflowCore.DataflowOverrideNode
struct FDataflowOverrideNode : public FDataflowNode
{
public:
	class FName                                  Key;                                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_957[0x4];                                      // Fixing Size After Last Property
	class FString                                Default;                                           // 0xF0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverriden;                                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_959[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DataflowCore.DataflowSelection
struct FDataflowSelection
{
public:
	uint8                                        Pad_95B[0x20];                                     // Fixing Size Of Struct
};

// 0x0 (0x20 - 0x20)
// ScriptStruct DataflowCore.DataflowTransformSelection
struct FDataflowTransformSelection : public FDataflowSelection
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct DataflowCore.DataflowVertexSelection
struct FDataflowVertexSelection : public FDataflowSelection
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct DataflowCore.DataflowFaceSelection
struct FDataflowFaceSelection : public FDataflowSelection
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DataflowCore.NodeColors
struct FNodeColors
{
public:
	struct FLinearColor                          NodeTitleColor;                                    // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NodeBodyTintColor;                                 // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0xE8 - 0xE8)
// ScriptStruct DataflowCore.DataflowTerminalNode
struct FDataflowTerminalNode : public FDataflowNode
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
