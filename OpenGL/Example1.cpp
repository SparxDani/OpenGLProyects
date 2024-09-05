#include "Example1.h"
#include "IncludeGL.h"
#include <iostream>
Example1::Example1()
{
}


void Example1::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
}
void Example1::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		DrawPoint();
	glFlush();
	
}
void Example1::DrawPoint()
{
	std::cout << "DrawPoint" << std::endl;
	 
}

void Example1::DrawLine()
{
	std::cout << "DrawLine" << std::endl;
}


void Example1::KeyboardFunc(unsigned char key, int X, int Y)
{

}


void Example1::Idle()
{

}