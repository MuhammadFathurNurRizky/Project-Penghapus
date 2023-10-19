#define _USE_MATH_DEFINES 

#include <GL/glew.h>
#include <GL/freeglut.h>
#include <cmath>
#include <iostream>

// Global variables for rotation
float angleX = 0.0f;
float angleY = 0.0f;
int prevMouseX = 0;
int prevMouseY = 0;
bool isRotating = false;

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

	glEnable(GL_DEPTH_TEST);
	glutMouseFunc(mouse);
	glutMotionFunc(motion);
	//glutKeyboardFunc(keyInput); // Transform 3D Object
	//glutSpecialFunc(specialKeyInput); // Move 3D Object

	glewExperimental = GL_TRUE;
	glewInit();

	glutMainLoop();
}
