#include "circulo.h"

circulo::circulo(int _x0, int _y0, int _r, bool _fill)
{
 x0=_x0;y0=_y0;r=_r;fill=_fill;
}

void circulo::draw(screen &tela)
{
    int x = 0;
    int y = r;
    int d = 1 - r;
      while(y > x){
        tela.setPixel(x0 + x, y0 + y);
        tela.setPixel(x0 + y, y0 + x);
        tela.setPixel(x0 - y, y0 + x);
        tela.setPixel(x0 - x, y0 + y);
        tela.setPixel(x0 - x, y0 - y);
        tela.setPixel(x0 - y, y0 - x);
        tela.setPixel(x0 + y, y0 - x);
        tela.setPixel(x0 + x, y0 - y);
       if(d < 0){
         d = d + 2*x + 3;
         x = x + 1;
       }
       else{
         d = d + 2*(x-y) + 5;
         x = x + 1;
         y = y - 1;
       }
    }
    if(fill){
        for(int i=0;i<tela.getColunas();i++){
            for(int j=0;j<tela.getLinhas();j++){
                if(((i-x0)*(i-x0)+(j-y0)*(j-y0))<=r*r){
                    tela.setPixel(i,j);
                }
            }
        }
    }
}

void circulo::setCirculo(int _x0, int _y0, int _r, bool _fill)
{
     x0=_x0;y0=_y0;r=_r;fill=_fill;
}
