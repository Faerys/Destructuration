// Fill out your copyright notice in the Description page of Project Settings.


#include "AIWorldState.h"
#include "Engine/Engine.h"
#include <iostream>

AIWorldState::AIWorldState()
{
}

AIWorldState::~AIWorldState()
{
}

void AIWorldState::SetWSProp(AI_WORLDSTATE_SYMBOL symbolName, bool value)
{
	switch (symbolName) {
	case WS_DestroyBrick:
		m_WorldState.DestroyBrick = value;
		std::cout << "struct AIWorldStateSymbols : DestroyBrick set to " << value << "." << std::endl;
		break;
	case WS_Hungry:
		m_WorldState.Hungry = value;
		break;
	case WS_Thirsty:
		m_WorldState.Thirsty = value;
		break;
	default:
		UE_LOG(LogAIWorldState, Warning, TEXT("AIWorldState.cpp: fail to set (bool)SetWSProp"));
		break;
	}
}


void AIWorldState::SetWSProp(AI_WORLDSTATE_SYMBOL symbolName, FVector value)
{
	switch (symbolName) {
	case WS_Position:
		m_WorldState.Position = value;
	default:
		UE_LOG(LogAIWorldState, Warning, TEXT("AIWorldState.cpp: fail to set (bool)SetWSProp"));
		break;
	}
}
//Je remet un commentaire
//Deuxième modification
//Troisième test
//Ceci est un test de feature
//Ceci est un test release