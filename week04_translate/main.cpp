#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();                ///push�ƥ��x�}
        glTranslatef(0.3, 0.2, 0);
        glColor3f(1,0,0);
        glutSolidTeapot(0.3);
    glPopMatrix();                 ///pop�٭�x�}

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
