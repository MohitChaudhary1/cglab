// https://cs.lmu.edu/~ray/notes/openglexamples/
#include "./freeglut-3.2.1/include/GL/freeglut.h"
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

//#include <OpenGL/gl.h>
//#include <OpenGl/glu.h>
//#include <GLUT/glut.h>
//#include<iostream>
// using namespace std;
/* Handler for window-repaint event. Call back when the window first appears and
 * whenever the window needs to be re-painted. */
void display() {
	glClearColor(
		0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(100.0, 400.0);
	glVertex2f(50.0, 400.0);
	glVertex2f(100.0, 350.0);
	glVertex2f(50.0, 350.0);
	glVertex2f(80.0, 375.0);
	glVertex2f(60.0, 375.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(200.0, 400.0);
	glVertex2f(200.0, 350.0);
	glVertex2f(180.0, 375.0);
	glVertex2f(150.0, 400.0);
	glVertex2f(150.0, 350.0);
	glVertex2f(160.0, 375.0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(260.0, 350.0);
	glVertex2f(280.0, 400.0);
	glVertex2f(300.0, 350.0);
	glVertex2f(320.0, 400.0);
	glVertex2f(360.0, 350.0);
	glVertex2f(300.0, 400.0);
	glVertex2f(320.0, 350.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(100.0, 300.0);
	glVertex2f(50.0, 300.0);
	glVertex2f(50.0, 250.0);
	glVertex2f(100.0, 250.0);
	glVertex2f(80.0, 275.0);
	glVertex2f(60.0, 275.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(200.0, 300.0);
	glVertex2f(220.0, 250.0);
	glVertex2f(180.0, 275.0);
	glVertex2f(150.0, 300.0);
	glVertex2f(120.0, 250.0);
	glVertex2f(160.0, 275.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(300.0, 280.0);
	glVertex2f(275.0, 250.0);
	glVertex2f(250.0, 275.0);
	glVertex2f(270.0, 300.0);
	glVertex2f(350.0, 250.0);
	glVertex2f(370.0, 280.0);
	glVertex2f(320.0, 280.0);
	glVertex2f(320.0, 250.0);
	glEnd();

	glBegin(GL_QUAD_STRIP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(50.0, 150.0);
	glVertex2f(50.0, 175.0);
	glVertex2f(75.0, 150.0);
	glVertex2f(75.0, 200.0);
	glVertex2f(100.0, 135.0);
	glVertex2f(120.0, 200.0);
	glVertex2f(150.0, 150.0);
	glVertex2f(150.0, 175.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(75.0, 150.0);
	glVertex2f(75.0, 200.0);
	glVertex2f(100.0, 135.0);
	glVertex2f(120.0, 200.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(300.0, 180.0);
	glVertex2f(250.0, 200.0);
	glVertex2f(275.0, 150.0);
	glVertex2f(320.0, 190.0);
	glVertex2f(335.0, 160.0);
	glVertex2f(300.0, 160.0);
	glVertex2f(320.0, 190.0);
	glVertex2f(335.0, 160.0);
	glVertex2f(300.0, 160.0);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(100.0, 100.0);
	glVertex2f(100.0, 50.0);
	glVertex2f(50.0, 50.0);
	glVertex2f(50.0, 100.0);
	glVertex2f(120.0, 50.0);
	glVertex2f(120.0, 75.0);
	glVertex2f(150.0, 50.0);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(300.0, 100.0);
	glVertex2f(300.0, 50.0);
	glVertex2f(250.0, 50.0);
	glVertex2f(250.0, 100.0);
	glVertex2f(320.0, 50.0);
	glVertex2f(320.0, 75.0);
	glVertex2f(350.0, 50.0);
	glEnd();
	glFlush(); // Render now
}
void line(int x1, int y1, int x2, int y2) {
	glClear(GL_COLOR_BUFFER_BIT);
	// glColor3f(0.0,0.0,1.0);
	glBegin(GL_POINTS);
	float y, m, c;
	// int x1 = 250,y1 = 100,x2 = 356,y2 = 180;
	float dx = x2 - x1;
	float dy = y2 - y1;
	m = dy / dx;
	c = y1 - m * x1;
	for (int x = x1; x <= x2; x++) {
		y = m * x + c;
		glVertex2f(x, y);
	}
	glEnd();
	glFlush();
}
void ddaline(int x1, int y1, int x2, int y2) {
	glClear(GL_COLOR_BUFFER_BIT);
	// glColor3f(0.0,0.0,1.0);
	glBegin(GL_POINTS);
	int steps, xi, yi, x, y;
	int dx = x2 - x1;
	int dy = y2 - y1;
	if (abs(dx) > abs(dy)) {
		steps = abs(dx);
	} else
		steps = abs(dy);

	xi = dx / steps;
	yi = dy / steps;
	x = x1;
	y = y1;

	while (x <= x2 && y <= y2) {
		glVertex2f(x, y);
		x = x + xi;
		y = y + yi;
		x++;
		y++;
	}
	glEnd();
	glFlush();
}

void myinit() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 449.0, 0.0, 449.0);
}
int main(int argc, char **argv) {
	glutInit(&argc, argv); // Initialize GLUT
	glutCreateWindow(
		"OpenGL Setup Test");	 // Create a window with the given title
	glutInitWindowSize(640, 320); // Set the window's initial width & height
	glutInitWindowPosition(
		50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(
		display); // Register display callback handler for window re-paint

	myinit();
	glutMainLoop(); // Enter the infinitely event-processing loop
	return 0;
}
