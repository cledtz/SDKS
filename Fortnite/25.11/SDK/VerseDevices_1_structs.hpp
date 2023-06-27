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

enum class EDevices_CreativeAnimation_animation_controller_state : uint8
{
	InvalidObject                  = 0,
	AnimationNotSet                = 1,
	Stopped                        = 2,
	Playing                        = 3,
	Paused                         = 4,
	Devices_CreativeAnimation_animation_controller_MAX = 5,
};

enum class EDevices_CreativeAnimation_animation_mode : uint8
{
	OneShot                        = 0,
	PingPong                       = 1,
	Loop                           = 2,
	Devices_CreativeAnimation_animation_MAX = 3,
};

enum class EDevices_CreativeAnimation_await_next_keyframe_result : uint8
{
	KeyframeReached                = 0,
	NotPlaying                     = 1,
	AnimationAborted               = 2,
	Devices_CreativeAnimation_await_next_keyframe_MAX = 3,
};

enum class EDevices_CreativeAnimation_get_animation_controller_result : uint8
{
	Ok                             = 0,
	UnknownError                   = 1,
	InvalidObject                  = 2,
	Devices_CreativeAnimation_get_animation_controller_MAX = 3,
};

enum class EDevices_CreativeAnimation_playstoppause_result : uint8
{
	Ok                             = 0,
	AnimationNotSet                = 1,
	InvalidObject                  = 2,
	Devices_CreativeAnimation_playstoppause_MAX = 3,
};

enum class EDevices_CreativeAnimation_set_animation_result : uint8
{
	Ok                             = 0,
	UnknownError                   = 1,
	NoKeyframes                    = 2,
	LoopingAnimationDoesNotLoop    = 3,
	KeyframeOutOfBounds            = 4,
	InvalidLocation                = 5,
	InvalidTime                    = 6,
	InvalidInterpolationParameters = 7,
	InvalidObject                  = 8,
	Devices_CreativeAnimation_set_animation_MAX = 9,
};

enum class EDevices_move_to_internal_result : uint8
{
	DestinationReached             = 0,
	WillNotReachDestination        = 1,
	UnknownError                   = 2,
	InvalidDestination             = 3,
	InvalidTime                    = 4,
	InvalidObject                  = 5,
	DestinationOutOfBounds         = 6,
	Devices_move_to_internal_MAX   = 7,
};

enum class EDevices_move_to_result : uint8
{
	DestinationReached             = 0,
	WillNotReachDestination        = 1,
	Devices_move_to_MAX            = 2,
};

enum class EDevices_spawn_prop_result : uint8
{
	Ok                             = 0,
	UnknownError                   = 1,
	InvalidSpawnPoint              = 2,
	SpawnPointOutOfBounds          = 3,
	InvalidAsset                   = 4,
	TooManyProps                   = 5,
	Devices_spawn_prop_MAX         = 6,
};

