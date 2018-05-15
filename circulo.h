#include "figura.h"
#ifndef CIRCULO_H
#define CIRCULO_H


class circulo: public figura
{
    int x0,y0,r;
    bool fill;
public:
    circulo(int _x0,int _y0,int _r,bool _fill=false);
    void draw(screen &tela);
    void setCirculo(int _x0,int _y0,int _r,bool _fill=false);

};

#endif // CIRCULO_H
