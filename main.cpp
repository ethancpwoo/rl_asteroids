#include <GL/glut.h>
#include <cmath>

float asteroidX = 0.0f;
float asteroidY = 0.0f;

void drawAsteroid()
{
    glBegin(GL_POLYGON);

    for(int i = 0; i < 10; i += 36)
    {
        float angle = i * (M_PI / 180.0);
        float x = asteroidX + 0.1 * cos(angle);
        float y = asteroidY + 0.1 * sin(angle);
        glVertex2f(x, y);
    }

    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

void update(int value) {
    // Update the asteroid's position (you can add more sophisticated movement)
    asteroidX += 0.001f;
    asteroidY += 0.001f;

    // Redraw the scene
    glutPostRedisplay();

    // Call the update function again after a delay
    glutTimerFunc(16, update, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowSize(800, 600);
    glutCreateWindow("Asteroids");

    return 0;
}