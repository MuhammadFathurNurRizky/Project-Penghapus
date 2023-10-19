void mouse(int button, int state, int x, int y) {
	// Mouse callback function for mouse button events

	if (button == GLUT_LEFT_BUTTON) {
		if (state == GLUT_DOWN) {
			prevMouseX = x;
			prevMouseY = y;
			isRotating = true;
		}
		else if (state == GLUT_UP) {
			isRotating = false;
		}
	}
}
