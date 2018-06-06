// Game Engine.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "mScene.h"
#include "mInput.h"
#include "GLFW\glfw3.h"
#include "glm\glm.hpp"

int main(void)
{
	mScene sceneManager;

	sceneManager.InitialiseGLFW();
	sceneManager.OpenWindow();
	sceneManager.SetupKeyPress();
	sceneManager.Render();
	sceneManager.Update();

	return 0;
}


