#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);///�N������

    glutSolidTeapot(0.3);///��߯���

    glutSwapBuffers();///�洫2����buffer
}
int main(int argc, char **argv)
{
     glutInit(&argc, argv); ///��l��
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
     glutCreateWindow("week03������");
     glutDisplayFunc(display);

     glutMainLoop();

     return 0;

}