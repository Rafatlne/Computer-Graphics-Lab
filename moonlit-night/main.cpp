#include<windows.h>
#include<GL/glut.h>
#include<math.h>


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_POINTS);
    glColor3f(1,1,1);
    for(int i=1;i<1300;i++)
    {
        glVertex2i(rand() % 100,rand() % 100);
    }

    glEnd();


   /// moon
    glBegin(GL_POLYGON);
     glColor3f (1, 1, 1);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(30+3.5*cos(3.14159*i/180),50+3.5*sin(3.14159*i/180));       //main point + radius
        }
                                                                                //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush ();

}

void init(void)
{
    glClearColor(0,0,0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,100.0,0.0,60.0,0,50); //graph matrix


}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 600); //display size
    glutInitWindowPosition (10, 10);
    glutCreateWindow ("moonlit night");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
