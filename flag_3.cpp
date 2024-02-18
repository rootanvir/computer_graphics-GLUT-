#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void canada()
{

    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.8f,0.1f);
    glVertex2f(0.8f,0.7f);
    glVertex2f(0.1f,0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,.0f,.0f);
    glVertex2f(.1f,0.1f);
    glVertex2f(.26f,0.1f);
    glVertex2f(0.26f,.7f);
    glVertex2f(.1f,.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,.0f,.0f);
    glVertex2f(.64f,0.1f);
    glVertex2f(.8f,0.1f);
    glVertex2f(0.8f,.7f);
    glVertex2f(.64f,.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,.0f,.0f);
    glVertex2f(.42f,0.36f);//1
    glVertex2f(.38f,.34f);//2
    glVertex2f(0.38f,.366f);//3
    glVertex2f(.32f,.4f);//4
    glVertex2f(.34f,0.42f);//5
    glVertex2f(0.32f,.46f);//6
    glVertex2f(.36f,.44f);//7
    glVertex2f(.36f,0.46f);//8
    glVertex2f(0.38f,.44f);//9
    glVertex2f(.4f,.46f);//10
    glEnd();//

    glBegin(GL_POLYGON);
    glColor3f(1.0f,.0f,.0f);
    glVertex2f(.4f,0.46f);//1
    glVertex2f(.38f,.52f);//2
    glVertex2f(0.42f,.5f);//3
    glVertex2f(.44f,.56f);//4
    glVertex2f(.46f,0.5f);//5
    glVertex2f(0.5f,.52f);//6
    glVertex2f(.48f,.46f);//7
    glVertex2f(.48f,0.44f);//8
    glVertex2f(.48f,0.36f);//9
    glVertex2f(.46f,0.34f);//9
    glVertex2f(.44f,0.34f);//9
    glVertex2f(.42f,0.36f);//10
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,.0f,.0f);
    glVertex2f(.48f,0.36f);//1
    glVertex2f(.48f,.46f);//2
    glVertex2f(0.5f,.44f);//3
    glVertex2f(.52f,.46f);//4
    glVertex2f(.52f,0.44f);//5
    glVertex2f(0.56f,.46f);//6
    glVertex2f(.54f,.42f);//7
    glVertex2f(.56f,0.4f);//8
    glVertex2f(.52f,0.36f);//8
    glVertex2f(.52f,0.34f);//9
    glVertex2f(.42f,0.36f);//10
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,.0f,.0f);
    glVertex2f(.46f,0.34f);
    glVertex2f(.46f,0.26f);
    glVertex2f(.43f,0.26f);
    glVertex2f(.43f,0.36f);
    glEnd();

}
void uk()
{
        glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3ub(1, 34, 105);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.8f,0.1f);
    glVertex2f(-0.8f,0.7f);
    glVertex2f(-0.1f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.18f,0.1f);
    glVertex2f(-0.8f,0.6f);
    glVertex2f(-0.8f,0.7f);
    glVertex2f(-0.72f,0.7f);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.1f,0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.15f,0.7f);
    glVertex2f(-0.8f,0.23f);
    glVertex2f(-0.8f,0.1f);
    glVertex2f(-0.7f,0.1f);
    glVertex2f(-0.1f,0.57f);
    glVertex2f(-0.1f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-0.1f,0.7f);
    glVertex2f(-0.8f,0.16f);
    glVertex2f(-0.8f,0.1f);
    glVertex2f(-0.1f,0.64f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.1f,0.16f);
    glVertex2f(-0.8f,0.7f);
    glVertex2f(-0.8f,0.64f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-.54f,0.7f);
    glVertex2f(-.54f,0.1f);
    glVertex2f(-0.36f,.1f);
    glVertex2f(-.36f,.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-.1f,0.5f);
    glVertex2f(-.8f,0.5f);
    glVertex2f(-0.8f,.3f);
    glVertex2f(-.1f,.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-.4f,0.1f);
    glVertex2f(-.5f,0.1f);
    glVertex2f(-0.5f,.7f);
    glVertex2f(-.4f,.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-.1f,0.35f);
    glVertex2f(-.1f,0.45f);
    glVertex2f(-0.8f,.45f);
    glVertex2f(-.8f,.35f);
    glEnd();
}

