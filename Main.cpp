#define _USE_MATH_DEFINES 

#include <GL/glew.h>
#include <GL/freeglut.h>
#include <cmath>
#include <iostream>
#include <cstdlib>

// Global variables for rotation
//float angleX = 0.0f; // Angle rotate
//float angleY = 0.0f;
//float valueX = 0.0f;  // Coordinate position move
//float valueY = 0.0f;
//int prevMouseX = 0;
//int prevMouseY = 0;
//bool isRotating = false;
static int isAnimate = 0; // Animated?
static int animationPeriod = 50; // Time interval between frames.
static float angle = 0.0; // Angle of rotation.

// Drawing routine.
#include "Drawing.h";

// OpenGL window reshape routine.
#include "Resize.h";

// Mouse input control
//#include "Mouse.h";

// Motion input for mouse
//#include "Motion.h";

// Transform method or coroutine.
//#include "Transform.h";

// Move method or coroutine.
#include "Move.h";

// Routine to increase the rotation angle.
void increaseAngle(void)
{
	angle += 5.0;
	if (angle > 360.0) angle -= 360.0;
}

// Routine to animate with a recursive call made after animationPeriod msecs.
void animate(int value)
{
	if (isAnimate)
	{
		increaseAngle();

		glutPostRedisplay();
		glutTimerFunc(animationPeriod, animate, 1);
	}
}

// Keyboard input processing routine.
void keyInput(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		exit(0);
		break;
	case ' ':
		if (isAnimate) isAnimate = 0;
		else
		{
			isAnimate = 1;
			animate(1);
		}
		break;
	default:
		break;
	}
}

// Routine to output interaction instructions to the C++ window.
void printInteraction(void)
{
	std::cout << "Interaction:" << std::endl;
	std::cout << "Press space to toggle between animation on and off." << std::endl
		<< "Press the up/down arrow keys to speed up/slow down animation." << std::endl;
}

// Main routine.
int main(int argc, char** argv)
{
	printInteraction();
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
	/*glutMouseFunc(mouse);
	glutMotionFunc(motion);*/
	glutKeyboardFunc(keyInput); // Animate 3D Object
	glutSpecialFunc(specialKeyInput); // Move 3D Object

	glewExperimental = GL_TRUE;
	glewInit();

	glutMainLoop();
}
