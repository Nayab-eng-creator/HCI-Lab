#include <GL/glut.h>  // library use to open the window

float CarX = 0.0f; // carx is a global variable here, speed still 0;

void specialKeys(int key, int x, int y) { // This function used to press the arrows keys
	switch (key) {
		case GLUT_KEY_LEFT:
			//USE TO MOVE THE CAR LEFT
			CarX -= 0.1f;  //move left 
			break;
		case GLUT_KEY_RIGHT:
			CarX += 0.1f; // move right
			break;
	}
	glutPostRedisplay(); // used to refresh the screen so that we see the moment on screen.
} 

void drawCar() { // car ko draw krna k lia ha
	glColor3f(1.0f, 0.0f, 0.0f);  // ye red color btaye ga
	         //R    G    B
	glBegin(GL_QUADS); // POINTS DYNA HA TAKY 4 VERTICES MILKR RECTANGLE BNAIN(Quad)
	// start hona ha
	// shape draw krna k  lia
	glVertex2f(CarX - 0.2f, -0.2f);
	glVertex2f(CarX + 0.2f, -0.2f);
	glVertex2f(CarX + 0.2f,  0.0f);
	glVertex2f(CarX - 0.2f,  0.0f);
	glEnd(); // ye hota ha  shape draw krna complete ho gaye ha

	// wheels add krny k lye ab
	glColor3f(0.0f, 0.0f, 0.0f); // black color for wheels

	glBegin(GL_QUADS); // 1st wheel
	glVertex2f(CarX - 0.15f, -0.25f);
	glVertex2f(CarX - 0.05f, -0.25f);
	glVertex2f(CarX - 0.05f, -0.2f);
	glVertex2f(CarX - 0.15f, -0.2f);
	glEnd();

	glBegin(GL_QUADS); // second wheel
	glVertex2f(CarX + 0.05f, -0.25f);
	glVertex2f(CarX + 0.15f, -0.25f);
	glVertex2f(CarX + 0.15f, -0.2f);
	glVertex2f(CarX + 0.05f, -0.2f);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT); // purani screen saaf krta ha
	glLoadIdentity();  // coordinate system ko reset krta ha  x,y axis
	drawCar();
	glFlush(); // drawing screen py dikhata ha	
}

void init() { // opengl initialization k lia
	glClearColor(0.8f, 0.8f, 1.0f, 1.0f); // ye line screen k background ko sky blue kary ga
	glMatrixMode(GL_PROJECTION); // ye btaya ga k screen 2D mood main ha ya 3D
	glLoadIdentity();
	gluOrtho2D(-1, 1, -1, 1); // screen 2D coordinates set krta ha
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	//Ye btata ha k display mode ak hi hoga screen ak hi open hogi or RGB colours honygy
	glutInitWindowSize(500, 500);
	// ye window ka size set karyga
	glutInitWindowPosition(100, 100);
	// starting position btata ha
	glutCreateWindow("My OpenGL Window");
	// ye screen ka name ho ga
	init();
	glutDisplayFunc(display);
	glutSpecialFunc(specialKeys); // handling keys
	glutMainLoop(); // loop continue until user jab chahy

	return 0;
}

