#include <GL/glut.h>    // GLUT library to open window


void display() {
    glClearColor(0.2f, 0.6f, 1.0f, 1.0f); // Sky blue background
    glClear(GL_COLOR_BUFFER_BIT);        // purani screen saaf krta ha
    glLineWidth(0.5);                    // line ki width set krta ha

    // Draw house roof (deep maroon triangle)
    glBegin(GL_TRIANGLES);
    glColor3f(0.5f, 0.0f, 0.1f); // Deep maroon
    glVertex2f(-0.65f, 0.06f);
    glVertex2f(0.65f, 0.06f);
    glVertex2f(0.0f, 0.70f);
    glEnd();

    // Draw chimney (brick orange)
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.4f, 0.1f); // Brick orange
    glVertex2f(0.15f, 0.45f);
    glVertex2f(0.25f, 0.45f);
    glVertex2f(0.25f, 0.70f);
    glVertex2f(0.15f, 0.70f);
    glEnd();

    // Draw chimney top (silver cap)
    glBegin(GL_LINES);
    glColor3f(0.85f, 0.85f, 0.85f); // Silver
    glVertex2f(0.13f, 0.71f);
    glVertex2f(0.27f, 0.71f);
    glEnd();

    // Draw building (light peach rectangle)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.9f, 0.75f); // Light peach
    glVertex2f(-0.65f, 0.06f);
    glVertex2f(0.65f, 0.06f);
    glVertex2f(0.65f, -0.85f);
    glVertex2f(-0.65f, -0.85f);
    glEnd();

    // Draw door (rich teal rectangle)
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.6f); // Rich teal
    glVertex2f(-0.20f, -0.25f);
    glVertex2f(0.20f, -0.25f);
    glVertex2f(0.20f, -0.85f);
    glVertex2f(-0.20f, -0.85f);
    glEnd();

    // Draw left window (aqua blue)
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.8f, 1.0f); // Aqua blue
    glVertex2f(-0.60f, -0.55f);
    glVertex2f(-0.30f, -0.55f);
    glVertex2f(-0.30f, -0.35f);
    glVertex2f(-0.60f, -0.35f);
    glEnd();

    // Draw right window (aqua blue)
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.8f, 1.0f); // Aqua blue
    glVertex2f(0.30f, -0.55f);
    glVertex2f(0.60f, -0.55f);
    glVertex2f(0.60f, -0.35f);
    glVertex2f(0.30f, -0.35f);
    glEnd();

    // Draw base strip (dark purple)
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.5f); // Dark purple
    glVertex2f(0.65f, -0.85f);
    glVertex2f(-0.65f, -0.85f);
    glVertex2f(-0.68f, -0.90f);
    glVertex2f(0.68f, -0.90f);
    glEnd();

    glFlush(); // Render everything
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutCreateWindow("Colorful House"); // Window title
    glutInitWindowSize(500, 500); // Set window size
    glutDisplayFunc(display); // Display function
    glutMainLoop(); // Keep window open
    return 0;
}

