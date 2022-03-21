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

```c
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();                ///push備份矩陣
        glTranslatef(0.3, 0.2, 0);
        glColor3f(1,0,0);
        glutSolidTeapot(0.3);
    glPopMatrix();                 ///pop還原矩陣

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

```

```c
#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSwapBuffers();
}
void mouse( int button, int state, int x, int y )
{
    printf("%d %d %d %d\n", button, state, x, y);
}
int main(int argc, char **argv)
{
     glutInit(&argc, argv);
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
     glutCreateWindow("week04 mouse");
     glutDisplayFunc(display);

     glutMouseFunc(mouse);

     glutMainLoop();

     return 0;

}

```

```c
#include <GL/glut.h>
#include <stdio.h>
int mouseX=0,mouseY=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,0);
    glPushMatrix();                ///push備份矩陣
        glTranslatef((mouseX-150)/150.0, -(mouseY-150)/150.0, 0);  
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void mouse( int button, int state, int x, int y )
{
    mouseX=x;
    mouseY=y;
}
int main(int argc, char **argv)
{
     glutInit(&argc, argv);
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
     glutCreateWindow("week04 mouse");
     glutDisplayFunc(display);

     glutMouseFunc(mouse);

     glutMainLoop();

     return 0;

}
```
```c
#include <GL/glut.h>
#include <stdio.h>
int mouseX=0,mouseY=0,N=0; ///N個點
int mx[100], my[100];
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);
    glBegin(GL_LINE_LOOP);
        for(int i=0; i<N; i++){
        glVertex2f( (mx[i]-150)/150.0, -(my[i]-150)/150.0, 0);
        }
    glEnd();
    glutSwapBuffers();
}
void mouse( int button, int state, int x, int y )
{
    mouseX=x;
    mouseY=y;
    if(state == GLUT_DOWN){

        printf("    glVertex2f((%d-150)-150.0 , -(%d-150)/150.0):\n",x,y);
        N++;
        mx[N-1]=x; my[N-1]=y;   ///陣列 備份座標
    }
}
int main(int argc, char **argv)
{
     glutInit(&argc, argv);
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
     glutCreateWindow("week04 mouse");
     glutDisplayFunc(display);

     glutMouseFunc(mouse);

     glutMainLoop();

     return 0;

}

```

##week05
```c
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(180, 0 , 0 , 1);
        glColor3f(1 ,1 ,0 );
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");

    glutDisplayFunc(display);
    glutMainLoop();

}

```
```c
#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();    ///備份矩陣
        glRotatef(angle, 0 , 0 , 1);  ///角度可改變
        glColor3f(1 ,1 ,0 );
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers(); ///還原矩陣
}
void motion(int x ,int y)
{
    angle= x;
    display();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");

    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();

}

```
```c
#include <GL/glut.h>
float angle=0;
float oldx=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();    ///備份矩陣
        glRotatef(angle, 0 , 0 , 1);  ///角度可改變
        glColor3f(1 ,1 ,0 );
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers(); ///還原矩陣
}
void mouse(int button, int state, int x, int y) ///滑鼠動作(按下,放開)
{
    oldx = x;
}
void motion(int x ,int y)   ///拖移不會改變位置
{
    angle+= (x-oldx);
    oldx = x;
    display();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();

}
```
