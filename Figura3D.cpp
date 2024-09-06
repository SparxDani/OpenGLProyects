#include "Figura3D.h"
#include "IncludeGL.h"
#include <iostream>

Figura3D::Figura3D()
{

}

void Figura3D::init()
{
    // Configuración de OpenGL
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    glEnable(GL_DEPTH_TEST); // Habilita el test de profundidad
    gluLookAt(5.0, 5.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0); // Posición de la cámara
    glMatrixMode(GL_MODELVIEW);
}

void Figura3D::Render()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



    glFlush();
}

void Figura3D::KeyboardFunc(unsigned char key, int X, int Y)
{
    // Aquí puedes manejar la entrada del teclado si es necesario
}

void Figura3D::Idle()
{
    // Función de idle, puedes poner actualizaciones aquí si las necesitas
}