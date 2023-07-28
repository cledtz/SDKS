#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function GLTFExporter.GLTFExportOptions.ResetToDefault
struct UGLTFExportOptions_ResetToDefault_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function GLTFExporter.GLTFExporter.ExportToGLTF
struct UGLTFExporter_ExportToGLTF_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilePath;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGLTFExportOptions*                    Options;                                           // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class UActor*>                          SelectedActors;                                    // 0x20(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGLTFExportMessages                   OutMessages;                                       // 0x70(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_875D[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function GLTFExporter.GLTFProxyOptions.ResetToDefault
struct UGLTFProxyOptions_ResetToDefault_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
