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

enum class EPictureInPictureAuthState : uint8
{
	Unknown                        = 0,
	NOT_AUTHORIZED                 = 1,
	AUTHORIZED                     = 2,
	PictureInPictureAuthState_MAX  = 3,
};

enum class EPictureInPictureAuthType : uint8
{
	AUTH_NONE                      = 0,
	AUTH_USER_PASS                 = 1,
	AUTH_QR_CODE                   = 2,
	AUTH_MAX                       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x130 - 0x0)
// ScriptStruct PictureInPictureCore.PiPSuspendInfo
struct FPiPSuspendInfo
{
public:
	struct FPiPPartnerSource                     SourceSnapshot;                                    // 0x0(0x128)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bEnabledState;                                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82BE[0x7];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
