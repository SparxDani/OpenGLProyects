#pragma once
#include "Example.h"

class Example1 : public Example
{
public:
    Example1();

    virtual void init() override;
    virtual void Render() override;
    virtual void KeyboardFunc(unsigned char key, int X, int Y) override;
    virtual void Idle() override;

    void DrawPoint();
    void DrawLine();
    void DrawColoredLine();  // Aseg�rate de declarar el m�todo DrawCube aqu�
    //void DrawCoordinateAxes();
    void DrawLineChain();
    void DrawAxesXY();
    void DrawAxesXYZ();
    void DrawGridXZ();
};
