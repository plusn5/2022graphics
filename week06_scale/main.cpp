#include <GL/glut.h>
#include <stdio.h>
float x=0,y=0,z=0,scale=1.0,oldX,oldY;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        //glTranslatef((x-150)/150.0 , -(y-150)/150.0 ,z);
        glScalef(scale, scale, scale);
        glColor3f(1,1,0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void keyboard(unsigned char key,int mouseX , int mouseY)
{
    printf("現在按下:%c 座標在:%d %d\n",key ,mouseX,mouseY);
}
void mouse(int botton, int state, int mouseX, int mouseY )
{
    oldX= mouseX; oldY = mouseY;
}
void motion(int mouseX, int mouseY)
{
    //x += (mouseX-oldX);
    //y += (mouseY-oldY);
    if(mouseX>oldX) scale = scale * 1.01;
    if(mouseX<oldX) scale = scale * 0.99;
    oldX= mouseX; oldY = mouseY;
    display();
}
int main(int argc, char **argv)
{
     glutInit(&argc, argv);
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
     glutCreateWindow("week06 keyboard motion mouse");
     glutDisplayFunc(display);

     glutKeyboardFunc(keyboard);
     glutMouseFunc(mouse);
     glutMotionFunc(motion);

     glutMainLoop();

     return 0;

}
