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

	glBegin(GL_POLYGON);
	/*glEnable(GL_DEPTH_TEST);
	glDisable(GL_DEPTH_TEST);*/
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(20.0, 20.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(80.0, 20.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(80.0, 80.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(20.0, 80.0, 0.0);
	glEnd();
	glutSwapBuffers(); //Swap buffer belakang ke buffer depan
	//glFlush(); // Membersihkan semua perintah yang ada di method ini.
}