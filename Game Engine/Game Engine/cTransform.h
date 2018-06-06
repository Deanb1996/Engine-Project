#ifndef TRANSFORM
#define TRANSFORM

#include "IComponent.h"
#include "glm\glm.hpp"

using namespace glm;

class cTransform : IComponent
{
private:
	mat4 transform;

	vec3 forward;
	vec3 right;
	vec3 up;
	vec3 translation;
	vec3 rotation;
	vec3 scale;

	bool transformSet;

public:
	cTransform(vec3 &t, vec3 &r, vec3 &s);
	bool SetTransform();
	vec3& GetTranslation();
	void SetTranslation(vec3 &v);
	vec3& GetRotation();
	void SetRotation(vec3 &v);
	vec3& GetScale();
	void SetScale(vec3 &v);
	mat4& GetTransform();
	void SetTransform(mat4 &m);
	vec3& GetForward();
	void SetForward(vec3 &v);
	vec3& GetRight();
	void SetRight(vec3 &v);
	vec3& GetUp();
	void SetUp(vec3 &v);
	ComponentMasks ComponentMask();
};

#endif
