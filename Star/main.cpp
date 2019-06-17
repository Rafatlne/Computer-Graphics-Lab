#include<windows.h>
#include<GL/glut.h>
#include<math.h>


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    /*
    -------------------
        TRIANGLES
    -------------------
    */
    ///First Triangle
    glBegin(GL_POLYGON);
    glColor3f (0.000, 0.0, 1.0);
    glVertex2f(15,12);
    glVertex2f(17,19);
    glVertex2f(20,17);
    glEnd();
    glFlush ();

    ///Second Triangle
    glBegin(GL_POLYGON);
    glColor3f (0.000, 0.0, 1.0);
    glVertex2f(25,12);
    glVertex2f(20,17);
    glVertex2f(23,19);
    glEnd();
    glFlush ();

    ///Third Triangle
    glBegin(GL_POLYGON);
    glColor3f (0.000, 0.0, 1.0);
    glVertex2f(23,19);
    glVertex2f(29,23);
    glVertex2f(22,23);
    glEnd();
    glFlush ();

    ///Forth Triangle
    glBegin(GL_POLYGON);
    glColor3f (0.000, 0.0, 1.0);
    glVertex2f(22,23);
    glVertex2f(20,29);
    glVertex2f(18,23);
    glEnd();
    glFlush ();

    ///Fifth Triangle
    glBegin(GL_POLYGON);
    glColor3f (0.000, 0.0, 1.0);
    glVertex2f(18,23);
    glVertex2f(11,23);
    glVertex2f(17,19);
    glEnd();
    glFlush ();

    /*
    -------------------
        PENTAGON
    -------------------
    */
    glBegin(GL_POLYGON);
    glColor3f (0.000, 0.0, 1.0);
    glVertex2f(17,19);
    glVertex2f(20,17);
    glVertex2f(23,19);
    glVertex2f(22,23);
    glVertex2f(18,23);
    glEnd();
    glFlush ();

}

void init(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,40.0,0.0,40.0,0,50); //graph matrix


}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600); //display size
    glutInitWindowPosition (20, 10);
    glutCreateWindow ("Star or Pentagon");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
