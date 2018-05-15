#include <math.h>
#include "screen.h"
#include "figura.h"
#include <iostream>
#ifndef RETA_H
#define RETA_H


class reta: public figura
{
    int x1,x2,y1,y2;
public:
    reta(int _x0, int  _y0,int _x1, int  _y1);
    void draw(screen &tela);
    void setCord(int _x1, int  _y1,int _x2, int  _y2);
};

#endif // RETA_H
