void motion(int x, int y) {
	// Mouse motion callback for interactive rotation

	if (isRotating) {
		int dx = x - prevMouseX;
		int dy = y - prevMouseY;
		angleX += dx;
		angleY += dy;
		prevMouseX = x;
		prevMouseY = y;
		glutPostRedisplay();
	}
}