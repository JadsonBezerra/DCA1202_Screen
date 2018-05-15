#include<vector>
#include<cstdlib>
#include<iostream>
#ifndef SCREEN_H
#define SCREEN_H
using namespace std;

/**
 * @brief A classe  screen cria uma tela para desenho
 */


class screen
{
    int nl,nc;
    char brush;
    vector< vector<char> > mat;
public:
    /**
     * @brief O método screen constrói a tela
     * @details Ele define os paramêtros recebidos pelo usuário
     */

    screen(int _nl=0, int _nc=0,char _brush='#');
    /**
     * @brief O método setTam modifica os parâmetros da tela
     * @details Ele define os novos paramêtros recebidos pelo usuário
     */
    void setTam(int _nl,int _nc);
    /**
     * @brief O método setPixel modifica o caracter do pixel
     */
    void setPixel(int x, int y);
    /**
     * @brief O método clear limpa a tela
     */
    void clear();
    /**
     * @brief O método setBrush modifica o pincel
     * @details Ele modifica o caracter que sairá na tela
    */
    void setBrush(char b);
    /**
     * @brief O método getColunas ele retorna a quantidade de colunas
     */
    int getColunas();

    /**
     * @brief O método getLinhas ele retorna a quantidade de linhas
     */
    int getLinhas();

    /**
     * @brief O método serve para realizar impressão
     * @details Ele é uma sobrecarga do operador << para realizar a impressão
     */
    friend ostream& operator<<(ostream& os,const screen& t);
};

#endif // SCREEN_H
