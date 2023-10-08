#define _USE_MATH_DEFINES 

#include <GL/glew.h>
#include <GL/freeglut.h>
#include <cmath>
#include <iostream>

// Drawing routine.
#include "Drawing.h";

// OpenGL window reshape routine.
#include "Resize.h";

// Transform method or coroutine.
#include "Transform.h";

// Move method or coroutine.
#include "Move.h";

// Main routine.
int main(int argc, char** argv)
{
	glutInit(&argc, argv); // Argumen count, argumen vector

	glutInitContextVersion(4, 3);
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

	// Buffer
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(100, 0);
	glutCreateWindow("Fathur_Jaki");
	glutDisplayFunc(drawScene);
	glutReshapeFunc(resize);
	//glutKeyboardFunc(keyInput); // Transform 3D Object
	//glutSpecialFunc(specialKeyInput); // Move 3D Object

	glewExperimental = GL_TRUE;
	glewInit();

	glutMainLoop();
}
