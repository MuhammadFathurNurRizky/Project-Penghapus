void drawEraser() {
	// Function to render the chalk eraser

	// Set the color for the eraser (e.g., pink)
	glColor3f(1.0, 0.6, 0.6);

	// Draw the main body of the eraser (a cylinder)
	GLUquadric* quadratic = gluNewQuadric();
	gluQuadricNormals(quadratic, GLU_SMOOTH);
	gluCylinder(quadratic, 0.5, 0.5, 1.5, 32, 32);

	// Draw the top part (a hemisphere)
	glPushMatrix();
	glTranslatef(0.0, 0.0, 1.5);
	glutSolidSphere(0.5, 32, 32);
	glPopMatrix();
}

void drawScene(void)
{
	glClearColor(0.07, 0.13, 0.17, 1.0); // Window Color
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(0.0, 0.0, 0.0);

	glLoadIdentity();

	/*glTranslatef(Xvalue, Yvalue, -5.0);
	glRotatef(Angle, 1.0, 1.0, 1.0);*/

	/*glLineWidth(5.0);
	  glPointSize(5.0);
	*/
	/*glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); // Wireframe Mode */
	//glBegin(GL_POLYGON);
	///*glEnable(GL_DEPTH_TEST);
	//glDisable(GL_DEPTH_TEST);*/
	//glColor3f(1.0, 0.0, 0.0);
	//glVertex3f(20.0, 20.0, 0.0);
	//glColor3f(0.0, 1.0, 0.0);
	//glVertex3f(80.0, 20.0, 0.0);
	//glColor3f(0.0, 0.0, 1.0);
	//glVertex3f(80.0, 80.0, 0.0);
	//glColor3f(1.0, 1.0, 1.0);
	//glVertex3f(20.0, 80.0, 0.0);
	//glEnd();

	gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

	glRotatef(angleY, 1.0, 0.0, 0.0);
	glRotatef(angleX, 0.0, 1.0, 0.0);

	drawEraser();
	glutSwapBuffers(); //Swap buffer belakang ke buffer depan
	//glFlush(); // Membersihkan semua perintah yang ada di method ini.
}