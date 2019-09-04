// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Destructuration.h"
#include <string>

enum AI_WORLDSTATE_SYMBOL {
	WS_DestroyBrick,
	WS_Hungry,
	WS_Position,
	WS_Thirsty,
};

/**
 * 
 */
class DESTRUCTURATION_API AIWorldState
{
	struct AIWorldStateSymbols {
		bool DestroyBrick;
		bool Hungry;
		FVector Position;
		bool Thirsty;
	};

public:
	AIWorldState();
	~AIWorldState();

	// Set
	void		SetWSProp(AI_WORLDSTATE_SYMBOL symbolName, bool value);
	void		SetWSProp(AI_WORLDSTATE_SYMBOL symbolName, FVector value);
	

	// Attributes
	struct AIWorldStateSymbols m_WorldState;
};
