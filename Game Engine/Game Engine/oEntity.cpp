#include "stdafx.h"
#include "oEntity.h"

oEntity::oEntity(string &nameIn)
{
	name = nameIn;
}

void oEntity::AddComponent(IComponent & componentIn)
{
	componentList.push_back(componentIn);
	mask | componentIn.ComponentMask;
}

string& oEntity::Name()
{
	return string();
}

IComponent::ComponentMasks oEntity::Mask()
{
	return IComponent::ComponentMasks();
}

vector<IComponent>& oEntity::Components()
{
	return vector<IComponent>();
}
