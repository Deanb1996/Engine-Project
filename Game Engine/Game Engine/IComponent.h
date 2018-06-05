class IComponent
{
public:
	enum ComponentMasks
	{
		COMPONENT_NONE = 0,
		COMPONENT_TRANSFORM = 1 << 0,
		COMPONENT_GEOMETRY = 1 << 1,
		COMPONENT_TEXTURE = 1 << 2,
		COMPONENT_VELOCITY = 1 << 3,
		COMPONENT_AI = 1 << 4,
		COMPONENT_AUDIO = 1 << 5,
		COMPONENT_SHADER = 1 << 6,
		COMPONENT_HEALTH = 1 << 7
	};

	virtual ComponentMasks ComponentMask() = 0;
};

