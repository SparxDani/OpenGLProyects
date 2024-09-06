#include "Figura2D.h"
#include "IncludeGL.h"
#include <iostream>
#include <cmath>

Figura2D::Figura2D() : selectedFigure(0) // Inicializa la figura seleccionada en 0 (ninguna)
{
}

void Figura2D::init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    glEnable(GL_DEPTH_TEST);
    gluLookAt(5.0, 5.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
}

void Figura2D::Render()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Llama a la funci�n de dibujo seg�n la figura seleccionada
    switch (selectedFigure)
    {
    case 1:
        DrawSquare();
        break;
    case 2:
        DrawCircle();
        break;
    case 3:
        DrawTriangle();
        break;
    default:
        std::cout << "Seleccione una figura usando el teclado (1: Cuadrado, 2: C�rculo, 3: Tri�ngulo)" << std::endl;
        break;
    }

    glFlush();
}

void Figura2D::KeyboardFunc(unsigned char key, int X, int Y)
{
    switch (key)
    {
    case '1':
        selectedFigure = 1;  // Cuadrado
        std::cout << "Cuadrado seleccionado" << std::endl;
        break;
    case '2':
        selectedFigure = 2;  // C�rculo
        std::cout << "C�rculo seleccionado" << std::endl;
        break;
    case '3':
        selectedFigure = 3;  // Tri�ngulo
        std::cout << "Tri�ngulo seleccionado" << std::endl;
        break;
    default:
        std::cout << "Opci�n no v�lida" << std::endl;
        break;
    }
}

void Figura2D::Idle()
{
    // Actualizaciones mientras est� en modo Idle (vac�o por ahora)
}

void Figura2D::DrawSquare()
{
    glColor3f(0.0f, 1.0f, 0.0f); // Color verde para el cuadrado
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -1.0f); // Esquina inferior izquierda
    glVertex2f(1.0f, -1.0f);  // Esquina inferior derecha
    glVertex2f(1.0f, 1.0f);   // Esquina superior derecha
    glVertex2f(-1.0f, 1.0f);  // Esquina superior izquierda
    glEnd();
}

void Figura2D::DrawCircle()
{
    glColor3f(0.0f, 0.0f, 1.0f); // Color azul para el c�rculo
    float radius = 1.0f;
    int numSegments = 100;

    glBegin(GL_POLYGON);
    for (int i = 0; i < numSegments; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(numSegments);
        float x = radius * cosf(theta);
        float y = radius * sinf(theta);
        glVertex2f(x, y);
    }
    glEnd();
}

void Figura2D::DrawTriangle()
{
    glColor3f(1.0f, 0.0f, 0.0f); // Color rojo para el tri�ngulo
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 1.0f);    // V�rtice superior
    glVertex2f(-1.0f, -1.0f);  // V�rtice inferior izquierdo
    glVertex2f(1.0f, -1.0f);   // V�rtice inferior derecho
    glEnd();
}
