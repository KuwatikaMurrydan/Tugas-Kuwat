#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>

void init() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
    GLfloat light_ambient[] = { 0.2, 0.2, 0.2, 1.0 };
    GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

    glShadeModel(GL_FLAT);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    //glTranslatef(0.0f, 0.0f, -5.0f);
    // Menambahkan objek 3D huruf "K"
    glBegin(GL_QUADS);

    // Huruf "K"
    glVertex3f(-1.0f, 1.0f, 0.0f);
    glVertex3f(-0.8f, 1.0f, 0.0f);
    glVertex3f(-0.8f, 0.2f, 0.0f);
    glVertex3f(-1.0f, 0.2f, 0.0f);

    glVertex3f(-0.8f, 0.6f, 0.0f);
    glVertex3f(0.8f, 0.6f, 0.0f);
    glVertex3f(0.8f, 0.4f, 0.0f);
    glVertex3f(-0.8f, 0.4f, 0.0f);

    glVertex3f(0.8f, 1.0f, 0.0f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(1.0f, 0.2f, 0.0f);
    glVertex3f(0.8f, 0.2f, 0.0f);

    glEnd();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, (GLfloat)w / (GLfloat)h, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("OpenGL - Huruf K 3D");
    glutInitWindowSize(800, 600);

    init();
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    
    glutMainLoop();
    
    return 0;
}

