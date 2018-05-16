#include "retangulo.h"

retangulo::retangulo(int _x0, int _y0, int _h, int _l, bool _fill)
{
   x0=_x0;
   y0=_y0;
   h=_h;
   l=_l;
   fill=_fill;
}

void retangulo::draw(screen &tela)
{
    if(fill){
        for(int i=0;i<h;i++){
            for(int j=0;j<l;j++){
                tela.setPixel(x0+j,y0+i);
            }
        }
    }
    else{
        for(int i=0;i<h;i++){
            tela.setPixel(x0,y0+i);
            tela.setPixel(x0+l-1,y0+i);
        }
        for(int i=0;i<l;i++){
            tela.setPixel(x0+i,y0);
            tela.setPixel(x0+i,y0+h-1);
        }
    }

}

void retangulo::setRetangulo(int _x0, int _y0, int _h, int _l, bool _fill)
{
    x0=_x0;
    y0=_y0;
    h=_h;
    l=_l;
    fill=_fill;
}
