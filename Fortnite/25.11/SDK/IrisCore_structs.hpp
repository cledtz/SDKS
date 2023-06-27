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

enum class EDataStreamSendStatus : uint8
{
	Send                           = 0,
	Pause                          = 1,
	EDataStreamSendStatus_MAX      = 2,
};

enum class ENetObjectCountLimiterMode : uint8
{
	RoundRobin                     = 0,
	Fill                           = 1,
	ENetObjectCountLimiterMode_MAX = 2,
};

enum class ENetFilterType : uint8
{
	PrePoll_Raw                    = 0,
	PostPoll_FragmentBased         = 1,
	ENetFilterType_MAX             = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct IrisCore.DataStreamDefinition
struct FDataStreamDefinition
{
public:
	class FName                                  DataStreamName;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClassName;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   Class;                                             // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataStreamSendStatus             DefaultSendStatus;                                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCreate;                                       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179C[0x6];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IrisCore.NetSerializerConfig
struct FNetSerializerConfig
{
public:
	uint8                                        Pad_179D[0x10];                                    // Fixing Size Of Struct..
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.DateTimeNetSerializerConfig
struct FDateTimeNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.EnumInt8NetSerializerConfig
struct FEnumInt8NetSerializerConfig : public FNetSerializerConfig
{
public:
	int8                                         LowerBound;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         UpperBound;                                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179E[0xD];                                     // Fixing Size Of Struct..
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.EnumInt16NetSerializerConfig
struct FEnumInt16NetSerializerConfig : public FNetSerializerConfig
{
public:
	int16                                        LowerBound;                                        // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        UpperBound;                                        // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179F[0xB];                                     // Fixing Size Of Struct..
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.EnumInt32NetSerializerConfig
struct FEnumInt32NetSerializerConfig : public FNetSerializerConfig
{
public:
	int32                                        LowerBound;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A0[0xF];                                     // Fixing Size Of Struct..
};

// 0x20 (0x30 - 0x10)
// ScriptStruct IrisCore.EnumInt64NetSerializerConfig
struct FEnumInt64NetSerializerConfig : public FNetSerializerConfig
{
public:
	int64                                        LowerBound;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        UpperBound;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A1[0xF];                                     // Fixing Size Of Struct..
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.EnumUint8NetSerializerConfig
struct FEnumUint8NetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        LowerBound;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UpperBound;                                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A2[0xD];                                     // Fixing Size Of Struct..
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.EnumUint16NetSerializerConfig
struct FEnumUint16NetSerializerConfig : public FNetSerializerConfig
{
public:
	uint16                                       LowerBound;                                        // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       UpperBound;                                        // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A3[0xB];                                     // Fixing Size Of Struct..
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.EnumUint32NetSerializerConfig
struct FEnumUint32NetSerializerConfig : public FNetSerializerConfig
{
public:
	uint32                                       LowerBound;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UpperBound;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A4[0xF];                                     // Fixing Size Of Struct..
};

// 0x20 (0x30 - 0x10)
// ScriptStruct IrisCore.EnumUint64NetSerializerConfig
struct FEnumUint64NetSerializerConfig : public FNetSerializerConfig
{
public:
	uint64                                       LowerBound;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       UpperBound;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A5[0xF];                                     // Fixing Size Of Struct..
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.FloatNetSerializerConfig
struct FFloatNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.DoubleNetSerializerConfig
struct FDoubleNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.GuidNetSerializerConfig
struct FGuidNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.BitfieldNetSerializerConfig
struct FBitfieldNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        BitMask;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A6[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x40 - 0x10)
// ScriptStruct IrisCore.ArrayPropertyNetSerializerConfig
struct FArrayPropertyNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint16                                       MaxElementCount;                                   // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ElementCountBitCount;                              // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A7[0x4];                                     // Fixing Size After Last Property..
	FFieldPathProperty_                          Property;                                          // 0x18(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A8[0x8];                                     // Fixing Size Of Struct..
};

// 0x28 (0x38 - 0x10)
// ScriptStruct IrisCore.LastResortPropertyNetSerializerConfig
struct FLastResortPropertyNetSerializerConfig : public FNetSerializerConfig
{
public:
	FFieldPathProperty_                          Property;                                          // 0x10(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxAllowedObjectReferences;                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A9[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.NetRoleNetSerializerConfig
struct FNetRoleNetSerializerConfig : public FNetSerializerConfig
{
public:
	int32                                        RelativeInternalOffsetToOtherRole;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RelativeExternalOffsetToOtherRole;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LowerBound;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UpperBound;                                        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AutonomousProxyValue;                              // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SimulatedProxyValue;                               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AA[0xB];                                     // Fixing Size Of Struct..
};

// 0x20 (0x30 - 0x10)
// ScriptStruct IrisCore.FieldPathNetSerializerConfig
struct FFieldPathNetSerializerConfig : public FNetSerializerConfig
{
public:
	FFieldPathProperty_                          Property;                                          // 0x10(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IrisCore.FieldPathNetSerializerSerializationHelper
struct FFieldPathNetSerializerSerializationHelper
{
public:
	TWeakObjectPtr<class UStruct>                Owner;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          PropertyPath;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.IntNetSerializerConfig
struct FIntNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        BitCount;                                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AB[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.Int8RangeNetSerializerConfig
struct FInt8RangeNetSerializerConfig : public FNetSerializerConfig
{
public:
	int8                                         LowerBound;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         UpperBound;                                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AC[0x5];                                     // Fixing Size Of Struct..
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.Int16RangeNetSerializerConfig
struct FInt16RangeNetSerializerConfig : public FNetSerializerConfig
{
public:
	int16                                        LowerBound;                                        // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        UpperBound;                                        // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AD[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.Int32RangeNetSerializerConfig
struct FInt32RangeNetSerializerConfig : public FNetSerializerConfig
{
public:
	int32                                        LowerBound;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AE[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.Int64RangeNetSerializerConfig
struct FInt64RangeNetSerializerConfig : public FNetSerializerConfig
{
public:
	int64                                        LowerBound;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        UpperBound;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AF[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x120 - 0x108)
// ScriptStruct IrisCore.IrisFastArraySerializer
struct FIrisFastArraySerializer : public FFastArraySerializer
{
public:
	uint8                                        Pad_17B0[0x4];                                     // Fixing Size After Last Property..
	uint32                                       ChangeMaskStorage[0x4];                            // 0x10C(0x10)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17B1[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// ScriptStruct IrisCore.NetBlobHandlerDefinition
struct FNetBlobHandlerDefinition
{
public:
	class FName                                  ClassName;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct IrisCore.NetObjectFilterDefinition
struct FNetObjectFilterDefinition
{
public:
	class FName                                  FilterName;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClassName;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ConfigClassName;                                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IrisCore.NetObjectPrioritizerDefinition
struct FNetObjectPrioritizerDefinition
{
public:
	class FName                                  PrioritizerName;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClassName;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   Class;                                             // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ConfigClassName;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B2[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UObject>                   ConfigClass;                                       // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.BoolNetSerializerConfig
struct FBoolNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.StructNetSerializerConfig
struct FStructNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_17B3[0x8];                                     // Fixing Size Of Struct..
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.NopNetSerializerConfig
struct FNopNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.ObjectNetSerializerConfig
struct FObjectNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.WeakObjectNetSerializerConfig
struct FWeakObjectNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.ScriptInterfaceNetSerializerConfig
struct FScriptInterfaceNetSerializerConfig : public FNetSerializerConfig
{
public:
	TSubclassOf<class UObject>                   InterfaceClass;                                    // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct IrisCore.ObjectReplicationBridgePollConfig
struct FObjectReplicationBridgePollConfig
{
public:
	class FName                                  ClassName;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PollFramePeriod;                                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeSubclasses;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B4[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IrisCore.ObjectReplicationBridgeFilterConfig
struct FObjectReplicationBridgeFilterConfig
{
public:
	class FName                                  ClassName;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DynamicFilterName;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct IrisCore.ObjectReplicationBridgePrioritizerConfig
struct FObjectReplicationBridgePrioritizerConfig
{
public:
	class FName                                  ClassName;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PrioritizerName;                                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceEnableOnAllInstances;                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B5[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IrisCore.ObjectReplicationBridgeDeltaCompressionConfig
struct FObjectReplicationBridgeDeltaCompressionConfig
{
public:
	class FName                                  ClassName;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDeltaCompression;                           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B6[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.PackedInt64NetSerializerConfig
struct FPackedInt64NetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.PackedUint64NetSerializerConfig
struct FPackedUint64NetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.PackedInt32NetSerializerConfig
struct FPackedInt32NetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.PackedUint32NetSerializerConfig
struct FPackedUint32NetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.VectorNetQuantizeNetSerializerConfig
struct FVectorNetQuantizeNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.VectorNetQuantize10NetSerializerConfig
struct FVectorNetQuantize10NetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.VectorNetQuantize100NetSerializerConfig
struct FVectorNetQuantize100NetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.VectorNetQuantizeNormalNetSerializerConfig
struct FVectorNetQuantizeNormalNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.PolymorphicStructNetSerializerConfig
struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_17B7[0x18];                                    // Fixing Size Of Struct..
};

// 0x0 (0x28 - 0x28)
// ScriptStruct IrisCore.PolymorphicArrayStructNetSerializerConfig
struct FPolymorphicArrayStructNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.UnitQuatNetSerializerConfig
struct FUnitQuatNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.UnitQuat4fNetSerializerConfig
struct FUnitQuat4fNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.UnitQuat4dNetSerializerConfig
struct FUnitQuat4dNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.RotatorNetSerializerConfig
struct FRotatorNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.RotatorAsByteNetSerializerConfig
struct FRotatorAsByteNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.RotatorAsShortNetSerializerConfig
struct FRotatorAsShortNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.SoftObjectNetSerializerConfig
struct FSoftObjectNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.SoftObjectPathNetSerializerConfig
struct FSoftObjectPathNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.SoftClassPathNetSerializerConfig
struct FSoftClassPathNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.NameNetSerializerConfig
struct FNameNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.StringNetSerializerConfig
struct FStringNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.UintNetSerializerConfig
struct FUintNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        BitCount;                                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B8[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.Uint8RangeNetSerializerConfig
struct FUint8RangeNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        LowerBound;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UpperBound;                                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B9[0x5];                                     // Fixing Size Of Struct..
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.Uint16RangeNetSerializerConfig
struct FUint16RangeNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint16                                       LowerBound;                                        // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       UpperBound;                                        // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BA[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.Uint32RangeNetSerializerConfig
struct FUint32RangeNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint32                                       LowerBound;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UpperBound;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BB[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.Uint64RangeNetSerializerConfig
struct FUint64RangeNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint64                                       LowerBound;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       UpperBound;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BC[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.VectorNetSerializerConfig
struct FVectorNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.Vector3fNetSerializerConfig
struct FVector3fNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.Vector3dNetSerializerConfig
struct FVector3dNetSerializerConfig : public FNetSerializerConfig
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IrisCore.SupportsStructNetSerializerConfig
struct FSupportsStructNetSerializerConfig
{
public:
	class FName                                  StructName;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseStructNetSerializer;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BD[0x3];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
