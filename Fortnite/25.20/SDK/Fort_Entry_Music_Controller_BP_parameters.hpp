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

// 0x14 (0x14 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
struct AFort_Entry_Music_Controller_BP_C_Change_Music_Params
{
public:
	class USoundBase*                            New_Music;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       StartTime;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_Tag;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks
struct AFort_Entry_Music_Controller_BP_C_ListenToMusicPacks_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged
struct AFort_Entry_Music_Controller_BP_C_OnMusicPackChanged_Params
{
public:
	class UAthenaMusicPackItemDefinition*        NewMusicPack;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        StartTimeOffset;                                   // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override
struct AFort_Entry_Music_Controller_BP_C_Lobby_Music_Override_Params
{
public:
	bool                                         Lobby_Music_Activate;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD5[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            New_Music;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.SetCanRetriggerNextMusicPack
struct AFort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack_Params
{
public:
	bool                                         bCanRetriggerNextMusicPack;                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.PlayEquippedMusicPack
struct AFort_Entry_Music_Controller_BP_C_PlayEquippedMusicPack_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.StartMusic
struct AFort_Entry_Music_Controller_BP_C_StartMusic_Params
{
public:
};

// 0x140 (0x140 - 0x0)
// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
struct AFort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD6[0x4];                                     // Fixing Size After Last Property..
	class USoundBase*                            K2Node_CustomEvent_New_Music_1;                    // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_StartTime;                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_Event_Tag;                      // 0x18(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD7[0x4];                                     // Fixing Size After Last Property..
	class UAthenaMusicPackItemDefinition*        K2Node_CustomEvent_NewMusicPack;                   // 0x20(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_StartTimeOffset;                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD8[0x2];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_DynamicCast_AsSound_Base;                   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Lobby_Music_Activate;           // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CD9[0x6];                                     // Fixing Size After Last Property..
	class USoundBase*                            K2Node_CustomEvent_New_Music;                      // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bCanRetriggerNextMusicPack;     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDA[0x7];                                     // Fixing Size After Last Property..
	class UFortAudioAnalysisSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue;            // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMusicEventSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMusicEventSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Temp_struct_Variable;                              // 0x70(0x20)()
	struct FGameplayTagContainer                 Temp_struct_Variable_1;                            // 0x90(0x20)()
	class UFortMusicContext*                     CallFunc_GetContext_ReturnValue;                   // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAthenaMusicPackItemDefinition*        CallFunc_GetEquippedMusicPack_ReturnValue;         // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDB[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          Temp_struct_Variable_2;                            // 0xD0(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDC[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 K2Node_Select_Default;                             // 0xD8(0x20)()
	bool                                         Temp_bool_Variable_1;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDD[0x7];                                     // Fixing Size After Last Property..
	class UFortMusicContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Select_Default_1;                           // 0x108(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDefaultMusicEquipped_ReturnValue;       // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDE[0x3];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_AddEvent_ReturnValue;                     // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortMusicContext*                     CallFunc_GetContext_ReturnValue_2;                 // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAthenaMusicPackItemDefinition*        CallFunc_GetEquippedMusicPack_ReturnValue_1;       // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDF[0x7];                                     // Fixing Size After Last Property..
	class UFortMusicContext*                     CallFunc_GetContext_ReturnValue_3;                 // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Change_Music_StartTime_ImplicitCast;      // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
