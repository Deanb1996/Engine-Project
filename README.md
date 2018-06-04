# Summer-Project-Git

Libraries:

GLFW provides basic functionality to create an OpenGL window, without having to mess around with Win32 API. 

#include "GLFW\glfw3.h"

GLM provides magical maths things like Vector maths etc.

#include "glm\glm.hpp"


To make OpenAL work you may have to modify your filepaths in project properties to point towards the location of the OpenAL folder:

1. C/C++ -> General -> Additional Include Directories 

(...\Summer Project Git\OpenAL\openal-soft-1.18.2-bin\openal-soft-1.18.2-bin\include\AL)

2. Linker -> General -> Additional Library Directories

(...\Summer Project Git\OpenAL\openal-soft-1.18.2-bin\openal-soft-1.18.2-bin\libs\Win32)

#include "al.h" 
#include "alc.h" 
#include "alut.h"
