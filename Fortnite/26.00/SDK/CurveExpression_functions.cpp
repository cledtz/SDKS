#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CurveExpression.CurveExpressionsDataAsset
// (None)

class UClass* UCurveExpressionsDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurveExpressionsDataAsset");

	return Clss;
}


// CurveExpressionsDataAsset CurveExpression.Default__CurveExpressionsDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurveExpressionsDataAsset* UCurveExpressionsDataAsset::GetDefaultObj()
{
	static class UCurveExpressionsDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurveExpressionsDataAsset*>(UCurveExpressionsDataAsset::StaticClass()->DefaultObject);

	return Default;
}

}


