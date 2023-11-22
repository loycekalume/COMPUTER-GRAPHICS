 #ifdef _APPLE_CC_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display() {
  glClear(GL_COLOR_BUFFER_BIT);
  glLineWidth(3.0f);
  //triangle
  glBegin(GL_POLYGON);
  glColor3f(1, 0, 0);
  glVertex2f(-0.5, 0);
  glColor3f(0, 1, 0);
  glVertex2f(0.5, 0);
  glColor3f(0, 0, 1);
  glVertex2f(0, 0.5);
  glEnd();
  glFlush();
//rectangle
glBegin(GL_POLYGON);
glColor3f(0,1,0);
 glVertex2f(-0.3,0);
 glColor3f(1,0,0);
 glVertex2f(0.3,0);
 glColor3f(0,0,1);
 glVertex2f(0.3,-0.5);
 glColor3f(1,0,1);
 glVertex2f(-0.3,-0.5);
 glEnd();
 glFlush();

//line to the left
glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(-0.35,0);
glColor3f(1,0,0);
glVertex2f(-0.35,-0.55);
glEnd();
 glFlush();

//bottom line
glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(-0.35,-0.55);
glColor3f(0,1,0);
glVertex2f(0.35,-0.55);
glEnd();
 glFlush();

//line to the right
glBegin(GL_LINES);
glLineWidth(29);
glColor3f(0,0,1);
glVertex2f(0.35,0);
glColor3f(0,0,1);
glVertex2f(0.35,-0.55);
glEnd();
 glFlush();


}
int main(int argc, char** argv) {

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  glutInitWindowPosition(80, 80);
  glutInitWindowSize(400, 300);
  glutCreateWindow("My Hut");
  glClearColor(1.0,1.0,1.0,1.0);
 glColor3f(1,1,0);
  glutDisplayFunc(display);

  glutMainLoop();
}
