#include<Windows.h>
#include<Gl\glut.h>
#include<math.h>
#include<stdio.h>
float p1 = 190, p3 = 120, p4 = 150, p5 = 25, p6 = 170, p7 = 175, p8 = 135, p9 = 145, p10 = 155, p11 = 135;
float deltax = 0.1, deltay = 0.01;
bool stop = false;
void DrawCircle(float cx,float cy,float r,int num_segments)
{
	glBegin(GL_POLYGON);
	for (int i = 0; i < num_segments; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
		float x = r * cosf(theta);   //calculate x component
		float y = r * sinf(theta);   //calculate y component
		glVertex2f(x + cx, y + cy);   //output vertex
	}
	glEnd();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glClearColor(0, 0.9, 1, 0);
	gluOrtho2D(0.0, 420.0, 0.0, 220.0);
	//شارع اخضر
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 130);
	glVertex2i(0, 60);
	glVertex2f(500, 60);
	glVertex2f(500, 130);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	//الشكل الرئيسى
	glVertex2i(380, 150);
	glVertex2i(380, 170);
	glVertex2f(340, 200);
	glVertex2f(310, 175);
	glVertex2f(280, 190);
	glVertex2f(200, 165);
	glVertex2f(180, 160);
	glVertex2f(200, 160);
	glVertex2f(200, 150);
	glVertex2f(180, 140);
	glVertex2f(180, 100);
	glVertex2f(400, 100);
	glVertex2f(400, 140);
	glEnd();
	//////////////////////////
	glColor3f(0.6, 0.2, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(380, 150);
	glVertex2i(380, 170);
	glVertex2f(340, 200);
	glVertex2f(310, 175);
	glVertex2f(280, 190);
	glVertex2f(200, 165);
	glVertex2f(180, 160);
	glVertex2f(200, 160);
	glVertex2f(200, 150);
	glEnd();
	/////////الحزام0
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(380, 150);
	glVertex2i(200, 150);
	glVertex2f(180, 140);
	glVertex2f(400, 140);
	glEnd();
	///////الباب
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2i(310, 100);
	glVertex2i(310, 123);
	glVertex2f(270, 123);
	glVertex2f(270, 100);
	glEnd();
	///////القطع
	glColor3f(1, 0, 0);
	glLineWidth(4);
	glBegin(GL_LINES);
	glVertex2i(313, 178);
	glVertex2i(313, 150);
	glEnd();
	//////شباك
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(222, 160);
	glVertex2i(222, 170);
	glVertex2f(242, 170);
	glVertex2f(242, 160);
	glEnd();
	/////شباك 2
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(260, 160);
	glVertex2i(260, 170);
	glVertex2f(280, 170);
	glVertex2f(280, 160);
	glEnd();
	/////شباك طول
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(325, 160);
	glVertex2i(325, 170);
	glVertex2f(360, 170);
	glVertex2f(360, 160);
	glEnd();
	///////خطوط شباك 1
	glColor3f(1, 0, 0);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glVertex2i(222, 160);
	glVertex2i(222, 170);
	glVertex2i(242, 170);
	glVertex2i(242, 160);
	glEnd();
	///////خطوط شباك 1
	glColor3f(1, 0, 0);
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2i(232, 160);
	glVertex2i(232, 170);
	glVertex2i(222, 165);
	glVertex2i(242, 165);
	glEnd();
	///////خطوط شباك 2
	glColor3f(1, 0, 0);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glVertex2i(260, 160);
	glVertex2i(260, 170);
	glVertex2f(280, 170);
	glVertex2f(280, 160);
	glEnd();
	///////خطوط شباك 2
	glColor3f(1, 0, 0);
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2i(270, 160);
	glVertex2i(270, 170);
	glVertex2f(260, 165);
	glVertex2f(280, 165);
	glEnd();
	///////خطوط شباك طول
	glColor3f(1, 0, 0);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glVertex2i(325, 160);
	glVertex2i(325, 170);
	glVertex2f(360, 170);
	glVertex2f(360, 160);
	glEnd();
	///////خطوط شباك طول
	glColor3f(1, 0, 0);
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2i(342, 160);
	glVertex2i(342, 170);
    //glVertex2i(360, 170);
	//glVertex2i(360, 160);
	glEnd();
	//////خطوط الباب
	glColor3f(1, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(310, 100);
	glVertex2i(310, 123);
	glVertex2f(270, 123);
	glVertex2f(270, 100);
	glEnd();
	//////خطوط الباب
	glColor3f(1, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(290, 100);
	glVertex2i(290, 123);
	//glVertex2f(270, 123);
	//glVertex2f(270, 100);
	glEnd();
	/////شارع
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 0);
	glVertex2i(0, 60);
	glVertex2f(500, 0);
	glVertex2f(500, 60);
	glEnd();
	////خط شارع
	glColor3f(1, 1, 0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(0, 60);
	glVertex2f(500, 60);
	glEnd();
	////خط شارع
	glColor3f(1, 1, 0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(0, 0);
	glVertex2f(500, 0);
	glEnd();
	/////قطوعات
	glColor3f(1, 1, 1);
	glLineWidth(13);
	glBegin(GL_LINES);
	glVertex2f(25, 30);
	glVertex2f(65, 30);
	glVertex2f(125, 30);
	glVertex2f(165, 30);
	glVertex2f(225, 30);
	glVertex2f(265, 30);
	glVertex2f(325, 30);
	glVertex2f(365, 30);
	glEnd();
	//////ساق شجره
	glColor3f(0.5, 0.4, 0);
	glLineWidth(30);
	glBegin(GL_LINES);
	glVertex2f(85, 100);
	glVertex2f(85, 110);
	glEnd();
	/////الشجره
	glColor3f(0.2, 0.6, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(65, 110);
	glVertex2f(105, 110);
	glVertex2f(85, 150);
	glEnd();
	//
	glColor3f(0, 1, 0);
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glVertex2i(380, 150);
	glVertex2i(380, 170);
	glVertex2f(340, 200);
	glVertex2f(312, 177);
	glVertex2f(280, 190);
	glVertex2f(200, 165);
	glVertex2f(180, 160);
	glVertex2f(200, 160);
	glVertex2f(200, 150);
	glVertex2f(180, 140);
	glVertex2f(180, 100);
	glVertex2f(400, 100);
	glVertex2f(400, 140);
	glEnd();
	////نزله
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(310, 100);
	glVertex2i(290, 60);
	glVertex2f(270, 100);
	glVertex2f(250, 60);
	glEnd();
	////
	glColor3f(1, 1, 0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2i(310, 100);
	glVertex2i(290, 60);
	glVertex2f(270, 100);
	glVertex2f(250, 60);
	glEnd();
	////سياره
	glColor3f(0, 0, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(p1, 10);
	glVertex2i(p1, 25);
	glVertex2i(p3, 10);
	glVertex2i(p3, 25);
	glVertex2i(p4, 25);
	glVertex2i(p4, 35);
	glVertex2i(p6, 35);
	glVertex2i(p6, 25);
	glEnd();
	///تايرات
	glColor3f(0.5, 1.0, 2.5);
	DrawCircle(p7, 10, 5, 30);
	DrawCircle(p8, 10, 5, 30);
	///غيم
	glColor3f(1, 1, 1);
	DrawCircle(p9, 205, 13, 30);
	DrawCircle(p10, 205, 10, 30);
	DrawCircle(p11, 205, 10, 30);
	//
	glColor3f(1, 1, 0);
	DrawCircle(20, 205, 10, 30);
	glFlush();
	//حركه سياره
	p1 += deltax;
	if (p1 > 500 || p1 <= 0)
		deltax = -deltax;
	p3 += deltax;
	if (p3 > 500 || p3 <= 0)
		deltax = -deltax;
	p4 += deltax;
	if (p4 > 500 || p4 <= 0)
		deltax = -deltax;
	p5 += deltax;
	if (p5 > 500 || p5 <= 0)
		deltax = -deltax;
	p6 += deltax;
	if (p6 > 500 || p6 <= 0)
		deltax = -deltax;
	///حركه تايرات
	p7 += deltax;
	if (p7 > 500 || p7 <= 0)
		deltax = -deltax;
	p8 += deltax;
	if (p8 > 500 || p8 <= 0)
		deltax = -deltax;
	////حركه غيوم
	p9 += deltay;
	if (p9 > 500 || p9 <= 0)
		deltay = -deltay;
	p10 += deltay;
	if (p10 > 500 || p10 <= 0)
		deltay = -deltay;
	p11 += deltay;
	if (p11 > 500 || p11 <= 0)
		deltay = -deltay;
	if (stop == false)
		glutPostRedisplay();
}
void key(unsigned char key, int x, int y)
{
	if (key == 'a')
		stop = !stop;
	if (key == 'e')
		exit(0);
	glutPostRedisplay();
}
int main(int argc,char**argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("بلبل");
	glutKeyboardFunc(key);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}