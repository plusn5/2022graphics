#include <GL/glut.h>
void myTeapot(float x, float y)
{
     glPushMatrix();                ///push�ƥ��x�}
        glTranslatef( x, y, 0);
        glutSolidTeapot(0.3);
     glPopMatrix();                 ///pop�٭�x�}

}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,0);

    myTeapot (+0.5, +0.5);
    myTeapot (+0.5, -0.5);
    myTeapot (-0.5, -0.5);
    myTeapot (-0.5, +0.5);

    glutSwapBuffers();
}
int main(int argc, char **argv)
{
     glutInit(&argc, argv);
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
     glutCreateWindow("week04");
     glutDisplayFunc(display);

     glutMainLoop();

     return 0;

}
