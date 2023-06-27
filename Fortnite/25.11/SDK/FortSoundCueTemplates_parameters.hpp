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

// 0x10 (0x10 - 0x0)
// Function FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings.GetSettingsForTemplateType
struct UFortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType_Params
{
public:
	TSubclassOf<class UFortSoundCueTemplateBase> TemplateType;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSoundCueTemplateDefaults*         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortSoundCueTemplates.FortSoundCueTemplateSettings.GetDefaultSettingsForTemplateType
struct UFortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType_Params
{
public:
	TSubclassOf<class UFortSoundCueTemplateBase> TemplateType;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSoundCueTemplateDefaults*         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
