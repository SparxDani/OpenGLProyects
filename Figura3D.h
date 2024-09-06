#pragma once
#include "Figura.h"
class Figura3D :
    public Figura
{
    Figura3D();

    virtual void init() override;
    virtual void Render() override;
    virtual void KeyboardFunc(unsigned char key, int X, int Y) override;
    virtual void Idle() override;


};
