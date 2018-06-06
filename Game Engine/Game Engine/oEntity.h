#ifndef ENTITY
#define ENTITY

#include "IComponent.h"
#include <string>
#include <vector>

using namespace std;

class oEntity
{
private:
	string name;
	vector<IComponent> componentList;
	IComponent::ComponentMasks mask;

public:
	oEntity(string &nameIn);
	void AddComponent(IComponent &componentIn);
	string& Name();
	IComponent::ComponentMasks Mask();
	vector<IComponent>& Components();
};

#endif // !ENTITY
