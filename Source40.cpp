#include<iostream>
//#include<GL/glut.h>
#include<GL/freeglut.h>
#include<GL/freeglut_ext.h>
#include<GL/freeglut_std.h>

int thetaX = 25, thetaY = 45;
int startX = 0, startY = 0;
int ww, hh;
GLuint buff2[64] = { 0 };
GLint hits2, view2[4];

void drawObjects1(GLenum mode)
{
	glLoadName(1);
	glColor3f(0.9, 0.5, 0.5);
	glutSolidCube(0.46);
}

void drawObjects2(GLenum mode)
{
	glLoadName(2);
	glColor3f(0.2, 0.3, 0.9);
	glutSolidCube(0.46);
}

void drawObjects3(GLenum mode)
{
	glLoadName(3);
	glColor3f(0.4, 0.0, 0.5);
	glutSolidCube(0.46);
}

void display()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glPushMatrix();

	//gluLookAt(1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

	//glRotatef(90, 1.0, 0.0, 0.0);
	glRotatef(thetaX, 1.0, 0.0, 0.0);
	glRotatef(thetaY, 0.0, 1.0, 0.0);
	//////////////////////////////1
	//glTranslatef(1.0, 0.0, 0.0);
	drawObjects1(GL_RENDER);

	glTranslatef(1.0, 0.0, 0.0);
	drawObjects2(GL_RENDER);

	glTranslatef(1.0, 0.0, 0.0);
	drawObjects3(GL_RENDER);

	////////////////////////////////////////////////////////////////////////////////////////////////////////////

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0, 2.0, 0.0);
	glRotatef(45, 0.5, 0.5, 0.5);
	if (buff2[3] == 1)
	{
		glColor3f(0.9, 0.5, 0.5);
		glutSolidCube(0.5);
		glRasterPos3f(-3.0, 3.0, 0.0);
		glutBitmapString(GLUT_BITMAP_HELVETICA_18, (unsigned char*)"ID: 1");
	}
	else if (buff2[3] == 2)
	{
		glColor3f(0.2, 0.3, 0.9);
		glutSolidCube(0.5);
		glRasterPos3f(-3.0, 3.0, 0.0);
		glutBitmapString(GLUT_BITMAP_HELVETICA_18, (unsigned char*)"ID: 2");
	}
	else if (buff2[3] == 3)
	{
		glColor3f(0.4, 0.0, 0.5);
		glutSolidCube(0.5);
		glRasterPos3f(-3.0, 3.0, 0.0);
		glutBitmapString(GLUT_BITMAP_HELVETICA_18, (unsigned char*)"ID: 3");
	}
	else
	{
		glColor3f(1.0, 1.0, 0.0);
		glutSolidCube(0.5);
		glRasterPos3f(-3.0, 3.0, 0.0);
		glutBitmapString(GLUT_BITMAP_HELVETICA_18, (unsigned char*)"ID: 0");
	}
	glPopMatrix();
	//glRasterPos3f(-3.0, 3.0, 0.0);
	//glColor4f(1.0, 1.0, 0.0, 0.0);
	//glutBitmapString(GLUT_BITMAP_HELVETICA_18, (unsigned char*)"Hits: ");

	//glPushMatrix();
	//glColor3ub(200, 122, 255);
	//glColor4f(1.0, 0.2, 0.3, 0.7);
	//glutSolidCube(2.0);
	//glPopMatrix();
/*
	glPushMatrix();
	glRotatef(thetaX, 1.0, 0.0, 0.0);
	glRotatef(thetaY, 0.0, 1.0, 0.0);
	glTranslatef(startX / 300, 0, startY / 300);
	glColor3f(0.2, 1.0, 0.3);
	glutSolidCube(0.5);
	glPopMatrix();*/

	glFlush();
}

