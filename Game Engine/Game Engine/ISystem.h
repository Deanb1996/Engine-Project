#pragma once
#include "oEntity.h"

class ISystem
{
public:

	virtual void OnAction();
	virtual void AssignEntity(oEntity entity);
	virtual void DestroyEntity(oEntity entity);

	ISystem();
	~ISystem();
};

