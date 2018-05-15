#include<math.h>
#include "screen.h"
#ifndef FIGURA_H
#define FIGURA_H

/**
 * @brief A classe figura é uma classe abstrata
 * @details Ela serve template para as classes derivadas
 */

class figura
{
public:
    figura();
    /**
     * @brief O método draw é um método virtual que desenha a figura
     */

    virtual void draw(screen &tela)=0;
};

#endif // FIGURA_H
