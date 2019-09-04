// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIWorldState.h"

/**
 * 
 */
class DESTRUCTURATION_API AIActionAbstract
{
public:
	AIActionAbstract();
	~AIActionAbstract();

	bool Initialize();
	bool ActivateAction();
	bool DeactivateAction();
	bool IsActionStillValid();
	bool IsActionOver();

protected:
	AIWorldState m_WSPreconditions;
	AIWorldState m_WSEffects;
};
