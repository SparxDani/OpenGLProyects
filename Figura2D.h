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
    void DrawCircle();    // Dibuja un c�rculo
    void DrawTriangle();  // Dibuja un tri�ngulo

    int selectedFigure;   // Figura seleccionada
};

