#include<GL/glut.h>
#include <random>
#include<cmath>
float x = -200;
float z = 0;
float y = 75;
float color = 0.1;
GLfloat angleCube = 0.0f;
GLfloat angleCube2 = 0.0f;
double camera_angle;
void display()
{

	glClear(GL_COLOR_BUFFER_BIT);
	double randomR, randomG, randomB;
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	double eyex = 25.0*cos(camera_angle*3.142 / 180);
	double eyez = 25.0*sin(camera_angle*3.142 / 180);
	gluLookAt(eyex,25 , -eyez, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glRotatef(angleCube2, 1.0f, 0.0f, 0.0f);
	glRotatef(angleCube, 0.0f, 1.0f, 0.0f);
	int i = 0; int j = 0; int k = 0;
	while (i < 10)
	{
		randomR = (double)rand() / (RAND_MAX);
		randomG = (double)rand() / (RAND_MAX);
		randomB = (double)rand() / (RAND_MAX);

		glColor3f(randomR, randomG, randomB);
		z = 0; y = 75;
		glBegin(GL_POLYGON);
		//FRONT
		glVertex3f(x, y, z);
		glVertex3f(x, y - 5, z);
		glVertex3f(x + 5, y, z);
		glVertex3f(x + 5, y - 5, z);

		//Back
		glVertex3f(x, y, z + 5);
		glVertex3f(x, y - 5, z + 5);
		glVertex3f(x + 5, y, z + 5);
		glVertex3f(x + 5, y - 5, z + 5);

		//Right Side

		glVertex3f(x + 5, y, z);
		glVertex3f(x + 5, y - 5, z);
		glVertex3f(x + 5, y, z + 5);
		glVertex3f(x + 5, y - 5, z + 5);

		//Left Side

		glVertex3f(x, y, z);
		glVertex3f(x, y - 5, z);
		glVertex3f(x, y, z + 5);
		glVertex3f(x, y - 5, z + 5);

		//Top

		glVertex3f(x, y, z);
		glVertex3f(x + 5, y, z);
		glVertex3f(x, y, z + 5);
		glVertex3f(x + 5, y, z + 5);

		//Base
		glVertex3f(x, y - 5, z);
		glVertex3f(x + 5, y - 5, z);
		glVertex3f(x, y - 5, z + 5);
		glVertex3f(x + 5, y - 5, z + 5);

		glEnd();
		j = 0; y = y - 15;
		while (j < 10)
		{
			randomR = (double)rand() / (RAND_MAX);
			randomG = (double)rand() / (RAND_MAX);
			randomB = (double)rand() / (RAND_MAX);

			glColor3f(randomR, randomG, randomB);
			glBegin(GL_POLYGON);
			//FRONT
			glVertex3f(x, y, z);
			glVertex3f(x, y - 5, z);
			glVertex3f(x + 5, y, z);
			glVertex3f(x + 5, y - 5, z);

			//Back
			glVertex3f(x, y, z + 5);
			glVertex3f(x, y - 5, z + 5);
			glVertex3f(x + 5, y, z + 5);
			glVertex3f(x + 5, y - 5, z + 5);

			//Right Side

			glVertex3f(x + 5, y, z);
			glVertex3f(x + 5, y - 5, z);
			glVertex3f(x + 5, y, z + 5);
			glVertex3f(x + 5, y - 5, z + 5);

			//Left Side

			glVertex3f(x, y, z);
			glVertex3f(x, y - 5, z);
			glVertex3f(x, y, z + 5);
			glVertex3f(x, y - 5, z + 5);

			//Top

			glVertex3f(x, y, z);
			glVertex3f(x + 5, y, z);
			glVertex3f(x, y, z + 5);
			glVertex3f(x + 5, y, z + 5);

			//Base
			glVertex3f(x, y - 5, z);
			glVertex3f(x + 5, y - 5, z);
			glVertex3f(x, y - 5, z + 5);
			glVertex3f(x + 5, y - 5, z + 5);

			glEnd();
			k = 0; z = z + 15;
			while (k < 10)
			{
				randomR = (double)rand() / (RAND_MAX);
				randomG = (double)rand() / (RAND_MAX);
				randomB = (double)rand() / (RAND_MAX);

				glColor3f(randomR, randomG, randomB);
				glBegin(GL_POLYGON);
				//FRONT
				glVertex3f(x, y, z);
				glVertex3f(x, y - 5, z);
				glVertex3f(x + 5, y, z);
				glVertex3f(x + 5, y - 5, z);

				//Back
				glVertex3f(x, y, z + 5);
				glVertex3f(x, y - 5, z + 5);
				glVertex3f(x + 5, y, z + 5);
				glVertex3f(x + 5, y - 5, z + 5);

				//Right Side

				glVertex3f(x + 5, y, z);
				glVertex3f(x + 5, y - 5, z);
				glVertex3f(x + 5, y, z + 5);
				glVertex3f(x + 5, y - 5, z + 5);

				//Left Side

				glVertex3f(x, y, z);
				glVertex3f(x, y - 5, z);
				glVertex3f(x, y, z + 5);
				glVertex3f(x, y - 5, z + 5);

				//Top

				glVertex3f(x, y, z);
				glVertex3f(x + 5, y, z);
				glVertex3f(x, y, z + 5);
				glVertex3f(x + 5, y, z + 5);

				//Base
				glVertex3f(x, y - 5, z);
				glVertex3f(x + 5, y - 5, z);
				glVertex3f(x, y - 5, z + 5);
				glVertex3f(x + 5, y - 5, z + 5);

				glEnd();
				z = z + 15;
				k++;

			}
			z = 0;
			y = y + 15;
			j++;

		}
		i++;
		x = x + 15;

	}

	glutSwapBuffers();

}

void reshape(GLsizei width, GLsizei height) {
	glOrtho(-500, 500, -515, 585, -300, 300);
}
void spinDisplay(void)
{
	camera_angle = camera_angle + 0.2;
	if (camera_angle > 360.0)
		camera_angle = camera_angle - 360;
	glutPostRedisplay();
}
void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(150, 1, 0.1, 100.0);
}
void mouse(int button, int state, int key)
{
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN)
			//camera_angle = camera_angle + 0.2;
			glutIdleFunc(spinDisplay);
		break;
		
	case GLUT_RIGHT_BUTTON:
		if(state == GLUT_DOWN)
			camera_angle = camera_angle - 0.2;
			glutIdleFunc(NULL);
		break;
	default:
		break;
	}
}
void keyboard(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_RIGHT: {
		angleCube += 0.3f;
		break;
	}
	case GLUT_KEY_LEFT: {
		angleCube -= 0.3f;
		break;
	}
	case GLUT_KEY_UP: {
		angleCube2 += 0.3f;
		break;
	}
	case GLUT_KEY_DOWN: {
		angleCube2 -= 0.3f;
		break;
	}
	}
	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(500, 500);
	glutCreateWindow("TASK 3");
	glutInitDisplayMode(GLUT_DOUBLE);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutSpecialFunc(mouse);
	glutSpecialFunc(keyboard);
	glutMainLoop();
}