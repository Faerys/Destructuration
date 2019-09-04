// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIActionAbstract.h"

/**
 * 
 */
class DESTRUCTURATION_API AIActionGoto : public AIActionAbstract
{
public:
	AIActionGoto();
	~AIActionGoto();

	bool		Initialize(FVector destination);
};
