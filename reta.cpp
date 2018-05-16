#include "reta.h"

reta::reta(int _x0, int _y0, int _x1, int _y1)
{
    x1=_x0;
    y1=_y0;
    x2=_x1;
    y2=_y1;
}

void reta::draw(screen &tela)
{
    int i,Tamanho;
    float Delta_x,Delta_y;
    float x,y;
    x=x1;
    y=y1;
    Tamanho = ( abs(x2 - x1) > abs(y2 - y1))?abs(x2 - x1):abs(y2 - y1);
     Delta_x =(float) (x2 - x1)/Tamanho;
     Delta_y =(float) (y2 - y1)/Tamanho;
     i = 1;
     while(i<=Tamanho){
       tela.setPixel(round(x), round(y));
       x = x + Delta_x;
       y = y + Delta_y;
       i = i + 1;
     }

}

void reta::setCord(int _x1, int _y1, int _x2, int _y2)
{
    x1=_x1;
    y1=_y1;
    x2=_x2;
    y2=_y2;
}
