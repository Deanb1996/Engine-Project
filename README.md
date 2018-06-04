# Engine-Project

Libraries:

GLFW provides basic functionality to create an OpenGL window, without having to mess around with Win32 API. 

#include "GLFW\glfw3.h"

GLM provides magical maths things like Vector maths etc.

#include "glm\glm.hpp"


To make OpenAL work you may have to modify your filepaths in project properties to point towards the location of the OpenAL folder:

1. Right-Click on the Project Solution and select Properties.

2. Go to "C/C++ -> General -> Additional Include Directories" and add in correct filepath e.g.
	(...\Engine-Project\OpenAL\openal-soft-1.18.2-bin\openal-soft-1.18.2-bin\include\AL)

3. Go to "Linker -> General -> Additional Library Directories" and add in correct filepath e.g.
	(...\Engine-Project\OpenAL\openal-soft-1.18.2-bin\openal-soft-1.18.2-bin\libs\Win32)

4. Go to to "Linker -> Input -> Additional Dependencies" and add in OpenAL32.lib; directly before %(AdditionalDependencies)

#include "al.h" 
#include "alc.h" 
#include "alut.h"


Engine Design:

Download NClass to view the Engine Design.ncp, already contains a framework of the core stuff we'll need, feel free to add stuff/flesh out the classes.




Contributors:

Anthony Beacock
Dean Barnard
Jakob Scrivener
Reece Giles
