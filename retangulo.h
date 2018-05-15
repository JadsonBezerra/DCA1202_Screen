#include "reta.h"
#include "figura.h"
#ifndef RETANGULO_H
#define RETANGULO_H


class retangulo: public figura
{
    int x0,y0,h,l;
    bool fill;
public:
    retangulo(int _x0, int _y0, int _h, int _l, bool _fill=false);
    void draw(screen &tela);
    void setRetangulo(int _x0, int _y0, int _h, int _l, bool _fill=false);

};

#endif // RETANGULO_H