void selectObject(int x, int y)
{
	GLuint buff[64] = { 0 }; // the buffer
	GLint hits, view[4];

	glSelectBuffer(64, buff); // This choose the buffer where store the values for the selection data
	glGetIntegerv(GL_VIEWPORT, view); // This retrieve info about the viewport
	glRenderMode(GL_SELECT); // Switching in selecton mode
	glInitNames(); // This stack contains all the info about the objects
	glPushName(0); // Now fill the stack with one element (or glLoadName will generate an error)

	// Now modify the vieving volume, restricting selection area around the cursor
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();

	glLoadIdentity();
	gluPickMatrix(x, y, 1.0, 1.0, view); // restrict the draw to an area around the cursor

	// [IMPORTANT] apply the same perspective in the reshapeFunc
	//gluPerspective(20, view[2] * 1.0f / view[3], 0.1f, 100);
	//glOrtho(-4.0, 4.0, -4.0, 4.0, -10.0, 10.0);

	if (ww <= hh)
		glOrtho(-4.0, 4.0, -4.0 * (GLfloat)hh / (GLfloat)ww, 4.0 * (GLfloat)hh / (GLfloat)ww, -10.0, 10.0);
	else
		glOrtho(-4.0 * (GLfloat)ww / (GLfloat)hh, 4.0 * (GLfloat)ww / (GLfloat)hh, -4.0, 4.0, -10.0, 10.0);

	//gluOrtho2D(-4.0, 4.0, -4.0, 4.0);

	glMatrixMode(GL_MODELVIEW); // Draw the objects onto the screen

	glutSwapBuffers(); // draw only the names in the stack, and fill the array
	display(); // render

	glMatrixMode(GL_PROJECTION); // Do you remeber? We do pushMatrix in PROJECTION mode
	glPopMatrix();

	hits = glRenderMode(GL_RENDER); // get number of objects drawed in that area and return to render mode

	// NOW 
	// hits: number of hits
	// buff[ (hits*x)+3] the ID
	std::cout << "Hits: " << hits << "\n" << "ID: " << buff[3] << "\n";
	hits2 = hits;
	buff2[3] = buff[3];

	glMatrixMode(GL_MODELVIEW); // and revert again

}

void mouseRotate(int button, int action, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && action == GLUT_DOWN)
	{
		/*unsigned char pixel[4];
		glReadPixels(x, y, 1, 1, GL_RGB, GL_UNSIGNED_BYTE, pixel);
		printf("R :  %i\n", pixel[0]);
		printf("G :  %i\n", pixel[1]);
		printf("B :  %i\n", pixel[2]);*/
		/*float pixels[4];
		glReadPixels(x, y, 1, 1, GL_RGB, GL_FLOAT, pixels);
		printf("R :  %f\n", pixels[0]);
		printf("G :  %f\n", pixels[1]);
		printf("B :  %f\n", pixels[2]);*/
		//printf("x =  %i\n", x);
		//printf("y =  %i\n", y);
		//theta += 1;
		//if (theta <= 360.0) theta -= 360.0;
		startX = x;
		startY = y;
		selectObject(x, 500 - y);
	}
}

void mouseMotion(int x, int y)
{
	if (startX - x > 0)
	{
		thetaY -= 1;
		if (thetaY >= 360.0) thetaY += 360.0;
	}
	else if (startX - x < 0)
	{
		thetaY += 1;
		if (thetaY <= 360.0) thetaY -= 360.0;
	}

	if (startY - y > 0)
	{
		thetaX -= 1;
		if (thetaX >= 360.0) thetaX += 360.0;
	}
	else if (startY - y < 0)
	{
		thetaX += 1;
		if (thetaX <= 360.0) thetaX -= 360.0;
	}

	startX = x;
	startY = y;

	display();
}

void myReshape(int w, int h)
{
	ww = w;
	hh = h;
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	if (w <= h)
		glOrtho(-4.0, 4.0, -4.0 * (GLfloat)h / (GLfloat)w, 4.0 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
	else
		glOrtho(-4.0 * (GLfloat)w / (GLfloat)h, 4.0 * (GLfloat)w / (GLfloat)h, -4.0, 4.0, -10.0, 10.0);

	glMatrixMode(GL_MODELVIEW);
	display();
}

void myinit()
{
	glEnable(GL_LIGHTING);
	glEnable(GL_COLOR_MATERIAL);

	GLfloat mat_specular[] = { 0.5, 0.5, 0.5, 1.0 };
	GLfloat mat_diffuse[] = { 0.5,0.5,0.5,1.0 };
	GLfloat mat_ambient[] = { 0.5,0.5,0.5,1.0 };
	GLfloat mat_shininess = { 10.0 };
	GLfloat light_ambient[] = { 0.2,0.2,0.2,1.0 };
	GLfloat light_diffuse[] = { 0.5,0.5,0.5,1.0 };
	GLfloat light_specular[] = { 0.5,0.5,0.5,1.0 };

	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialf(GL_FRONT, GL_SHININESS, mat_shininess);

	glShadeModel(GL_SMOOTH);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);

	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);

	//////////////////////////////////////

	//glEnable(GL_LIGHTING);
	//glEnable(GL_COLOR_MATERIAL);

	GLfloat ambientLight[] = { 0.1,0.1,0.1,1.0 };
	GLfloat LightPosition[] = { 0.0,15.0,10.0,1.0 };
	GLfloat LightDiffuse[] = { 1.0,0.3,0.2,1.0 };

	glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, LightDiffuse);
	glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);

	glEnable(GL_LIGHT0);
}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("cube");
	myinit();
	glutReshapeFunc(myReshape);
	glutDisplayFunc(display);
	glutMouseFunc(mouseRotate);
	glutMotionFunc(mouseMotion);
	glutMainLoop();
}
