#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */


void display() {
    glClearColor(0.569f, 0.569f, 0.569f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)



    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.8f,0.1f);
    glVertex2f(-0.8f,0.7f);
    glVertex2f(-0.1f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.8f,0.1f);
    glVertex2f(-0.8f,0.22f);
    glVertex2f(-0.1f,0.22f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-0.1f,0.34f);
    glVertex2f(-0.8f,0.34f);
    glVertex2f(-0.8f,0.46f);
    glVertex2f(-0.1f,0.46f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-0.1f,0.58f);
    glVertex2f(-0.8f,0.58f);
    glVertex2f(-0.8f,0.7f);
    glVertex2f(-0.1f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.0f,.0f,1.f);
    glVertex2f(-.8f,0.1f);
    glVertex2f(-.45f,0.4f);
    glVertex2f(-0.8f,.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-.68f,0.42f);///1
    glVertex2f(-.72f,0.44f);///2
    glVertex2f(-0.68f,.44f);///3
    glVertex2f(-0.66f,.48f);///4
    glVertex2f(-0.64f,.44f);///5
    glVertex2f(-0.6f,.44f);///6
    glVertex2f(-0.64f,.42f);///7
    glVertex2f(-0.62f,.38f);///8
    glVertex2f(-0.66f,.4f);///9
    glVertex2f(-0.7f,.38f);///10
    glEnd();



    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.8f,0.1f);
    glVertex2f(0.8f,0.7f);
    glVertex2f(0.1f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(0.1f,0.3f);
    glVertex2f(0.8f,0.3f);
    glVertex2f(0.8f,0.1f);
    glVertex2f(0.1f,0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(1,56,147);
    glVertex2f(0.1f,0.5f);
    glVertex2f(0.8f,0.5f);
    glVertex2f(0.8f,0.7f);
    glVertex2f(0.1f,0.7f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(0.39,0.38); ///1st
    glVertex2f(0.31,0.46);  ///2nd
    glVertex2f(0.41,0.46);  ///3rd
    glVertex2f(0.45,0.56);  ///4th
    glVertex2f(0.49,0.46);  ///5th
    glVertex2f(0.59,0.46);   ///6th
    glVertex2f(0.51,0.38); ///7th
    glVertex2f(0.53,0.26); ///8th
    glVertex2f(0.45,0.34);  ///9th
    glVertex2f(0.36,0.26); ///10th
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(254,184,28);
    glVertex2f(0.39,0.38); ///1st
    glVertex2f(0.31,0.46);  ///2nd
    glVertex2f(0.41,0.46);  ///3rd
    glVertex2f(0.45,0.56);  ///4th
    glVertex2f(0.49,0.46);  ///5th
    glVertex2f(0.59,0.46);   ///6th
    glVertex2f(0.51,0.38); ///7th
    glVertex2f(0.53,0.259); ///8th
    glVertex2f(0.445,0.33);  ///9th
    glVertex2f(0.359,0.26); ///10th
    glEnd();


    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3ub(0, 127, 255);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.8f,-0.1f);
    glVertex2f(-0.8f,-0.7f);
    glVertex2f(-0.1f,-0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(254,184,28);
    glVertex2f(-0.7f,-0.24f);///1st
    glVertex2f(-0.74f,-0.2f);///2nd
    glVertex2f(-0.68f,-0.2f);///3rd
    glVertex2f(-0.66f,-0.13f);///4th
    glVertex2f(-0.635f,-0.2f);///5th
    glVertex2f(-0.58f,-0.2f);///6th
    glVertex2f(-0.62f,-0.24f);///7th
    glVertex2f(-0.6f,-0.3f);///8th
    glVertex2f(-0.66f,-0.26f);///9th
    glVertex2f(-0.72f,-0.3f); ///10th
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(254,184,28);
    glVertex2f(-0.15f,-0.1f);
    glVertex2f(-0.8f,-0.55f);
    glVertex2f(-0.8f,-0.7f);
    glVertex2f(-0.75f,-0.7f);
    glVertex2f(-0.1f,-0.25f);
    glVertex2f(-0.1f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(208, 15, 32);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.8f,-0.6f);
    glVertex2f(-0.8f,-0.7f);
    glVertex2f(-0.1f,-0.2f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3ub(194, 39, 47);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.8f,-0.1f);
    glVertex2f(0.8f,-0.7f);
    glVertex2f(0.1f,-0.7f);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 100, 50);
    glVertex2f(.31f,-0.34f);
    glVertex2f(.53f,-.54f);
    glVertex2f(.45f,-0.24f);
    glVertex2f(.37f,-0.54f);
    glVertex2f(.59f,-0.34f);
    glEnd();

     glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(870, 550); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
