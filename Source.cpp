#include<iostream>
#include<GL/glut.h>

int thetaX = 25, thetaY = 45;
int startX = 0, startY = 0;

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
	glTranslatef(-3.5, 0.0, -3.5);
	glColor3f(0.9, 0.5, 0.50101);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.50102);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.90104);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.50105);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.5, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.5, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	////////////////////////////2
	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	/////////////////////////////3
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	////////////////////////////////4
	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	/////////////////////////////////5
	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	////////////////////////////////6
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	/////////////////////////////////7
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	////////////////////////////////8
	glColor3f(0.9, 0.5, 0.5);
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	//////////
	glTranslatef(-0.5, 0.03, 0.0);
	glRotatef(30, 0.0, 1.0, 0.0);
	glColor3f(0.9, 0.9, 0.1);
	glutSolidCube(0.40);
	glRotatef(30, 0.0, 1.0, 0.0);
	glutSolidCube(0.40);
	glRotatef(-60, 0.0, 1.0, 0.0);
	glutSolidCube(0.40);
	glTranslatef(0.0, -0.03, 0.0);
	//////////

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.5, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	/////////////////////////////////9
	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	////////////////////////////////10
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	/////////////////////////////////11
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	////////////////////////////////12
	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	/////////////////////////////////13
	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	////////////////////////////////14
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.2, 0.6, 0.9);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.8, 0.7, 0.6);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	/////////////////////////////////15
	glColor3f(0.9, 0.5, 0.5);
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.5, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.3, 0.8, 0.9);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.9, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);

	glColor3f(0.9, 0.5, 0.5);
	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.46);
	///////////////////////////////////////////////////////////////////////////////////////////////////////
	glTranslatef(-7.0, -0.1, -7.0);
	glColor3f(1.0, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	/////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	/////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	/////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	/////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	/////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	/////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(-0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	/////////////////////////////////
	glTranslatef(0.0, 0.0, 0.5);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);

	glTranslatef(0.5, 0.0, 0.0);
	glutSolidCube(0.5);
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	glPopMatrix();

	//glPushMatrix();
	//glColor3ub(200, 122, 255);
	//glColor4f(1.0, 0.2, 0.3, 0.7);
	//glutSolidCube(2.0);
	//glPopMatrix();

	glPushMatrix();
	glRotatef(thetaX, 1.0, 0.0, 0.0);
	glRotatef(thetaY, 0.0, 1.0, 0.0);
	glTranslatef(startX / 300, 0, startY / 300);
	glColor3f(0.2, 1.0, 0.3);
	glutSolidCube(0.5);
	glPopMatrix();

	glFlush();
}

void mouseRotate(int button, int action, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && action == GLUT_DOWN)
	{
		/*
		unsigned char pixel[4];
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
		GLubyte pixels[4 * 4 * 4];
		glReadPixels(x, 500 - y, 1, 1, GL_RGB, GL_UNSIGNED_BYTE, pixels);
		printf("R :  %i\n", pixels[0]);
		printf("G :  %i\n", pixels[1]);
		printf("B :  %i\n", pixels[2]);
		printf("x = %i , y = %i \n", x, y);
		printf("x = %i , y = %i \n\n", x, 500 - y);
		glutGet(GLUT_WINDOW_WIDTH);
		glutGet(GLUT_WINDOW_HEIGHT);
		glutGet(GLUT_SCREEN_WIDTH);
		glutGet(GLUT_SCREEN_HEIGHT);
		printf("X = %i, Y = %i\n", glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));
		printf("X = %i, Y = %i\n\n", glutGet(GLUT_SCREEN_WIDTH), glutGet(GLUT_SCREEN_HEIGHT));

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
{/*
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

	glEnable(GL_LIGHT0);*/
	glLoadIdentity();
	glMatrixMode(GL_PROJECTION);

	glShadeModel(GL_SMOOTH);   // set shade model

	// preset light and materials
	GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };   // set diffuse
	GLfloat light_ambient[] = { 0.0f, 0.5f, 0.5f, 1.0f };   // set ambient
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);

	// set material reflective
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };  // specular reflection parameter
	GLfloat mat_shininess[] = { 50.0 };               // specular parameter

	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

	// make the light source effective
	glEnable(GL_LIGHT0);    // activate the light symbol constant

	// activate depth test
	glEnable(GL_DEPTH_TEST);
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