#include "reta.h"
#include "figura.h"
#ifndef RETANGULO_H
#define RETANGULO_H
/**
 * @brief A classe retângulo é derivada da classe figura
 * @details serve para desenhar uma retângulo de ponto inicial(x0,y0) e de altura h e largura l
 */

class retangulo: public figura
{
    int x0,y0,h,l;
    /**
     * @brief O parametro fill ele informa ao construtor da classe
     * se o retângulo será preenchida ou não
     */

    bool fill;
public:
    /**
     * @brief O retângulo circulo constrói o retângulo
     * @details Ele define os paramêtros recebidos pelo usuário
     */
    retangulo(int _x0, int _y0, int _h, int _l, bool _fill=false);
    /**
     * @brief O método draw desenha o retângulo
     * @details Esse método é derivado método virtual de draw da classe figura
     */

    void draw(screen &tela);
    /**
     * @brief O método setRetanfulo modifica os parâmetros do circulo
     * @details Ele define os novos paramêtros recebidos pelo usuário
     */

    void setRetangulo(int _x0, int _y0, int _h, int _l, bool _fill=false);

};

#endif // RETANGULO_H
