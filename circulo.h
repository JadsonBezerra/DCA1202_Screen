#include "figura.h"
#ifndef CIRCULO_H
#define CIRCULO_H

/**
 * @brief A classe circulo é derivada da classe figura
 * @details serve para desenhar um circulo de raio 'r' e de centro localizado em (x0,y0)
 */

class circulo: public figura
{
    int x0,y0,r;
    /**
     * @brief O parametro fill ele informa ao construtor da classe
     * se o circulo será preenchido ou não
     */

    bool fill;
public:
    /**
     * @brief O método circulo constrói o circulo
     * @details Ele define os paramêtros recebidos pelo usuário
     */

    circulo(int _x0,int _y0,int _r,bool _fill=false);
    /**
     * @brief O método draw desenha o circulo
     * @details Esse método é derivado método virtual de draw da classe figura
     */
    void draw(screen &tela);
    /**
     * @brief O método setcirculo modifica os parâmetros do circulo
     * @details Ele define os novos paramêtros recebidos pelo usuário
     */
    void setCirculo(int _x0,int _y0,int _r,bool _fill=false);

};

#endif // CIRCULO_H
