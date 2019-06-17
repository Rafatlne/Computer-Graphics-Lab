#include<windows.h>
#include<GL/glut.h>
#include<math.h>


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    /*
    -------------------
        CIRCLE
    -------------------
    */

    glBegin(GL_POLYGON);
    glColor3f (1.0, 0.0, 0.0);
    for(int i=1;i<360;i++){
        glVertex2f(20+9.5*cos(3.14159*i/180),20+9.5*sin(3.14159*i/180));
    }
    glEnd();
    glFlush ();


    /*
    -------------------
        TRIANGLES
    -------------------
    */
    ///First Triangle
    glBegin(GL_POLYGON);
    glColor3f (1.000, 1.0, 1.0);
    glVertex2f(15,12);
    glVertex2f(17,19);
    glVertex2f(20,17);
    glEnd();
    glFlush ();

    ///Second Triangle
    glBegin(GL_POLYGON);
    glColor3f (1.000, 1.0, 1.0);
    glVertex2f(25,12);
    glVertex2f(20,17);
    glVertex2f(23,19);
    glEnd();
    glFlush ();

    ///Third Triangle
    glBegin(GL_POLYGON);
    glColor3f (1.000, 1.0, 1.0);
    glVertex2f(23,19);
    glVertex2f(29,23);
    glVertex2f(22,23);
    glEnd();
    glFlush ();

    ///Forth Triangle
    glBegin(GL_POLYGON);
    glColor3f (1.000, 1.0, 1.0);
    glVertex2f(22,23);
    glVertex2f(20,29);
    glVertex2f(18,23);
    glEnd();
    glFlush ();

    ///Fifth Triangle
    glBegin(GL_POLYGON);
    glColor3f (1.000, 1.0, 1.0);
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
    glColor3f (1.000, 1.0, 1.0);
    glVertex2f(17,19);
    glVertex2f(20,17);
    glVertex2f(23,19);
    glVertex2f(22,23);
    glVertex2f(18,23);
    glEnd();
    glFlush ();

    /*
    -------------------
        T-SHAPE
    -------------------
    */

    ///Vertical Rectangle
    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.0, 0.0);
    glVertex2f(19,15);
    glVertex2f(21,15);
    glVertex2f(21,20);
    glVertex2f(19,20);
    glEnd();
    glFlush ();

    ///Horizontal Rectangle
    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.0, 0.0);
    glVertex2f(17,20);
    glVertex2f(23,20);
    glVertex2f(23,22);
    glVertex2f(17,22);
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
    glutCreateWindow ("Star Inside the Circle");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
