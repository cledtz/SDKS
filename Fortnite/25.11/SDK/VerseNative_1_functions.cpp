#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function VerseNative.VerseStmLibrary.StmSave
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAkeType                    Property                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVerseStmLibrary::StmSave(struct FAkeType& Property)
{
	static auto Func = Class->GetFunction("VerseStmLibrary", "StmSave");

	Params::UVerseStmLibrary_StmSave_Params Parms;

	Parms.Property = Property;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseNative.VerseStmLibrary.StmRollback
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmRollback()
{
	static auto Func = Class->GetFunction("VerseStmLibrary", "StmRollback");

	Params::UVerseStmLibrary_StmRollback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseNative.VerseStmLibrary.StmLeaveFrame
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmLeaveFrame()
{
	static auto Func = Class->GetFunction("VerseStmLibrary", "StmLeaveFrame");

	Params::UVerseStmLibrary_StmLeaveFrame_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseNative.VerseStmLibrary.StmEnterFrame
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmEnterFrame()
{
	static auto Func = Class->GetFunction("VerseStmLibrary", "StmEnterFrame");

	Params::UVerseStmLibrary_StmEnterFrame_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseNative.VerseStmLibrary.StmCommit
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmCommit()
{
	static auto Func = Class->GetFunction("VerseStmLibrary", "StmCommit");

	Params::UVerseStmLibrary_StmCommit_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseNative.VerseStmLibrary.StmBegin
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::StmBegin()
{
	static auto Func = Class->GetFunction("VerseStmLibrary", "StmBegin");

	Params::UVerseStmLibrary_StmBegin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseNative.VerseStmLibrary.AutoRtfmJumpIfSuccess
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::AutoRtfmJumpIfSuccess()
{
	static auto Func = Class->GetFunction("VerseStmLibrary", "AutoRtfmJumpIfSuccess");

	Params::UVerseStmLibrary_AutoRtfmJumpIfSuccess_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseNative.VerseStmLibrary.AutoRtfmJumpIfAbort
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::AutoRtfmJumpIfAbort()
{
	static auto Func = Class->GetFunction("VerseStmLibrary", "AutoRtfmJumpIfAbort");

	Params::UVerseStmLibrary_AutoRtfmJumpIfAbort_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseNative.VerseStmLibrary.AutoRtfmAbortIfNot
// (Final, Native, Static, Public)
// Parameters:

void UVerseStmLibrary::AutoRtfmAbortIfNot()
{
	static auto Func = Class->GetFunction("VerseStmLibrary", "AutoRtfmAbortIfNot");

	Params::UVerseStmLibrary_AutoRtfmAbortIfNot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
