#include <iostream>
#include "rlutil.h"
#include "dados.h"
using namespace std;

void dibujarDado (int numero, int posx, int posy){
     dibujarCuadrado(posx,posy);
  dibujarPuntos(numero,posx,posy);
}

 void dibujarPuntos(int numero,int posx, int posy){
     rlutil::setColor(rlutil::BLACK);
     rlutil::setBackgroundColor(rlutil::WHITE);
    switch(numero)
    {
    case 1:
        rlutil::locate(posx+3,posy+1);
        cout << (char)254;
        break;
    case 2:
        rlutil::locate(posx+1,posy);
        cout << (char)220;
        rlutil::locate(posx+5,posy+2);
        cout << (char)223;
        break;

    case 3:
        rlutil::locate(posx+3,posy+1);
        cout << (char)254;
        rlutil::locate(posx+1,posy);
        cout << (char)220;
        rlutil::locate(posx+5,posy+2);
        cout << (char)223;
        break;
    case 4:
        rlutil::locate(posx+1,posy);
        cout << (char)220;
        rlutil::locate(posx+5,posy);
        cout << (char)220;
        rlutil::locate(posx+1,posy+2);
        cout << (char)223;
        rlutil::locate(posx+5,posy+2);
        cout << (char)223;
        break;
    case 5:
        rlutil::locate(posx+3,posy+1);
        cout << (char)254;
        rlutil::locate(posx+1,posy);
        cout << (char)220;
        rlutil::locate(posx+5,posy);
        cout << (char)220;
        rlutil::locate(posx+1,posy+2);
        cout << (char)223;
        rlutil::locate(posx+5,posy+2);
        cout << (char)223;
        break;
    case 6:
        rlutil::locate(posx+1,posy);
        cout << (char)220;
        rlutil::locate(posx+3,posy);
        cout << (char)220;
        rlutil::locate(posx+5,posy);
        cout << (char)220;
        rlutil::locate(posx+1,posy+2);
        cout << (char)223;
        rlutil::locate(posx+3,posy+2);
        cout << (char)223;
        rlutil::locate(posx+5,posy+2);
        cout << (char)223;
        break;

    }
}

void dibujarCuadrado (int posx, int posy)
{
    rlutil:: setColor(rlutil::WHITE);
    for(int x=posx; x<=posx+6; x++)
    {
        for (int y=posy; y<=posy+2; y++)
        {
            rlutil::locate(x,y);
            cout << (char)219;
        }
    }
}
