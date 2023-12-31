#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2F0 - 0x2F0)
// Class StaticMeshDescription.StaticMeshDescription
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StaticMeshDescription");
		return Clss;
	}

	void SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int32 UVIndex);
	void SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, class FName& SlotName);
	struct FVector2D GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int32 UVIndex);
	void CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
