#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include  <list>
#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main()
{
    vector <figura *> figuras;
    ifstream fin;
    ofstream fout;
    string s;
    screen tela;

    fin.open("/home/jadson/work/20181/PA/DCA1202_Screen/figura.txt");
    fout.open("/home/jadson/work/20181/PA/DCA1202_Screen/tela.txt");
    if(!fin.is_open()||!fout.is_open()){
        throw "Erro de arquivo";
        exit(-1);
    }

    while(fin.good()){
      getline(fin, s);
      if(fin.good()){
        string cmd;
        stringstream sstream(s);
        sstream >> cmd;
        if(cmd.compare("dim")==0){
          cout<<cmd<<endl;
          int nc, nl;
          sstream >> nl >>nc;
          tela.setTam(nl,nc);
        }
        if(cmd.compare("brush")==0){
            char b;
            sstream >>b;
            tela.setBrush(b);
            cout<<cmd<<endl;
          }
        if(cmd.compare("reta")==0){
            int x0, y0, x1, y1;
            sstream >>x0>> y0>> x1>> y1;
            figuras.push_back(new reta(x0,y0,x1,y1));
            cout<<cmd<<endl;
          }
        if(cmd.compare("retangulo")==0){
            int x0, y0, h, l;
            bool fill;
            sstream >>x0>> y0>> h>> l>>fill;
            figuras.push_back(new retangulo(x0,y0,h,l,fill));
            cout<<cmd<<endl;
          }
        if(cmd.compare("circulo")==0){
            int x0, y0, r;
            bool fill;
            sstream >>x0>> y0>>r>>fill;
            figuras.push_back(new circulo(x0,y0,r,fill));
            cout<<cmd<<endl;
          }
        if(cmd.compare("pixel")==0){
            int x0, y0;
            sstream >>x0>> y0;
            figuras.push_back(new circulo(x0,y0,0,1));
            cout<<cmd<<endl;
          }
      }
    }

    for(auto it:figuras){
        it->draw(tela);
     }
    for(int i=0; i<figuras.size(); i++){
        delete figuras[i];
      }
    cout<<tela;
    fout<<tela;
    fin.close();
    fout.close();

    return 0;
}
