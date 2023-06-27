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

enum class ESetParamResult : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	ESetParamResult_MAX            = 2,
};

enum class EMetasoundFrontendVertexAccessType : uint8
{
	Reference                      = 0,
	Value                          = 1,
	Unset                          = 2,
	EMetasoundFrontendVertexAccessType_MAX = 3,
};

enum class EMetasoundFrontendClassType : uint8
{
	External                       = 0,
	Graph                          = 1,
	Input                          = 2,
	Output                         = 3,
	Literal                        = 4,
	Variable                       = 5,
	VariableDeferredAccessor       = 6,
	VariableAccessor               = 7,
	VariableMutator                = 8,
	Template                       = 9,
	Invalid                        = 10,
	EMetasoundFrontendClassType_MAX = 11,
};

enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2,
};

enum class EMetasoundFrontendLiteralType : uint8
{
	None                           = 0,
	Boolean                        = 1,
	Integer                        = 2,
	Float                          = 3,
	String                         = 4,
	UObject                        = 5,
	NoneArray                      = 6,
	BooleanArray                   = 7,
	IntegerArray                   = 8,
	FloatArray                     = 9,
	StringArray                    = 10,
	UObjectArray                   = 11,
	Invalid                        = 12,
	EMetasoundFrontendLiteralType_MAX = 13,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVersionNumber
struct FMetasoundFrontendVersionNumber
{
public:
	int32                                        Major;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minor;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVersion
struct FMetasoundFrontendVersion
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetasoundFrontendVersionNumber       Number;                                            // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertex
struct FMetasoundFrontendVertex
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TypeName;                                          // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 VertexID;                                          // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexHandle
struct FMetasoundFrontendVertexHandle
{
public:
	struct FGuid                                 NodeId;                                            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 VertexID;                                          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendLiteral
struct FMetasoundFrontendLiteral
{
public:
	enum class EMetasoundFrontendLiteralType     Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1629[0x3];                                     // Fixing Size After Last Property..
	int32                                        AsNumDefault;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<bool>                                 AsBoolean;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int32>                                AsInteger;                                         // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                AsFloat;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        AsString;                                          // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       AsUObject;                                         // 0x48(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexLiteral
struct FMetasoundFrontendVertexLiteral
{
public:
	struct FGuid                                 VertexID;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetasoundFrontendLiteral             Value;                                             // 0x10(0x58)(Edit, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVariable
struct FMetasoundFrontendVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TypeName;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetasoundFrontendLiteral             Literal;                                           // 0x8(0x58)(NativeAccessSpecifierPublic)
	struct FGuid                                 ID;                                                // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 VariableNodeID;                                    // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MutatorNodeID;                                     // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         AccessorNodeIDs;                                   // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         DeferredAccessorNodeIDs;                           // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeInterface
struct FMetasoundFrontendNodeInterface
{
public:
	TArray<struct FMetasoundFrontendVertex>      Inputs;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMetasoundFrontendVertex>      Outputs;                                           // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMetasoundFrontendVertex>      Environment;                                       // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
struct FMetasoundFrontendNodeStyleDisplay
{
public:
	uint8                                        Pad_162A[0x1];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyle
struct FMetasoundFrontendNodeStyle
{
public:
	uint8                                        Pad_162B[0x1];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNode
struct FMetasoundFrontendNode
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 ClassID;                                           // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162C[0x4];                                     // Fixing Size After Last Property..
	struct FMetasoundFrontendNodeInterface       Interface;                                         // 0x28(0x30)(NativeAccessSpecifierPublic)
	TArray<struct FMetasoundFrontendVertexLiteral> InputLiterals;                                     // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdge
struct FMetasoundFrontendEdge
{
public:
	struct FGuid                                 FromNodeID;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 FromVertexID;                                      // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ToNodeID;                                          // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ToVertexID;                                        // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
struct FMetasoundFrontendEdgeStyleLiteralColorPair
{
public:
	struct FMetasoundFrontendLiteral             Value;                                             // 0x0(0x58)(NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyle
struct FMetasoundFrontendEdgeStyle
{
public:
	struct FGuid                                 NodeId;                                            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OutputName;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162D[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;                                 // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphStyle
struct FMetasoundFrontendGraphStyle
{
public:
	bool                                         bIsGraphEditable;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162E[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FMetasoundFrontendEdgeStyle>   EdgeStyles;                                        // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraph
struct FMetasoundFrontendGraph
{
public:
	TArray<struct FMetasoundFrontendNode>        Nodes;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMetasoundFrontendEdge>        Edges;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMetasoundFrontendVariable>    Variables;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexMetadata
struct FMetasoundFrontendVertexMetadata
{
public:
	uint8                                        Pad_162F[0x1];                                     // Fixing Size Of Struct..
};

// 0x14 (0x2C - 0x18)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVertex
struct FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex
{
public:
	struct FGuid                                 NodeId;                                            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetasoundFrontendVertexAccessType AccessType;                                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyleDisplay
struct FMetasoundFrontendClassStyleDisplay
{
public:
	uint8                                        Pad_1630[0x1];                                     // Fixing Size Of Struct..
};

// 0x5C (0x88 - 0x2C)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInput
struct FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex
{
public:
	uint8                                        Pad_1631[0x4];                                     // Fixing Size After Last Property..
	struct FMetasoundFrontendLiteral             DefaultLiteral;                                    // 0x30(0x58)(Edit, NativeAccessSpecifierPublic)
};

// 0x5C (0x88 - 0x2C)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVariable
struct FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex
{
public:
	uint8                                        Pad_1632[0x4];                                     // Fixing Size After Last Property..
	struct FMetasoundFrontendLiteral             DefaultLiteral;                                    // 0x30(0x58)(Edit, NativeAccessSpecifierPublic)
};

// 0x0 (0x2C - 0x2C)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassOutput
struct FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
struct FMetasoundFrontendClassEnvironmentVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TypeName;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRequired;                                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1633[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceStyle
struct FMetasoundFrontendInterfaceStyle
{
public:
	uint8                                        Pad_1634[0x1];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInterface
struct FMetasoundFrontendClassInterface
{
public:
	TArray<struct FMetasoundFrontendClassInput>  Inputs;                                            // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FMetasoundFrontendClassOutput> Outputs;                                           // 0x10(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FMetasoundFrontendClassEnvironmentVariable> Environment;                                       // 0x20(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FGuid                                 ChangeID;                                          // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceVertexBinding
struct FMetasoundFrontendInterfaceVertexBinding
{
public:
	class FName                                  OutputName;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InputName;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceBinding
struct FMetasoundFrontendInterfaceBinding
{
public:
	struct FMetasoundFrontendVersion             OutputInterfaceVersion;                            // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetasoundFrontendVersion             InputInterfaceVersion;                             // 0xC(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BindingPriority;                                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1635[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FMetasoundFrontendInterfaceVertexBinding> VertexBindings;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceUClassOptions
struct FMetasoundFrontendInterfaceUClassOptions
{
public:
	struct FTopLevelAssetPath                    ClassPath;                                         // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsModifiable;                                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDefault;                                        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1636[0x2];                                     // Fixing Size Of Struct..
};

// 0x20 (0x60 - 0x40)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterface
struct FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface
{
public:
	struct FMetasoundFrontendVersion             Version;                                           // 0x40(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1637[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FMetasoundFrontendInterfaceUClassOptions> UClassOptions;                                     // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassName
struct FMetasoundFrontendClassName
{
public:
	class FName                                  Namespace;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Variant;                                           // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassMetadata
struct FMetasoundFrontendClassMetadata
{
public:
	struct FMetasoundFrontendClassName           ClassName;                                         // 0x0(0xC)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate)
	struct FMetasoundFrontendVersionNumber       Version;                                           // 0xC(0x8)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMetasoundFrontendClassType       Type;                                              // 0x14(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsDeprecated;                                     // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoUpdateManagesInterface;                       // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1638[0x1];                                     // Fixing Size After Last Property..
	struct FGuid                                 ChangeID;                                          // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyle
struct FMetasoundFrontendClassStyle
{
public:
	uint8                                        Pad_1639[0x1];                                     // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClass
struct FMetasoundFrontendClass
{
public:
	uint8                                        Pad_163A[0x8];                                     // Fixing Size After Last Property..
	struct FGuid                                 ID;                                                // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMetasoundFrontendClassMetadata       MetaData;                                          // 0x18(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMetasoundFrontendClassInterface      Interface;                                         // 0x40(0x40)(Edit, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
struct FMetasoundFrontendGraphClassPresetOptions
{
public:
	bool                                         bIsPreset;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163B[0x7];                                     // Fixing Size After Last Property..
	TSet<class FName>                            InputsInheritingDefault;                           // 0x8(0x50)(NativeAccessSpecifierPublic)
};

// 0x88 (0x108 - 0x80)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClass
struct FMetasoundFrontendGraphClass : public FMetasoundFrontendClass
{
public:
	struct FMetasoundFrontendGraph               Graph;                                             // 0x80(0x30)(NativeAccessSpecifierPublic)
	struct FMetasoundFrontendGraphClassPresetOptions PresetOptions;                                     // 0xB0(0x58)(NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendDocumentMetadata
struct FMetasoundFrontendDocumentMetadata
{
public:
	struct FMetasoundFrontendVersion             Version;                                           // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendDocument
struct FMetasoundFrontendDocument
{
public:
	uint8                                        Pad_163C[0x10];                                    // Fixing Size After Last Property..
	struct FMetasoundFrontendDocumentMetadata    MetaData;                                          // 0x10(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_163D[0x4];                                     // Fixing Size After Last Property..
	TSet<struct FMetasoundFrontendVersion>       Interfaces;                                        // 0x20(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FMetasoundFrontendGraphClass          RootGraph;                                         // 0x70(0x108)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FMetasoundFrontendGraphClass>  Subgraphs;                                         // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMetasoundFrontendClass>       Dependencies;                                      // 0x188(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMetasoundFrontendVersion             ArchetypeVersion;                                  // 0x198(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_163E[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FMetasoundFrontendVersion>     InterfaceVersions;                                 // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundFrontend.MetaSoundFrontendDocumentBuilder
struct FMetaSoundFrontendDocumentBuilder
{
public:
	FInterfaceProperty_                          DocumentInterface;                                 // 0x0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_163F[0x10];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