enum class EDevices_teleport_to_result : uint8
{
	Ok                             = 0,
	UnknownError                   = 1,
	InvalidDestination             = 2,
	InvalidObject                  = 3,
	DestinationOutOfBounds         = 4,
	Devices_teleport_to_MAX        = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// VerseStruct VerseDevices.Devices_CreativeAnimation_cubic_bezier_parameters
struct FDevices_CreativeAnimation_cubic_bezier_parameters
{
public:
	double                                       __verse_0xBBCFCA13_X0;                             // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x25CF60DF_Y0;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xDEA876AB_X1;                             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x40A8DC67_Y1;                             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// VerseStruct VerseDevices.Devices_CreativeAnimation_keyframe_delta
struct FDevices_CreativeAnimation_keyframe_delta
{
public:
	struct FSpatialMath_vector3                  __verse_0xC51B5857_DeltaLocation;                  // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8804[0x8];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        __verse_0x0D1E29AE_DeltaRotation;                  // 0x20(0x20)(InstancedReference, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x97B35C4B_DeltaScale;                     // 0x40(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x742B3E02_Time;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0xB7FF3D07_Interpolation;                  // 0x60(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseDevices.Devices_device_ai_interaction_result
struct FDevices_device_ai_interaction_result
{
public:
	FOptionProperty_                             __verse_0xB1B721CE_Source;                         // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x459049A1_Target;                         // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VerseDevices.tuple_L_Kchar_M_Kchar_R
struct FTuple_L_Kchar_M_Kchar_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// VerseStruct VerseDevices.tuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// VerseStruct VerseDevices.tuple_L_Kchar_M_QLevel_Nlog__level_R
struct FTuple_L_Kchar_M_QLevel_Nlog__level_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// VerseStruct VerseDevices.tuple_L_Kchar_Mplaystoppause__result_R
struct FTuple_L_Kchar_Mplaystoppause__result_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// VerseStruct VerseDevices.tuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R
struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R
{
public:
	TArray<struct FDevices_CreativeAnimation_keyframe_delta> __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// VerseStruct VerseDevices.tuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R
struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R
{
public:
	TArray<struct FDevices_CreativeAnimation_keyframe_delta> __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// VerseStruct VerseDevices.tuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R
struct FTuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R
{
public:
	TArray<struct FDevices_CreativeAnimation_keyframe_delta> __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// VerseStruct VerseDevices.tuple_L_Qanimation__controller_Mget__animation__controller__result_R
struct FTuple_L_Qanimation__controller_Mget__animation__controller__result_R
{
public:
	FOptionProperty_                             __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class EDevices_CreativeAnimation_get_animation_controller_result __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// VerseStruct VerseDevices.tuple_L_Qcreative__prop_Mspawn__prop__result_R
struct FTuple_L_Qcreative__prop_Mspawn__prop__result_R
{
public:
	FOptionProperty_                             __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class EDevices_spawn_prop_result        __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// VerseStruct VerseDevices.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct VerseDevices.tuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class UObject*                               __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// VerseStruct VerseDevices.tuple_Lcreative__prop__asset_Mtransform_R
struct FTuple_Lcreative__prop__asset_Mtransform_R
{
public:
	class UDevices_creative_prop_asset*          __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_8805[0x8];                                     // Fixing Size After Last Property..
	struct FSpatialMath_transform                __verse_0x7D844C3C_Elem1;                          // 0x10(0x60)(InstancedReference, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// VerseStruct VerseDevices.tuple_Lcreative__prop__asset_Mvector3_Mrotation_R
struct FTuple_Lcreative__prop__asset_Mvector3_Mrotation_R
{
public:
	class UDevices_creative_prop_asset*          __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FVerseRotation                        __verse_0x932BF92E_Elem2;                          // 0x20(0x20)(InstancedReference, NoDestructor)
};

// 0xA (0xA - 0x0)
// VerseStruct VerseDevices.tuple_Lcreative__prop_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class UDevices_creative_prop*                __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseDevices.tuple_Lmaterial_Mint_R
struct FTuple_Lmaterial_Mint_R
{
public:
	class UAssets_material*                      __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// VerseStruct VerseDevices.tuple_Lrotation_Mrotation_R
struct FTuple_Lrotation_Mrotation_R
{
public:
	struct FVerseRotation                        __verse_0x18E3F084_Elem0;                          // 0x0(0x20)(InstancedReference, NoDestructor)
	struct FVerseRotation                        __verse_0x7D844C3C_Elem1;                          // 0x20(0x20)(InstancedReference, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// VerseStruct VerseDevices.tuple_Ltransform_Mfloat_R
struct FTuple_Ltransform_Mfloat_R
{
public:
	struct FSpatialMath_transform                __verse_0x18E3F084_Elem0;                          // 0x0(0x60)(InstancedReference, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// VerseStruct VerseDevices.tuple_Lvector3_Mrotation_Mfloat_R
struct FTuple_Lvector3_Mrotation_Mfloat_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8806[0x8];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        __verse_0x7D844C3C_Elem1;                          // 0x20(0x20)(InstancedReference, NoDestructor)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// VerseStruct VerseDevices.tuple_Lvector3_Mrotation_R
struct FTuple_Lvector3_Mrotation_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8807[0x8];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        __verse_0x7D844C3C_Elem1;                          // 0x20(0x20)(InstancedReference, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// VerseStruct VerseDevices.tuple_Lvector3_Mvector3_R
struct FTuple_Lvector3_Mvector3_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
