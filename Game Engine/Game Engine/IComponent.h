#pragma once
class IComponent
{
public:
	IComponent();
	~IComponent();

	enum ComponentMasks {
		COMPONENT_NONE = 0
	};

	virtual void IComponent();
};

