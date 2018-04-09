// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SHOT_STUDIOS_MASTEREditorTarget : TargetRules
{
	public SHOT_STUDIOS_MASTEREditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "SHOT_STUDIOS_MASTER" } );
	}
}
