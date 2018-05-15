#include "screen.h"
using namespace std;
screen::screen(int _nl, int _nc, char _brush)
{
    nl=_nl;
    nc=_nc;
    mat=vector< vector<char> > (nl,vector<char>(nc,' '));
    brush=_brush;
}

void screen::setTam(int _nl, int _nc)
{
    nl=_nl;
    nc=_nc;
    mat=vector< vector<char> > (nl,vector<char>(nc,' '));
}

void screen::setPixel(int x, int y)
{
    if((x>=0)&&(y>=0)&&(x<=nc)&&(y<=nl)){
    mat[x][y]=brush;
    }
    else
        exit(0);
}

void screen::clear()
{
    mat=vector< vector<char> > (nl,vector<char>(nc,' '));
}

void screen::setBrush(char b)
{
    brush=b;
}

int screen::getColunas()
{
    return nc;
}

int screen::getLinhas()
{
    return nl;
}

ostream& operator<<(ostream &os, const screen &t)
{
    for(int i=0;i< t.nc;i++){
        for(int j=0;j< t.nl;j++){
            os<<t.mat[j][i]<<" ";
        }
        os<<endl;
    }
    return os;
}

