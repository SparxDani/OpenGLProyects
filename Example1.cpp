#include "Example1.h"
#include "IncludeGL.h"
#include <iostream>

Example1::Example1()
{
}

//void Example1::init()
//{
//    // Configuración de OpenGL
//    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//    glClearDepth(1.0);
//    glEnable(GL_DEPTH_TEST); // Habilita el test de profundidad
//    gluLookAt(5.0, 5.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0); // Posición de la cámara
//    glMatrixMode(GL_MODELVIEW);
//}
//
//void Example1::Render()
//{
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//    DrawPoint();           // Dibuja un punto
//    DrawLine();            // Dibuja una línea
//    DrawColoredLine();     // Dibuja una línea coloreada
//    DrawLineChain();       // Dibuja una cadena de líneas
//    DrawAxesXY();          // Dibuja los ejes X e Y
//    DrawAxesXYZ();         // Dibuja los ejes X, Y y Z
//    DrawGridXZ();          // Dibuja una rejilla en el plano XZ
//
//    glFlush();
//}

void Example1::DrawPoint()
{
    std::cout << "DrawPoint" << std::endl;
    glBegin(GL_POINTS);
    glVertex3f(0.0f, 0.0f, 0.0f); // Dibuja el punto en el origen
    glEnd();
}

void Example1::DrawLine()
{
    std::cout << "DrawLine" << std::endl;
    glBegin(GL_LINES);
    glVertex3f(0.0f, 0.0f, 0.0f); // Primer punto de la línea
    glVertex3f(1.0f, 1.0f, 1.0f); // Segundo punto de la línea
    glEnd();
}

void Example1::DrawColoredLine()
{
    std::cout << "DrawColoredLine" << std::endl;
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);  // Color rojo
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glEnd();
}

void Example1::DrawLineChain()
{
    std::cout << "DrawLineChain" << std::endl;
    glBegin(GL_LINE_STRIP);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(2.0f, 0.0f, 0.0f);
    glVertex3f(3.0f, 1.0f, 0.0f);
    glEnd();
}

void Example1::DrawAxesXY()
{
    std::cout << "DrawAxesXY" << std::endl;
    glBegin(GL_LINES);
    // Eje X (rojo)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-5.0f, 0.0f, 0.0f);
    glVertex3f(5.0f, 0.0f, 0.0f);

    // Eje Y (verde)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, -5.0f, 0.0f);
    glVertex3f(0.0f, 5.0f, 0.0f);
    glEnd();
}

void Example1::DrawAxesXYZ()
{
    std::cout << "DrawAxesXYZ" << std::endl;
    glBegin(GL_LINES);
    // Eje X (rojo)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-5.0f, 0.0f, 0.0f);
    glVertex3f(5.0f, 0.0f, 0.0f);

    // Eje Y (verde)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, -5.0f, 0.0f);
    glVertex3f(0.0f, 5.0f, 0.0f);

    // Eje Z (azul)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, -5.0f);
    glVertex3f(0.0f, 0.0f, 5.0f);
    glEnd();
}

void Example1::DrawGridXZ()
{
    std::cout << "DrawGridXZ" << std::endl;
    glColor3f(0.5f, 0.5f, 0.5f); // Color gris para la rejilla
    glBegin(GL_LINES);
    for (int i = -5; i <= 5; ++i)
    {
        // Líneas paralelas al eje X
        glVertex3f(-5.0f, 0.0f, (float)i);
        glVertex3f(5.0f, 0.0f, (float)i);

        // Líneas paralelas al eje Z
        glVertex3f((float)i, 0.0f, -5.0f);
        glVertex3f((float)i, 0.0f, 5.0f);
    }
    glEnd();
}

void Example1::KeyboardFunc(unsigned char key, int X, int Y)
{
    // Aquí puedes manejar la entrada del teclado si es necesario
}

void Example1::Idle()
{
    // Función de idle, puedes poner actualizaciones aquí si las necesitas
}
