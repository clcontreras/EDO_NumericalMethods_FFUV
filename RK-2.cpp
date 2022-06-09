//
// Created by Miguelll1117 on 09/06/2022.
//

#include "RK-2.h"

//método de Runge-Kutta de orden 2
void metodo_RK2 (int I, int N, float H, float x, float y, float K0, float K1){

    I = 1;
    while (I <= N){
        K0 = F(x,y);
        K1 = F((x+H), (y + H*K0));
        y  = y + H/2*(K0 + K1);
        x = x + H;
        I = I + 1;
    }
    cout<<endl<<"La aproximación a YF es: "<<y;
}