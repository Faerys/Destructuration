// Fill out your copyright notice in the Description page of Project Settings.

/*#pragma once

#include "CoreMinimal.h"

class DESTRUCTURATION_API AIEnumActions
{
public:
	AIEnumActions();
	~AIEnumActions();
};*/
#pragma once
#include "CoreMinimal.h"
#define ADD_ACTION_CLASS(label) kAct_##label;
/*USAGE: To add a new enum, just add a ADD_ACTION_CLASS(x) where x is the name of the enum without the "kAct_" prefix.*/
ADD_ACTION_CLASS(Attack);
ADD_ACTION_CLASS(Drink);
ADD_ACTION_CLASS(Eat);
ADD_ACTION_CLASS(MoveTo);
