// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SHOT_STUDIOS_MASTERTarget : TargetRules
{
	public SHOT_STUDIOS_MASTERTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "SHOT_STUDIOS_MASTER" } );
	}
}
