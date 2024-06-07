#include <GL/glut.h>

float angleX = 0.0f;
float angleY = 0.0f;
float zoom = 1.0f;

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
}



void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();
    gluLookAt(0.0, 0.0, 5.0 * zoom, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glRotatef(angleX, 1.0, 0.0, 0.0);
    glRotatef(angleY, 0.0, 1.0, 0.0);
    glutWireSphere(0.5, 20, 20);

    glColor3f(1.0, 1.0, 1.0);
   

    glutSwapBuffers();
}

void specialKeys(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_UP:
            angleX += 5.0;
            break;
        case GLUT_KEY_DOWN:
            angleX -= 5.0;
            break;
        case GLUT_KEY_LEFT:
            angleY -= 5.0;
            break;
        case GLUT_KEY_RIGHT:
            angleY += 5.0;
            break;
        case GLUT_KEY_PAGE_UP:
            zoom *= 1.1;
            break;
        case GLUT_KEY_PAGE_DOWN:
            zoom /= 1.1;
            break;
    }

    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("3D Star with OpenGL");
    glutInitWindowSize(800, 600);
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);

    init();

    glutMainLoop();
    return 0;
}

