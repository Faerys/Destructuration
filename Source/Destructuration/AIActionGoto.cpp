// Fill out your copyright notice in the Description page of Project Settings.


#include "AIActionGoto.h"

AIActionGoto::AIActionGoto()
{
}

AIActionGoto::~AIActionGoto()
{
}

bool AIActionGoto::Initialize(FVector destination)
{
	m_WSEffects.SetWSProp(WS_Position, destination);
}
