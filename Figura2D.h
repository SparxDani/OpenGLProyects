#pragma once
#include "Figura.h"


class Figura2D : public Figura
{
public:
    Figura2D();
    void init();
    void Render();
    void KeyboardFunc(unsigned char key, int X, int Y);
    void Idle();

private:
    void DrawSquare();    // Dibuja un cuadrado
    void DrawCircle();    // Dibuja un círculo
    void DrawTriangle();  // Dibuja un triángulo

    int selectedFigure;   // Figura seleccionada
};

