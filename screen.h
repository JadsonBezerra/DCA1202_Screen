#include<vector>
#include<cstdlib>
#include<iostream>
#ifndef SCREEN_H
#define SCREEN_H
using namespace std;

class screen
{
    int nl,nc;
    char brush;
    vector< vector<char> > mat;
public:
    screen(int _nl=0, int _nc=0,char _brush='#');
    void setTam(int _nl,int _nc);
    void setPixel(int x, int y);
    void clear();
    void setBrush(char b);
    int getColunas();
    int getLinhas();

    friend ostream& operator<<(ostream& os,const screen& t);
};

#endif // SCREEN_H
