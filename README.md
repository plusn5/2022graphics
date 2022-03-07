# 2022graphics

week03
```c++
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);///代表黃色

    glutSolidTeapot(0.3);///實心茶壺

    glutSwapBuffers();///交換2倍的buffer
}
int main(int argc, char **argv)
{
     glutInit(&argc, argv); ///初始化
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
     glutCreateWindow("week03的視窗");
     glutDisplayFunc(display);

     glutMainLoop();

     return 0;

}


```

```c++
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);///代表黃色

    //glutSolidTeapot(0.3);///實心茶壺
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);    glVertex2f(0.0f, 1.0f);
        glColor3f(0.0f, 1.0f, 0.0f);    glVertex2f(0.87f, -0.5f);
        glColor3f(0.0f, 0.0f, 1.0f);    glVertex2f(-0.87f, -0.5f);
    glEnd();

    glutSwapBuffers();///交換2倍的buffer
}
int main(int argc, char **argv)
{
     glutInit(&argc, argv); ///初始化
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
     glutCreateWindow("week03的視窗");
     glutDisplayFunc(display);

     glutMainLoop();

     return 0;

}


```
