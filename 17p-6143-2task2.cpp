#include <GL/glut.h>
using namespace std;
int state1 = 0;
int state2 = 0;

double randomR = (-10) + rand() / (RAND_MAX / (10 - (-10) + 1) + 1);
double randomS = (-10) + rand() / (RAND_MAX / (10 - (-10) + 1) + 1);
double randomA = (-10) + rand() / (RAND_MAX / (10 - (-10) + 1) + 1);
double randomB = (-10) + rand() / (RAND_MAX / (10 - (-10) + 1) + 1);
float x1 = randomA;
float y = randomB;

float x2 = randomR;
float y2 = randomS;
void display()
{
	glClearColor(0, 0, 0, 0.0); // Background (R, G, B, alpha), all b/w 0 and 1
	glClear(GL_COLOR_BUFFER_BIT); // Clear output buffer to window color
	glColor3f(1, 0, 0);
	glLoadIdentity();
	//glRotatef(angleCube2, 1.0f, 0.0f, 0.0f);
	//glRotatef(angleCube, 0.0f, 1.0f, 0.0f);// Drawing color (R, G, B), all b/w 0 and 1
	glBegin(GL_TRIANGLES);// begin drawing a polyg
	glVertex3f(x1, y, 5);
	glVertex3f(x1 + 2, y, 5);
	glVertex3f(x1 + 1, y + 3, 3);

	glColor3f(0, 1, 0);

	glVertex3f(x1, y, 1);
	glVertex3f(x1, y, 5);
	glVertex3f(x1 + 1, y + 3, 3);

	glColor3f(0, 0, 1);
	glVertex3f(x1 + 2, y, 5);
	glVertex3f(x1 + 2, y, 1);
	glVertex3f(x1 + 1, y + 3, 3);

	glColor3f(1, 1, 0);

	glVertex3f(x1 + 2, y, 1);
	glVertex3f(x1, y, 1);
	glVertex3f(x1 + 1, y + 3, 3);

	glColor3f(0, 1, 1);
	glVertex3f(x1, y, 5);
	glVertex3f(x1 + 2, y, 5);
	glVertex3f(x1 + 2, y, 1);

	glColor3f(1, 0, 1);
	glVertex3f(x1, y, 5);
	glVertex3f(x1, y, 1);
	glVertex3f(x1 + 2, y, 1);


	glEnd(); // end drawing the polygon
	glBegin(GL_TRIANGLES);// begin drawing a polyg
	glVertex3f(x2, y2, 5);
	glVertex3f(x2, y2 + 1, 5);
	glVertex3f(x2 + 2, y2 + 1, 5);

	glColor3f(0, 1, 0);

	glVertex3f(x2, y2, 5);
	glVertex3f(x2, y2 + 2, 5);
	glVertex3f(x2 + 2, y2, 5);

	glColor3f(0, 0, 1);
	glVertex3f(x2 + 2, y2, 5);
	glVertex3f(x2 + 2, y2 + 2, 5);
	glVertex3f(x2 + 2, y2, 3);

	glColor3f(1, 0, 0);

	glVertex3f(x2 + 2, y2, 3);
	glVertex3f(x2 + 2, y2 + 2, 5);
	glVertex3f(x2 + 2, y2 + 2, 3);

	glColor3f(0, 1, 0);
	glVertex3f(x2, y2, 5);
	glVertex3f(x2, y2 + 2, 5);
	glVertex3f(x2, y2, 3);

	glColor3f(0, 0, 1);
	glVertex3f(x2, y2 + 2, 5);
	glVertex3f(x2, y2 + 2, 3);
	glVertex3f(x2, y2, 3);

	glColor3f(1, 0, 0);
	glVertex3f(x2 + 2, y2 + 2, 3);
	glVertex3f(x2, y2 + 2, 3);
	glVertex3f(x2, y2, 3);
	glColor3f(0, 1, 0);

	glVertex3f(x2 + 2, y2, 3);
	glVertex3f(x2, y2, 3);
	glVertex3f(x2 + 2, y2 + 2, 3);

	glColor3f(0, 0, 1);
	glVertex3f(x2 + 2, y2 + 2, 3);
	glVertex3f(x2, y2 + 2, 3);
	glVertex3f(x2, y2 + 2, 5);
	glColor3f(1, 0, 0);
	glVertex3f(x2 + 2, y2 + 2, 5);
	glVertex3f(x2 + 2, y2 + 2, 3);
	glVertex3f(x2, y2 + 2, 5);

	glColor3f(0, 1, 0);
	glVertex3f(x2, y2, 3);
	glVertex3f(x2 + 1, y2 + 2, 3);
	glVertex3f(x2, y2, 5);
	glColor3f(0, 0, 1);
	glVertex3f(x2, y2, 5);
	glVertex3f(x2 + 1, y2, 5);
	glVertex3f(x2 + 1, y2, 3);
	glEnd(); // end drawing the polygon
	glutSwapBuffers(); // force OpenGL to empty the buffer and render
}
void Reshape(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10, 10, -10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
}
void timer(int x)
{

	if (x2 - x1 < 1 and y2 - y < 1)
	{
		x2 = x2 + 0.01;
		y2 = y2 + 0.01;
		x1 = x1 + 0.02;
		y = y + 0.02;
	}

	if (x2 >= 8 or y2 >= 8 and state2 != 1)
	{
		state2 = 1;
	}
	if (x1 >= 8 or y >= 8 and state1 != 1)
	{
		state1 = 1;
	}
	if (x1 <= 2 or y <= 2 and state1 != 0)
	{
		state1 = 0;
	}
	if (x2 <= 2 or y2 <= 2 and state2 != 0)
	{
		state2 = 0;
	}
	if (state1 != 1)
	{
		x2 = x2 + 0.02;
		y2 = y2 + 0.02;
	}
	if (state1 == 1)
	{
		x2 = x2 - 0.02;
		y2 = y2 - 0.02;
	}
	if (state2 != 1)
	{
		x1 = x1 + 0.02;
		y = y + 0.02;
	}
	if (state2 == 1)
	{
		x2 = x2 - 0.02;
		y2 = y2 - 0.02;
	}



	glutPostRedisplay();
	glutTimerFunc(1000 / 25., timer, 0);

}
int main(int argc, char **argv)
{
	glutInit(&argc, argv); // Initializes GLUT Toolkit
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(300, 100);
	//glutInitDisplayMode(GL_RGB | GL_DOUBLE);
	glutCreateWindow("task 4");
	glutReshapeFunc(Reshape);
	glutDisplayFunc(display);// Register call back routine for window updates
	glutTimerFunc(0, timer, 0);
	glutMainLoop(); // Starts the toolkit loop (infinite)
}