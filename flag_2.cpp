#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void qatar()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f); // Maroon color
    glBegin(GL_POLYGON);
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.1f, 0.1f);
    glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.9f, 0.9f);
    glEnd();

    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.50f, 0.15f, 0.18f); // Maroon color
    glBegin(GL_POLYGON);

    glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.7f, 0.9f);
    glVertex2f(-0.6f, 0.85f);
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.6f, 0.75f);
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.6f, 0.65f);
    glVertex2f(-0.7f, 0.6f);
    glVertex2f(-0.6f, 0.55f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.6f, 0.45f);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.6f, 0.35f);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.6f, 0.25f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.6f, 0.15f);
    glVertex2f(-0.7f, 0.1f);
    glVertex2f(-0.1f, 0.1f);
    glVertex2f(-0.1f, 0.9f);
    //glVertex2f(-0.1f, 0.9f);
    glEnd();

}

void south_africa()
{

    glColor3f(0.0f, 0.4f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.9f, 0.1f);
    glVertex2f(0.9f, 0.9f);
    glVertex2f(0.1f, 0.9f);
    glEnd();


    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.1f, 0.15f);
    glVertex2f(0.1f, 0.85f);
    glVertex2f(0.34f, 0.5f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(0.1f, 0.8f);
    glVertex2f(0.3f, 0.5f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.2f, 0.9f);
    glVertex2f(0.4f, 0.6f);
    glVertex2f(0.9f, 0.6f);
    glVertex2f(0.9f, 0.9f);
    glEnd();

    glColor3f(1.0f, .0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.25f, 0.9f);
    glVertex2f(0.425f, 0.65f);
    glVertex2f(0.9f, 0.65f);
    glVertex2f(0.9f, 0.9f);
    glEnd();


    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.9f, 0.4f);
    glVertex2f(0.9f, 0.1f);
    glEnd();

    glColor3f(.0f, .0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.25f, 0.1f);
    glVertex2f(0.425f, 0.35f);
    glVertex2f(0.9f, 0.35f);
    glVertex2f(0.9f, 0.1f);
    glEnd();




}
void iceland()
{
    glColor3f(0.012f, 0.325f, 0.612f); // Maroon color
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.1f, -0.9f);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(-0.9f, -0.1f);
    glEnd();


    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(-0.9f, -0.6f);
    glVertex2f(-0.9f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.5f, -0.9f);
    glVertex2f(-0.7f, -0.9f);
    glVertex2f(-0.7f, -0.1f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, -0.45f);
    glVertex2f(-0.1f, -0.55f);
    glVertex2f(-0.9f, -0.55f);
    glVertex2f(-0.9f, -0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.55f, -0.1f);
    glVertex2f(-0.55f, -0.9f);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.65f, -0.1f);
    glEnd();
}
void jamaica()
{
    glColor3f(0.004f, 0.612f,0.216f); // Maroon color
    glBegin(GL_POLYGON);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(0.1f, -0.9f);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.9f, -0.1f);
    glEnd();

    glColor3f(0.0f, 0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.8f);
    glVertex2f(0.5f, -0.5f);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.9f, -0.8f);
    glVertex2f(0.5f, -0.5f);
    glEnd();

    glColor3f(1.0f, 1.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.9f, -0.8f);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.8f, -0.9f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.1f);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.9f, -0.1f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.2f, -0.9f);
    glVertex2f(0.1f, -0.9f);
    glVertex2f(0.1f, -0.8f);
    glEnd();




}

void display() {
    glClearColor(0.569f, 0.569f, 0.569f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    qatar();
    south_africa();
    iceland();
    jamaica();


     glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
