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

enum class EEntityActorReplicationOverrideType : uint8
{
	AutoReplication                = 0,
	DoNotReplicate                 = 1,
	ReplicateAlways                = 2,
	Static_Spatial                 = 3,
	Dynamic_Spatial                = 4,
	Dormancy_Spatial               = 5,
	EEntityActorReplicationOverrideType_MAX = 6,
};

enum class EEntityActorReplicationRelevancyBucketType : uint8
{
	UseVisualCullDistanceForReplicationRelevancy = 0,
	SmallReplicationRelevancy      = 1,
	MediumReplicationRelevancy     = 2,
	LargeReplicationRelevancy      = 3,
	MaxTargetRangeReplicationRelevancy = 4,
	ImportantReplicationRelevancy  = 5,
	CustomReplicationRelevancy     = 6,
	EEntityActorReplicationRelevancyBucketType_MAX = 7,
};

enum class ESimObjectRepNodeMapping : uint8
{
	NotReplicated                  = 0,
	RelevantAllInsidePlayspace     = 1,
	Spatial_Static                 = 2,
	Spatial_Dynamic                = 3,
	Spatial_Dormancy               = 4,
	ESimObjectRepNodeMapping_MAX   = 5,
};

enum class ECollisionShapeMode : uint8
{
	Mesh                           = 0,
	Box                            = 1,
	Capsule                        = 2,
	Sphere                         = 3,
	ECollisionShapeMode_MAX        = 4,
};

enum class EDefaultAnimationMode : uint8
{
	UseAnimationBlueprint          = 0,
	UseAnimationAsset              = 1,
	UseCustomMode                  = 2,
	EDefaultAnimationMode_MAX      = 3,
};

enum class EDefaultStaticMesh : uint8
{
	Cube                           = 0,
	Sphere                         = 1,
	Cylinder                       = 2,
	Cone                           = 3,
	Plane                          = 4,
	EDefaultStaticMesh_MAX         = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
