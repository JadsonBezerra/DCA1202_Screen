#include <math.h>
#include "screen.h"
#include "figura.h"
#include <iostream>
#ifndef RETA_H
#define RETA_H
/**
 * @brief A classe reta é derivada da classe figura
 * @details serve para desenhar uma reta de ponto inicial(x1,y1) e ponto final (x0,y0)
 */


class reta: public figura
{
    int x1,x2,y1,y2;
public:
    /**
     * @brief O método reta constrói a reta
     * @details Ele define os paramêtros recebidos pelo usuário
     */

    reta(int _x0, int  _y0,int _x1, int  _y1);
    /**
     * @brief O método draw desenha a reta
     * @details Esse método é derivado método virtual de draw da classe figura
     */

    void draw(screen &tela);
    /**
     * @brief O método setcord modifica os parâmetros da reta
     * @details Ele define os novos paramêtros recebidos pelo usuário
     */

    void setCord(int _x1, int  _y1,int _x2, int  _y2);
};

#endif // RETA_H
