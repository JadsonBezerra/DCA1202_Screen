#include<math.h>
#include "screen.h"
#ifndef FIGURA_H
#define FIGURA_H


class figura
{
public:
    figura();
    virtual void draw(screen &tela)=0;
};

#endif // FIGURA_H
