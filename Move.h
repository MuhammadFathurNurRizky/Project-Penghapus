void specialKeyInput(int key, int x, int y)
{
	if (key == GLUT_KEY_UP) valueY += 0.1;
	if (key == GLUT_KEY_DOWN) valueY -= 0.1;
	if (key == GLUT_KEY_LEFT) valueX -= 0.1;
	if (key == GLUT_KEY_RIGHT) valueX += 0.1;
	glutPostRedisplay();
}