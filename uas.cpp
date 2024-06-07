#include <windows.h>
#include <gl/glut.h>
#include <math.h>

int lastMouseX, lastMouseY;
GLfloat rotationAngleX = 0.0;
GLfloat rotationAngleY = 0.0;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
    glRotatef(rotationAngleX, 1, 0, 0);
    glRotatef(rotationAngleY, 0, 1, 0);;
	
	//Antena
	//sisi bawah
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.0,0.0);
	glVertex3f(0.0,3.3,2.5);
	glVertex3f(1.0,4.3,2.5);
	glVertex3f(0.8,5.0,3.5);
	glVertex3f(0.0,4.3,3.5);
	glVertex3f(-0.8,5.0,3.5);
	glVertex3f(-1.0,4.3,2.5);
	glEnd();
	
	//sisi depan
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(-0.8,5.0,3.5);
	glVertex3f(-0.5,7.0,2.5);
	glVertex3f(0.5,7.0,2.5);
	glVertex3f(0.8,5.0,3.5);
	glVertex3f(0.0,4.3,3.5);
	glEnd();
	
	//sisi kiri
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.0,0.0);
	glVertex3f(-1.0,4.3,2.5);
	glVertex3f(-0.8,5.0,3.5);
	glVertex3f(-0.5,7.0,2.5);
	glVertex3f(-0.5,7.0,1.5);
	glEnd();
	
	//sisi kanan
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(1.0,4.3,2.5);
	glVertex3f(0.8,5.0,3.5);
	glVertex3f(0.5,7.0,2.5);
	glVertex3f(0.5,7.0,1.5);
	glEnd();
	
	//sisi atas
	glBegin(GL_POLYGON);
	glVertex3f(-0.5,7.0,2.5);
	glVertex3f(0.5,7.0,2.5);
	glVertex3f(0.5,7.0,1.5);
	glVertex3f(-0.5,7.0,1.5);
	glEnd();
	
	//Antena kiri(kuning)
	glBegin(GL_TRIANGLES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(-5.0,9.0,-0.2);
	glVertex3f(-1.0,4.3,3.0);
	glVertex3f(-0.7,5.8,3.0);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.7,0.7,0.0);
	glVertex3f(-5.0,9.0,-0.2);
	glVertex3f(-0.7,5.8,3.0);
	glVertex3f(-0.5,6.6,2.5);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.0);
	glVertex3f(-5.0,9.0,-0.2);
	glVertex3f(-1.0,4.3,3.0);
	glVertex3f(-0.5,6.6,2.5);
	glEnd();
	
	//Antena kanan(kuning)
	glBegin(GL_TRIANGLES);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(5.0,9.0,-0.2);
	glVertex3f(1.0,4.3,3.0);
	glVertex3f(0.7,5.8,3.0);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.7,0.7,0.0);
	glVertex3f(5.0,9.0,-0.2);
	glVertex3f(0.7,5.8,3.0);
	glVertex3f(0.5,6.6,2.5);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.0);
	glVertex3f(5.0,9.0,-0.2);
	glVertex3f(1.0,4.3,3.0);
	glVertex3f(0.5,6.6,2.5);
	glEnd();
	
	//Helm 
	//atas depan kiri
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(0.0,2.6,3.0);
	glVertex3f(-3.0,3.5,1.0);
	glVertex3f(-3.0,5.0,1.0);
	glVertex3f(-2.0,7.5,1.0);
	glVertex3f(0.0,8.0,1.0);
	glVertex3f(0.0,7.0,2.0);
	glVertex3f(0.0,3.0,3.0);
	glEnd();
	
	//atas depan kanan
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(0.0,2.6,3.0);
	glVertex3f(3.0,3.5,1.0);
	glVertex3f(3.0,5.0,1.0);
	glVertex3f(2.0,7.5,1.0);
	glVertex3f(0.0,8.0,1.0);
	glVertex3f(0.0,7.0,2.0);
	glVertex3f(0.0,3.0,3.0);
	glEnd();
	
	//pipi kiri
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-3.0,3.5,1.0);
	glVertex3f(-2.0,3.5,1.0);
	glVertex3f(-2.0,2.5,1.0);
	glVertex3f(-3.0,2.5,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-3.0,2.5,1.0);
	glVertex3f(-3.0,-1.0,1.0);
	glVertex3f(-2.5,-0.5,2.0);
	glVertex3f(-2.5,1.5,2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-3.0,2.5,1.0);
	glVertex3f(-2.5,1.5,2.0);
	glVertex3f(-1.5,2.0,2.0);
	glVertex3f(-2.0,2.5,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-2.5,1.5,2.0);
	glVertex3f(-2.5,-0.5,2.0);
	glVertex3f(-1.5,-0.5,2.0);
	glVertex3f(-1.5,2.0,2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-2.5,-0.5,2.0);
	glVertex3f(-3.0,-1.0,1.0);
	glVertex3f(-2.0,-1.0,1.0);
	glVertex3f(-1.5,-0.5,2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-2.0,2.5,1.0);
	glVertex3f(-1.5,2.0,2.0);
	glVertex3f(-1.5,-0.5,2.0);
	glVertex3f(-2.0,-1.0,1.0);
	glEnd();
	
	//pipi kanan
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex3f(3.0,3.5,1.0);
	glVertex3f(2.0,3.5,1.0);
	glVertex3f(2.0,2.5,1.0);
	glVertex3f(3.0,2.5,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(3.0,2.5,1.0);
	glVertex3f(3.0,-1.0,1.0);
	glVertex3f(2.5,-0.5,2.0);
	glVertex3f(2.5,1.5,2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex3f(3.0,2.5,1.0);
	glVertex3f(2.5,1.5,2.0);
	glVertex3f(1.5,2.0,2.0);
	glVertex3f(2.0,2.5,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex3f(2.5,1.5,2.0);
	glVertex3f(2.5,-0.5,2.0);
	glVertex3f(1.5,-0.5,2.0);
	glVertex3f(1.5,2.0,2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex3f(2.5,-0.5,2.0);
	glVertex3f(3.0,-1.0,1.0);
	glVertex3f(2.0,-1.0,1.0);
	glVertex3f(1.5,-0.5,2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(2.0,2.5,1.0);
	glVertex3f(1.5,2.0,2.0);
	glVertex3f(1.5,-0.5,2.0);
	glVertex3f(2.0,-1.0,1.0);
	glEnd();
	
	//sisi kiri atas
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-2.0,7.5,1.0);
	glVertex3f(-3.0,5.0,1.0);
	glVertex3f(-3.0,3.5,1.0);
	glVertex3f(-3.0,3.5,-1.0);
	glVertex3f(-3.0,5.0,-1.0);
	glVertex3f(-2.0,7.5,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-3.0,3.5,-1.0);
	glVertex3f(-3.0,5.0,-1.0);
	glVertex3f(-2.0,7.5,-1.0);
	glVertex3f(-1.0,7.5,-3.0);
	glVertex3f(-2.0,5.0,-3.0);
	glVertex3f(-2.0,3.5,-3.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-1.0,7.5,-3.0);
	glVertex3f(-2.0,5.0,-3.0);
	glVertex3f(-2.0,3.5,-3.0);
	glVertex3f(0.0,3.5,-3.5);
	glVertex3f(0.0,3.5,-4.0);
	glVertex3f(0.0,5.0,-4.0);
	glVertex3f(0.0,7.5,-3.5);
	glEnd();
	
	//sisi kanan atas
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(2.0,7.5,1.0);
	glVertex3f(3.0,5.0,1.0);
	glVertex3f(3.0,3.5,1.0);
	glVertex3f(3.0,3.5,-1.0);
	glVertex3f(3.0,5.0,-1.0);
	glVertex3f(2.0,7.5,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(3.0,3.5,-1.0);
	glVertex3f(3.0,5.0,-1.0);
	glVertex3f(2.0,7.5,-1.0);
	glVertex3f(1.0,7.5,-3.0);
	glVertex3f(2.0,5.0,-3.0);
	glVertex3f(2.0,3.5,-3.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(1.0,7.5,-3.0);
	glVertex3f(2.0,5.0,-3.0);
	glVertex3f(2.0,3.5,-3.0);
	glVertex3f(0.0,3.5,-3.5);
	glVertex3f(0.0,3.5,-4.0);
	glVertex3f(0.0,5.0,-4.0);
	glVertex3f(0.0,7.5,-3.5);
	glEnd();
	
	//sisi atas
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-2.0,7.5,1.0);
	glVertex3f(-2.0,7.5,-1.0);
	glVertex3f(-1.0,7.5,-3.0);
	glVertex3f(0.0,7.5,-3.5);
	glVertex3f(0.0,7.8,-2.0);
	glVertex3f(0.0,8.0,-1.0);
	glVertex3f(0.0,8.0,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(2.0,7.5,1.0);
	glVertex3f(2.0,7.5,-1.0);
	glVertex3f(1.0,7.5,-3.0);
	glVertex3f(0.0,7.5,-3.5);
	glVertex3f(0.0,7.8,-2.0);
	glVertex3f(0.0,8.0,-1.0);
	glVertex3f(0.0,8.0,1.0);
	glEnd();
	
	//sisi kiri bawah
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-3.0,-1.0,1.0);
	glVertex3f(-3.0,3.5,1.0);
	glVertex3f(-3.0,3.5,-1.0);
	glVertex3f(-3.0,-1.0,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-3.0,-1.0,-1.0);
	glVertex3f(-3.0,3.5,-1.0);
	glVertex3f(-2.0,3.5,-3.0);
	glVertex3f(-2.0,-1.0,-3.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-2.0,-1.0,-3.0);
	glVertex3f(-2.0,3.5,-3.0);
	glVertex3f(0.0,3.5,-3.5);
	glVertex3f(0.0,3.5,-4.0);
	glVertex3f(0.0,1.0,-4.0);
	glVertex3f(0.0,-1.0,-3.5);
	glEnd();
	
	//sisi kanan bawah
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(3.0,-1.0,1.0);
	glVertex3f(3.0,3.5,1.0);
	glVertex3f(3.0,3.5,-1.0);
	glVertex3f(3.0,-1.0,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(3.0,-1.0,-1.0);
	glVertex3f(3.0,3.5,-1.0);
	glVertex3f(2.0,3.5,-3.0);
	glVertex3f(2.0,-1.0,-3.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(2.0,-1.0,-3.0);
	glVertex3f(2.0,3.5,-3.0);
	glVertex3f(0.0,3.5,-3.5);
	glVertex3f(0.0,3.5,-4.0);
	glVertex3f(0.0,1.0,-4.0);
	glVertex3f(0.0,-1.0,-3.5);
	glEnd();
	
	//dalam helm kiri
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-2.0,-1.0,1.0);
	glVertex3f(-2.0,5.0,1.0);
	glVertex3f(-2.0,5.0,-1.0);
	glVertex3f(-2.0,-1.0,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-2.0,-1.0,-1.0);
	glVertex3f(-2.0,5.0,-1.0);
	glVertex3f(-1.0,5.0,-2.5);
	glVertex3f(-1.0,-1.0,-2.5);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-1.0,-1.0,-2.5);
	glVertex3f(-1.0,5.0,-2.5);
	glVertex3f(0.0,5.0,-3.0);
	glVertex3f(0.0,-1.0,-3.0);
	glEnd();
	
	//dalam helm kanan
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(2.0,-1.0,1.0);
	glVertex3f(2.0,5.0,1.0);
	glVertex3f(2.0,5.0,-1.0);
	glVertex3f(2.0,-1.0,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(2.0,-1.0,-1.0);
	glVertex3f(2.0,5.0,-1.0);
	glVertex3f(1.0,5.0,-2.5);
	glVertex3f(1.0,-1.0,-2.5);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(1.0,-1.0,-2.5);
	glVertex3f(1.0,5.0,-2.5);
	glVertex3f(0.0,5.0,-3.0);
	glVertex3f(0.0,-1.0,-3.0);
	glEnd();
	
	//dalam helm atas
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.3,0.3);
	glVertex3f(-2.0,5.0,1.0);
	glVertex3f(-2.0,5.0,-1.0);
	glVertex3f(-1.0,5.0,-3.0);
	glVertex3f(0.0,5.0,-3.5);
	glVertex3f(0.0,5.3,-2.0);
	glVertex3f(0.0,5.5,-1.0);
	glVertex3f(0.0,5.5,1.3);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.3,0.3);
	glVertex3f(2.0,5.0,1.0);
	glVertex3f(2.0,5.0,-1.0);
	glVertex3f(1.0,5.0,-3.0);
	glVertex3f(0.0,5.0,-3.5);
	glVertex3f(0.0,5.3,-2.0);
	glVertex3f(0.0,5.5,-1.0);
	glVertex3f(0.0,5.5,1.3);
	glEnd();
	
	//Ventilasi kiri
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-3.0,4.1,1.0);
	glVertex3f(-3.0,-0.5,1.0);
	glVertex3f(-3.8,-0.5,1.0);
	glVertex3f(-4.0,0.9,1.0);
	glVertex3f(-3.8,4.0,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(-3.0,4.1,1.0);
	glVertex3f(-3.0,5.0,-1.0);
	glVertex3f(-4.0,4.2,-1.0);
	glVertex3f(-3.8,4.0,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(-3.8,4.0,1.0);
	glVertex3f(-4.0,0.9,1.0);
	glVertex3f(-4.5,1.0,-1.0);
	glVertex3f(-4.0,4.2,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(-4.0,0.9,1.0);
	glVertex3f(-3.8,-0.5,1.0);
	glVertex3f(-4.0,-0.5,-1.0);
	glVertex3f(-4.5,1.0,-1.0);
	glEnd();
	
	//belakang
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(-2.0,4.1,-3.0);
	glVertex3f(-2.0,1.0,-3.5);
	glVertex3f(-2.0,-0.5,-3.0);
	glVertex3f(-3.8,-0.5,-3.0);
	glVertex3f(-4.0,0.9,-3.5);
	glVertex3f(-3.8,4.0,-3.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(-2.0,4.1,-3.0);
	glVertex3f(-3.0,5.0,-1.0);
	glVertex3f(-4.0,4.2,-1.0);
	glVertex3f(-3.8,4.0,-3.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(-3.8,4.0,-3.0);
	glVertex3f(-4.0,0.9,-3.5);
	glVertex3f(-4.5,1.0,-1.0);
	glVertex3f(-4.0,4.2,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(-4.0,0.9,-3.5);
	glVertex3f(-3.8,-0.5,-3.0);
	glVertex3f(-4.0,-0.5,-1.0);
	glVertex3f(-4.5,1.0,-1.0);
	glEnd();
	
	//sisi bawah
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-3.0,-0.5,1.0);
	glVertex3f(-3.8,-0.5,1.0);
	glVertex3f(-4.0,-0.5,-1.0);
	glVertex3f(-3.0,-0.5,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-2.0,-0.5,-3.0);
	glVertex3f(-3.8,-0.5,-3.0);
	glVertex3f(-4.0,-0.5,-1.0);
	glVertex3f(-3.0,-0.5,-1.0);
	glEnd();
	
	//Ventilasi kanan
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(3.0,4.1,1.0);
	glVertex3f(3.0,-0.5,1.0);
	glVertex3f(3.8,-0.5,1.0);
	glVertex3f(4.0,0.9,1.0);
	glVertex3f(3.8,4.0,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(3.0,4.1,1.0);
	glVertex3f(3.0,5.0,-1.0);
	glVertex3f(4.0,4.2,-1.0);
	glVertex3f(3.8,4.0,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(3.8,4.0,1.0);
	glVertex3f(4.0,0.9,1.0);
	glVertex3f(4.5,1.0,-1.0);
	glVertex3f(4.0,4.2,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(4.0,0.9,1.0);
	glVertex3f(3.8,-0.5,1.0);
	glVertex3f(4.0,-0.5,-1.0);
	glVertex3f(4.5,1.0,-1.0);
	glEnd();
	
	//belakang
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(2.0,4.1,-3.0);
	glVertex3f(2.0,1.0,-3.5);
	glVertex3f(2.0,-0.5,-3.0);
	glVertex3f(3.8,-0.5,-3.0);
	glVertex3f(4.0,0.9,-3.5);
	glVertex3f(3.8,4.0,-3.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(2.0,4.1,-3.0);
	glVertex3f(3.0,5.0,-1.0);
	glVertex3f(4.0,4.2,-1.0);
	glVertex3f(3.8,4.0,-3.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(3.8,4.0,-3.0);
	glVertex3f(4.0,0.9,-3.5);
	glVertex3f(4.5,1.0,-1.0);
	glVertex3f(4.0,4.2,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
	glVertex3f(4.0,0.9,-3.5);
	glVertex3f(3.8,-0.5,-3.0);
	glVertex3f(4.0,-0.5,-1.0);
	glVertex3f(4.5,1.0,-1.0);
	glEnd();
	
	//sisi bawah
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(3.0,-0.5,1.0);
	glVertex3f(3.8,-0.5,1.0);
	glVertex3f(4.0,-0.5,-1.0);
	glVertex3f(3.0,-0.5,-1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(2.0,-0.5,-3.0);
	glVertex3f(3.8,-0.5,-3.0);
	glVertex3f(4.0,-0.5,-1.0);
	glVertex3f(3.0,-0.5,-1.0);
	glEnd();
	
	//masker kiri
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-2.0,2.5,1.0);
	glVertex3f(-1.0,2.0,1.5);
	glVertex3f(-0.5,2.0,1.5);
	glVertex3f(0.0,2.5,2.0);
	glVertex3f(0.0,1.0,2.0);
	glVertex3f(0.0,0.6,1.5);
	glVertex3f(-0.5,0.6,1.5);
	glVertex3f(-0.5,-1.0,1.5);
	glVertex3f(-1.0,-1.0,1.5);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-2.0,2.5,1.0);
	glVertex3f(-1.0,-1.0,1.5);
	glVertex3f(-1.0,-1.0,-2.0);
	glVertex3f(-2.0,2.5,-2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-1.0,-1.0,-2.0);
	glVertex3f(-2.0,2.5,-2.0);
	glVertex3f(0.0,2.5,-2.0);
	glVertex3f(0.0,-1.0,-2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-1.0,-1.0,1.5);
	glVertex3f(-0.5,-1.0,1.5);
	glVertex3f(-0.5,-1.0,-2.0);
	glVertex3f(-1.0,-1.0,-2.0);
	glEnd();
	
	//merah merah
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(0.0,0.5,1.5);
	glVertex3f(-0.5,0.5,1.5);
	glVertex3f(-0.5,-0.5,2.5);
	glVertex3f(0.0,-0.5,2.5);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.0,0.0);
	glVertex3f(-0.5,-0.5,2.5);
	glVertex3f(0.0,-0.5,2.5);
	glVertex3f(0.0,-1.3,2.0);
	glVertex3f(-0.5,-1.3,2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(0.0,-1.3,2.0);
	glVertex3f(-0.5,-1.3,2.0);
	glVertex3f(-0.5,-1.3,1.0);
	glVertex3f(0.0,-1.3,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-0.5,-0.5,0.0);
	glVertex3f(0.0,-0.5,0.0);
	glVertex3f(0.0,-1.3,1.0);
	glVertex3f(-0.5,-1.3,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(0.0,0.5,1.0);
	glVertex3f(-0.5,0.5,1.0);
	glVertex3f(-0.5,-0.5,0.0);
	glVertex3f(0.0,-0.5,0.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(0.0,0.5,2.0);
	glVertex3f(-0.5,0.5,2.0);
	glVertex3f(-0.5,0.5,1.0);
	glVertex3f(0.0,0.5,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-0.5,0.5,1.5);
	glVertex3f(-0.5,-0.5,2.5);
	glVertex3f(-0.5,-1.3,2.0);
	glVertex3f(-0.5,-1.3,1.0);
	glVertex3f(-0.5,-0.5,0.0);
	glVertex3f(-0.5,0.5,1.0);
	glEnd();
	
	//masker kanan
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(2.0,2.5,1.0);
	glVertex3f(1.0,2.0,1.5);
	glVertex3f(0.5,2.0,1.5);
	glVertex3f(0.0,2.5,2.0);
	glVertex3f(0.0,1.0,2.0);
	glVertex3f(0.0,0.6,1.5);
	glVertex3f(0.5,0.6,1.5);
	glVertex3f(0.5,-1.0,1.5);
	glVertex3f(1.0,-1.0,1.5);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(2.0,2.5,1.0);
	glVertex3f(1.0,-1.0,1.5);
	glVertex3f(1.0,-1.0,-2.0);
	glVertex3f(2.0,2.5,-2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(1.0,-1.0,-2.0);
	glVertex3f(2.0,2.5,-2.0);
	glVertex3f(0.0,2.5,-2.0);
	glVertex3f(0.0,-1.0,-2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(1.0,-1.0,1.5);
	glVertex3f(0.5,-1.0,1.5);
	glVertex3f(0.5,-1.0,-2.0);
	glVertex3f(1.0,-1.0,-2.0);
	glEnd();
	
	//merah merah
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(0.0,0.5,1.5);
	glVertex3f(0.5,0.5,1.5);
	glVertex3f(0.5,-0.5,2.5);
	glVertex3f(0.0,-0.5,2.5);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.0,0.0);
	glVertex3f(0.5,-0.5,2.5);
	glVertex3f(0.0,-0.5,2.5);
	glVertex3f(0.0,-1.3,2.0);
	glVertex3f(0.5,-1.3,2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(0.0,-1.3,2.0);
	glVertex3f(0.5,-1.3,2.0);
	glVertex3f(0.5,-1.3,1.0);
	glVertex3f(0.0,-1.3,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(0.5,-0.5,0.0);
	glVertex3f(0.0,-0.5,0.0);
	glVertex3f(0.0,-1.3,1.0);
	glVertex3f(0.5,-1.3,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(0.0,0.5,1.0);
	glVertex3f(0.5,0.5,1.0);
	glVertex3f(0.5,-0.5,0.0);
	glVertex3f(0.0,-0.5,0.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(0.0,0.5,2.0);
	glVertex3f(0.5,0.5,2.0);
	glVertex3f(0.5,0.5,1.0);
	glVertex3f(0.0,0.5,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(0.5,0.5,1.5);
	glVertex3f(0.5,-0.5,2.5);
	glVertex3f(0.5,-1.3,2.0);
	glVertex3f(0.5,-1.3,1.0);
	glVertex3f(0.5,-0.5,0.0);
	glVertex3f(0.5,0.5,1.0);
	glEnd();
	
	//wajah kiri
	glBegin(GL_POLYGON);
	glColor3f(0.0,5.0,0.5);
	glVertex3f(0.0,4.1,1.5);
	glVertex3f(-0.5,4.0,1.0);
	glVertex3f(-1.0,4.0,1.0);
	glVertex3f(-2.0,3.5,1.0);
	glVertex3f(-2.0,2.5,1.0);
	glVertex3f(-1.0,2.0,1.5);
	glVertex3f(-0.5,2.0,1.5);
	glVertex3f(0.0,2.3,2.0);
	glEnd();
	
	//wajah kanan
	glBegin(GL_POLYGON);
	glColor3f(0.0,5.0,0.5);
	glVertex3f(0.0,4.1,1.5);
	glVertex3f(0.5,4.0,1.0);
	glVertex3f(1.0,4.0,1.0);
	glVertex3f(2.0,3.5,1.0);
	glVertex3f(2.0,2.5,1.0);
	glVertex3f(1.0,2.0,1.5);
	glVertex3f(0.5,2.0,1.5);
	glVertex3f(0.0,2.3,2.0);
	glEnd();
	
	//kek jambul diatas kepala
	//sisi kiri
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-0.7,7.0,1.0);
	glVertex3f(-1.0,7.3,1.0);
	glVertex3f(-1.0,8.8,0.5);
	glVertex3f(-0.7,9.0,0.5);
	glVertex3f(-0.7,9.0,-2.0);
	glVertex3f(-1.0,8.8,-2.0);
	glVertex3f(-1.0,7.3,-3.0);
	glVertex3f(-0.7,7.0,-3.0);
	glEnd();
	
	//sisi kanan
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(0.7,7.0,1.0);
	glVertex3f(1.0,7.3,1.0);
	glVertex3f(1.0,8.8,0.5);
	glVertex3f(0.7,9.0,0.5);
	glVertex3f(0.7,9.0,-2.0);
	glVertex3f(1.0,8.8,-2.0);
	glVertex3f(1.0,7.3,-3.0);
	glVertex3f(0.7,7.0,-3.0);
	glEnd();
	
	//sisi atas
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-0.7,9.0,0.5);
	glVertex3f(0.0,9.0,0.5);
	glVertex3f(0.0,9.0,-2.0);
	glVertex3f(-0.7,9.0,-2.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(0.7,9.0,0.5);
	glVertex3f(0.0,9.0,0.5);
	glVertex3f(0.0,9.0,-2.0);
	glVertex3f(0.7,9.0,-2.0);
	glEnd();
	
	//sisi belakang
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-0.7,7.0,-3.0);
	glVertex3f(-1.0,7.3,-3.0);
	glVertex3f(-1.0,8.8,-2.0);
	glVertex3f(-0.7,9.0,-2.0);
	glVertex3f(0.0,9.0,-2.0);
	glVertex3f(0.0,7.0,-3.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(0.7,7.0,-3.0);
	glVertex3f(1.0,7.3,-3.0);
	glVertex3f(1.0,8.8,-2.0);
	glVertex3f(0.7,9.0,-2.0);
	glVertex3f(0.0,9.0,-2.0);
	glVertex3f(0.0,7.0,-3.0);
	glEnd();
	
	//sisi depan
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(-0.7,7.0,1.0);
	glVertex3f(-1.0,7.3,1.0);
	glVertex3f(-1.0,8.8,0.5);
	glVertex3f(-0.7,9.0,0.5);
	glVertex3f(0.0,9.0,0.5);
	glVertex3f(0.0,7.0,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(0.7,7.0,1.0);
	glVertex3f(1.0,7.3,1.0);
	glVertex3f(1.0,8.8,0.5);
	glVertex3f(0.7,9.0,0.5);
	glVertex3f(0.0,9.0,0.5);
	glVertex3f(0.0,7.0,1.0);
	glEnd();
	
	glFlush();
	glutPostRedisplay();

}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        lastMouseX = x;
        lastMouseY = y;
    }
}
void motion(int x, int y)
{
    rotationAngleY += (x - lastMouseX) * 0.1;
    rotationAngleX += (y - lastMouseY) * 0.1;

    lastMouseX = x;
    lastMouseY = y;

    glutPostRedisplay();
}

void myinit()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-14.0,14.0,-14.0,14.0,-14.0,14.0);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(0.0,0.0,0.0);
	glEnable(GL_DEPTH_TEST);
}
int main (int argc, char* argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(400,400);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Gundam");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
    glutMotionFunc(motion);
	myinit();
	glutMainLoop();
	return 0;
}
