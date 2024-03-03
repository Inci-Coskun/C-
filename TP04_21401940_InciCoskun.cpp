#include <GL/freeglut.h>
#include <windows.h>
#include <math.h>

void init();
void showLapin();
void showTortue();
void display();
void racePist();


void main(int argc, char* argv[]) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 500);
	glutCreateWindow("Lapin et Tortue");
	glutPositionWindow(60, 75);
	init();
	glutDisplayFunc(display);
	glutMainLoop();

}



// lapin
void showLapin() {

	float x, y;
	float t;

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(50, 210 + 40);
	glVertex2i(60, 210 + 40);
	glVertex2i(70, 220 + 40);
	glVertex2i(70, 230 + 40);
	glVertex2i(60, 240 + 40);
	glVertex2i(50, 240 + 40);
	glVertex2i(40, 230 + 40);
	glVertex2i(40, 220 + 40);
	glEnd();
	glBegin(GL_LINES);

	for (t = 0; t <= 360; t++) {
		x = 78 + 9 * cos(t);
		y = 273 + 9 * sin(t);
		glVertex2f(70, 260);
		glVertex2f(x, y);
	}

	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex2i(78, 273);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);

	for (t = 0; t <= 360; t++) {
		x = 74 + 4 * cos(t);
		y = 295 + 4 * sin(t);
		glVertex2f(70, 270);
		glVertex2f(x, y);
	}

	glEnd();

}


// tortue
void showTortue() {

	int tortuepatte[] = { -2,6,22,30 };
	float x, y;
	float t;
	int i;

	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_LINES);

	for (t = 0; t <= 360; t++) {
		x = 50 + 22 * cos(t);
		y = 180 + 22 * sin(t);
		glVertex2f(50, 180);
		glVertex2f(x, y);
	}

	glEnd();
	glColor3f(1.0, 0.5, 0.0); //This covers the bottom half of the circle.
	glBegin(GL_POLYGON);
	glVertex2i(28, 180);
	glVertex2i(72, 180);
	glVertex2i(72, 158);
	glVertex2i(28, 158);
	glEnd();
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_LINES);

	for (t = 0; t <= 360; t++) {
		x = 82 + 7 * cos(t);
		y = 184 + 7 * sin(t);
		glVertex2f(72, 182);
		glVertex2f(x, y);
	}

	glEnd();

	for (i = 0; i < 4; i++) {
		glColor3f(0.5, 0.5, 0.5);
		glBegin(GL_POLYGON);
		glVertex2i(32 + tortuepatte[i], 170);
		glVertex2i(38 + tortuepatte[i], 170);
		glVertex2i(37 + tortuepatte[i], 180);
		glVertex2i(33 + tortuepatte[i], 180);
		glEnd();
	}

}


void init() {

	glClearColor(0.1, 0.8, 0.1, 1.0);
	glMatrixMode(GL_MODELVIEW);
	gluOrtho2D(0, 640, 0, 480);

}


void display() {

	glClear(GL_COLOR_BUFFER_BIT);
	racePist();
	showTortue();
	showLapin();
	glFlush();

}


// orange background with line
void racePist() {

	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1, 0.5, 0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 100.0);
	glVertex2f(1000.0, 100.0);
	glVertex2f(1000.0, 400.0);
	glVertex2f(0.0, 400.0);
	glFlush();
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2f(106.0, 100.0);
	glVertex2f(106.0, 400.0);
	glFlush();
	glEnd();
}