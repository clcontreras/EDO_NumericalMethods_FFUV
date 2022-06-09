//
// Created by Miguelll1117 on 09/06/2022.
//

#include "RK-2.h"

int main (){
    setlocale(LC_ALL, "");
    float XF, H, K0, K1, x, y; //condición inicial X_0=x, Y_0=y, XF donde se desea conocer YF y K0, K1, H
    int I, N;

    cout<<"========================================"<<endl;
    cout<<"Método de Runge-Kutta de segundo orden"<<endl;
    cout<<"========================================"<<endl<<endl;

    //Se piden los datos de entrada
    cout<<"Ingrese la condición inicial: "<<endl<<endl;
    cout<<"X_0 = ";
    cin>>x;
    cout<<"Y_0 = ";
    cin>>y;
    cout<<endl;

    cout<<"Ingrese X_F: ";
    cin>>XF;
    cout<<endl;

    cout<<"Ingrese el número de sub-intervalos: ";
    cin>>N;

    H = (XF - x)/N; //Distancia de los sub-intervalos

    //llamar la funcion
    metodo_RK2 (I, N, H, x, y, K0, K1);

    return 0;
}