void libera()
{

    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.8f,-0.1f);
    glVertex2f(-0.8f,-0.7f);
    glVertex2f(-0.1f,-0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(187, 12, 43);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.8f,-0.1f);
    glVertex2f(-0.8f,-0.15f);
    glVertex2f(-0.1f,-0.15f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(187, 12, 43);
    glVertex2f(-0.1f,-0.2f);
    glVertex2f(-0.8f,-0.20f);
    glVertex2f(-0.8f,-0.25f);
    glVertex2f(-0.1f,-0.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(187, 12, 43);
    glVertex2f(-0.1f,-0.3f);
    glVertex2f(-0.8f,-0.3f);
    glVertex2f(-0.8f,-0.35f);
    glVertex2f(-0.1f,-0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(187, 12, 43);
    glVertex2f(-0.1f,-0.4f);
    glVertex2f(-0.8f,-0.4f);
    glVertex2f(-0.8f,-0.45f);
    glVertex2f(-0.1f,-0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(187, 12, 43);
    glVertex2f(-0.1f,-0.5f);
    glVertex2f(-0.8f,-0.5f);
    glVertex2f(-0.8f,-0.55f);
    glVertex2f(-0.1f,-0.55f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(187, 12, 43);
    glVertex2f(-0.1f,-0.6f);
    glVertex2f(-0.8f,-0.6f);
    glVertex2f(-0.8f,-0.65f);
    glVertex2f(-0.1f,-0.65f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(187, 12, 43);
    glVertex2f(-0.1f,-0.7f);
    glVertex2f(-0.8f,-0.7f);
    glVertex2f(-0.8f,-0.75f);
    glVertex2f(-0.1f,-0.75f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);
    glVertex2f(-0.55f,-0.1f);
    glVertex2f(-0.55f,-0.35f);
    glVertex2f(-0.8f,-0.35f);
    glVertex2f(-0.8f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
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
}

void samoa()
{

    glLineWidth(2);
    glBegin(GL_POLYGON);
    glColor3ub(206, 17, 39);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.8f,-0.1f);
    glVertex2f(0.8f,-0.7f);
    glVertex2f(0.1f,-0.7f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(10,58,128);
    glVertex2f(.1f,-0.1f);
    glVertex2f(.45f,-0.1f);
    glVertex2f(.45f,-0.4f);
    glVertex2f(.1f,-0.4f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.24f,-0.16f);//1
    glVertex2f(0.25f,-0.14f);//2
    glVertex2f(0.26f,-0.16f);//3
    glVertex2f(0.28f,-0.16f);//4
    glVertex2f(0.26f,-0.175f);//5
    glVertex2f(0.27f,-0.20f);//6
    glVertex2f(0.248f,-0.18f);//7
    glVertex2f(0.227f,-0.20f);//8
    glVertex2f(0.24f,-0.187f);//9
    glVertex2f(0.22f,-0.16f);//10
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.24f,-0.34f);//1
    glVertex2f(0.25f,-0.32f);//2
    glVertex2f(0.26f,-0.34f);//3
    glVertex2f(0.28f,-0.34f);//4
    glVertex2f(0.26f,-0.355f);//5
    glVertex2f(0.27f,-0.38f);//6
    glVertex2f(0.248f,-0.36f);//7
    glVertex2f(0.227f,-0.38f);//8
    glVertex2f(0.24f,-0.367f);//9
    glVertex2f(0.22f,-0.34f);//10
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.32f,-0.22f);//1
    glVertex2f(0.33f,-0.20f);//2
    glVertex2f(0.34f,-0.22f);//3
    glVertex2f(0.36f,-0.22f);//4
    glVertex2f(0.34f,-0.235f);//5
    glVertex2f(0.35f,-0.26f);//6
    glVertex2f(0.328f,-0.24f);//7
    glVertex2f(0.307f,-0.26f);//8
    glVertex2f(0.32f,-0.247f);//9
    glVertex2f(0.3f,-0.22f);//10
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.16f,-0.22f);//1
    glVertex2f(0.17f,-0.20f);//2
    glVertex2f(0.18f,-0.22f);//3
    glVertex2f(0.20f,-0.22f);//4
    glVertex2f(0.18f,-0.235f);//5
    glVertex2f(0.19f,-0.26f);//6
    glVertex2f(0.168f,-0.24f);//7
    glVertex2f(0.147f,-0.26f);//8
    glVertex2f(0.16f,-0.247f);//9
    glVertex2f(0.14f,-0.22f);//10
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.29f,-0.28f);//1
    glVertex2f(0.3f,-0.26f);//2
    glVertex2f(0.31f,-0.28f);//3
    glVertex2f(0.33f,-0.28f);//4
    glVertex2f(0.31f,-0.295f);//5
    glVertex2f(0.32f,-0.32f);//6
    glVertex2f(0.298f,-0.3f);//7
    glVertex2f(0.277f,-0.32f);//8
    glVertex2f(0.29f,-0.307f);//9
    glVertex2f(0.27f,-0.28f);//10
    glEnd();
}

void display() {
    glClearColor(0.569f, 0.569f, 0.569f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    glLineWidth(2);
    uk();
    canada();
    libera();
    samoa();

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
