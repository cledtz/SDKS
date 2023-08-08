#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x108 - 0xA0)
// Class UnrealEngineExperimental.ControllerComponentDebugDraw
class UControllerComponentDebugDraw : public UControllerComponent
{
public:
	TArray<struct FPersistentLineBatcher>        PersistentLineBatchers;                            // 0xA0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FC8[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControllerComponentDebugDraw");
		return Clss;
	}

	void SetDebugDrawEnabled(bool bEnabled, uint32 ChannelId);
	void Reset(uint32 ChannelId);
	void DrawDebugSphereInternal(struct FVector& Center, float Radius, int32 Segments, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID);
	void DrawDebugPointInternal(struct FVector& Position, float Size, struct FColor& Color, bool bPersistentLines, float LifeTime, uint32 ChannelId, uint32 InstanceID);
	void DrawDebugLineInternal(struct FVector& LineStart, struct FVector& LineEnd, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID);
	void DrawDebugDirectionalArrowInternal(struct FVector& LineStart, struct FVector& LineEnd, float ArrowSize, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID);
	void DrawDebugCylinderInternal(struct FVector& Start, struct FVector& End, float Radius, int32 Segments, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID);
	void DrawDebugConeInternal(struct FVector& Origin, struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID);
	void DrawDebugCapsuleInternal(struct FVector& Center, float HalfHeight, float Radius, struct FQuat& Rotation, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID);
	void DrawDebugBoxInternal(struct FVector& Center, struct FVector& Extent, struct FQuat& Rotation, struct FColor& Color, bool bPersistentLines, float LifeTime, float Thickness, uint32 ChannelId, uint32 InstanceID);
	void ClearChannel(uint32 ChannelId);
	void Clear(uint32 ChannelId, uint32 InstanceID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
