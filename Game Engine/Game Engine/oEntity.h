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
	oEntity(string name);
	void AddComponent(IComponent &component);
	string Name();
	IComponent::ComponentMasks Mask();
	vector<IComponent> Components();
};

#endif // !ENTITY
