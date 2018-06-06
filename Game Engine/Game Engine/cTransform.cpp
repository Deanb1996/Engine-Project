#include "cTransform.h"

cTransform::cTransform(vec3 & t, vec3 & r, vec3 & s)
{
	translation = t;
	rotation = r;
	scale = s;
	transformSet = false;
}

bool cTransform::SetTransform()
{
	transformSet = true;
}

vec3& cTransform::GetTranslation()
{
	return translation;
}

void cTransform::SetTranslation(vec3 & v)
{
	translation = v;
}

vec3& cTransform::GetRotation()
{
	return rotation;
}

void cTransform::SetRotation(vec3 & v)
{
	rotation = v;
}

vec3& cTransform::GetScale()
{
	return scale;
}

void cTransform::SetScale(vec3 & v)
{
	scale = v;
}

mat4& cTransform::GetTransform()
{
	return transform;
}

void cTransform::SetTransform(mat4 & m)
{
	transform = m;
}

vec3& cTransform::GetForward()
{
	return forward;
}

void cTransform::SetForward(vec3 & v)
{
	forward = v;
}

vec3& cTransform::GetRight()
{
	return right;
}

void cTransform::SetRight(vec3 & v)
{
	right = v;
}

vec3& cTransform::GetUp()
{
	return up;
}

void cTransform::SetUp(vec3 & v)
{
	up = v;
}

IComponent::ComponentMasks cTransform::ComponentMask()
{
	return ComponentMasks::COMPONENT_TRANSFORM;
}
