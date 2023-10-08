void resize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION); // Untuk Projection
	glLoadIdentity(); // Reset the matrix
	glOrtho(0.0, 100.0, 0.0, 100.0, -2.0, 5.0); // Projection 2D (objects further and close appear same)
	//glFrustum(0.0, 100.0, 0.0, 100.0, -1.0, 1.0); // Projection 3D (identical objects further away appear smaller)
	//glFrustum(-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
}