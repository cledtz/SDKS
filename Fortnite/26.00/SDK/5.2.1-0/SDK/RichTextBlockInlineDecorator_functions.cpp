#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RichTextBlockInlineDecorator.RichTextBlockInlineDecorator
// (None)

class UClass* URichTextBlockInlineDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichTextBlockInlineDecorator");

	return Clss;
}


// RichTextBlockInlineDecorator RichTextBlockInlineDecorator.Default__RichTextBlockInlineDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class URichTextBlockInlineDecorator* URichTextBlockInlineDecorator::GetDefaultObj()
{
	static class URichTextBlockInlineDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<URichTextBlockInlineDecorator*>(URichTextBlockInlineDecorator::StaticClass()->DefaultObject);

	return Default;
}

}


