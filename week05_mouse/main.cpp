#include <stdio.h>
#include <GL/glut.h>
int N=0;   ///�٨S�e���I
int x[1000],y[1000];
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<N; i++){  ///�e���I
        glVertex2f((x[i]-150)/150.0 , -(y[i]-150)/150.0);

    }
    glEnd();
    glutSwapBuffers();
}
//void mouse(int button, int state, int mouseX, int mouseY)
void motion(int mouseX,int mouseY)
{
    //if(state==GLUT_DOWN){   ///�p�G���U�ƹ�
        N++;
        x[N-1]=mouseX;      ///�s�y��x
        y[N-1]=mouseY;      ///�s�y��y
        printf("���U�ƹ��A�o��s�y�� %d %d\n",x[N-1],y[N-1]);
    //}
    display();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week05 �Ʋ� mouse");

    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();

}
