// Class Engine.PlayerState
class UPlayerState : public UInfo
{
public:
	float                                        Score;                                             // 0x290(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerId;                                          // 0x294(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CompressedPing;                                    // 0x298(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_526A[0x1];                                     // Fixing Size After Last Property 
	uint8                                        bShouldUpdateReplicatedPing : 1;                   // Mask: 0x1, PropSize: 0x10x29A(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsSpectator : 1;                                  // Mask: 0x2, PropSize: 0x10x29A(0x1)(BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlySpectator : 1;                                // Mask: 0x4, PropSize: 0x10x29A(0x1)(Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsABot : 1;                                       // Mask: 0x8, PropSize: 0x10x29A(0x1)(BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2CF : 1;                                    // Fixing Bit-Field Size 
	uint8                                        bIsInactive : 1;                                   // Mask: 0x20, PropSize: 0x10x29A(0x1)(Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFromPreviousLevel : 1;                            // Mask: 0x40, PropSize: 0x10x29A(0x1)(Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2D0 : 1;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_526B[0x1];                                     // Fixing Size After Last Property 
	int32                                        StartTime;                                         // 0x29C(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULocalMessage>             EngineMessageClass;                                // 0x2A0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_526D[0x8];                                     // Fixing Size After Last Property 
	class FString                                SavedNetworkAddress;                               // 0x2B0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueID;                                          // 0x2C0(0x30)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_526F[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnPawnSet;                                         // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UPawn*                                 PawnPrivate;                                       // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5272[0x18];                                    // Fixing Size After Last Property 
	class FString                                PlayerNamePrivate;                                 // 0x328(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5273[0x10];                                    // Fixing Size Of Struct
