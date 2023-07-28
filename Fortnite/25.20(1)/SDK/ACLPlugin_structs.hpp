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

enum class EACLRotationFormat : uint8
{
	ACLRF_Quat_128                 = 0,
	ACLRF_QuatDropW_96             = 1,
	ACLRF_QuatDropW_Variable       = 2,
	ACLRF_MAX                      = 3,
};

enum class EACLVectorFormat : uint8
{
	ACLVF_Vector3_96               = 0,
	ACLVF_Vector3_Variable         = 1,
	ACLVF_Vector3_MAX              = 2,
};

enum class EACLCompressionLevel : uint8
{
	ACLCL_Lowest                   = 0,
	ACLCL_Low                      = 1,
	ACLCL_Medium                   = 2,
	ACLCL_High                     = 3,
	ACLCL_Highest                  = 4,
	ACLCL_MAX                      = 5,
};

enum class EACLVisualFidelity : uint8
{
	Highest                        = 0,
	Medium                         = 1,
	Lowest                         = 2,
	ACLVisualFidelity_MAX          = 3,
};

enum class EACLVisualFidelityChangeResult : uint8
{
	Dispatched                     = 0,
	Completed                      = 1,
	Failed                         = 2,
	ACLVisualFidelityChangeResult_MAX = 3,
};

enum class EACLFrameRemovalThresholdType : uint8
{
	ProportionOfFrames             = 0,
	DistanceError                  = 1,
	ACLFrameRemovalThresholdType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
