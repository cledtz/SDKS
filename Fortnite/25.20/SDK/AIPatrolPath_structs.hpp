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

enum class EAIPatrolPathVersion : uint8
{
	InitialVersion                 = 0,
	TemplateFromQuickBarVersion    = 1,
	PatrolPointMovedToUserSettingsVersion = 2,
	VersionPlusOne                 = 3,
	LatestVersion                  = 2,
	EAIPatrolPathVersion_MAX       = 4,
};

enum class ESegmentPathStatus : uint8
{
	INVALID                        = 0,
	CALCULATING                    = 1,
	RECALCULATING_PENDING          = 2,
	PATH_FAILED                    = 3,
	PATH_SUCCESS                   = 4,
	SegmentPathStatus_MAX          = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x108 - 0x0)
// ScriptStruct AIPatrolPath.PatrolPathSegmentDetails
struct FPatrolPathSegmentDetails
{
public:
	uint8                                        Pad_40DD[0xA8];                                    // Fixing Size After Last Property..
	class UNavigationPath*                       Path;                                              // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIPatrolPathComponent*                Start;                                             // 0xB0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIPatrolPathComponent*                End;                                               // 0xB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40DE[0x48];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
