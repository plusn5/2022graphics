#include <stdio.h>
#include <GL/glut.h>
int N=0;   ///還沒畫頂點
int x[1000],y[1000];
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<N; i++){  ///畫頂點
        glVertex2f((x[i]-150)/150.0 , -(y[i]-150)/150.0);

    }
    glEnd();
    glutSwapBuffers();
}
//void mouse(int button, int state, int mouseX, int mouseY)
void motion(int mouseX,int mouseY)
{
    //if(state==GLUT_DOWN){   ///如果按下滑鼠
        N++;
        x[N-1]=mouseX;      ///新座標x
        y[N-1]=mouseY;      ///新座標y
        printf("按下滑鼠，得到新座標 %d %d\n",x[N-1],y[N-1]);
    //}
    display();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week05 複習 mouse");

    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();

}
