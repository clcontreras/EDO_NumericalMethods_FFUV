//
// Created by Sekinal on 07/06/2022.
//

#include "EulerModificado.h"

double function(double x, double y){
    /*
     * Aqui se ha de definir la funcion de dos variables que representa a la
     * ecuacion diferencial ordinaria en la forma dy/dx=g(x, y)
     */

    return x*x*x-x*y+38*x*y;
}

double euler_modificado(double X0, double Y0, double XF, int N){
    /*
     * X0 y Y0 son las condiciones  iniciales del
     * sistema
     * XF es el valoren donde se desea conocer YF
     * N es el numero de subintervalos a emplear
     */

    double H, Y1;

    H = (XF-X0)/N;

    for (int I = 0; I < N; ++I){
        Y1 = Y0 + H*function(X0, Y0); // Valor predecido, predictor
        Y0 += (H/2)*(function(X0, Y0) + function(X0+H, Y1));
        // Correccion de la prediccion, corrector
        X0 += H;
    }

    return Y0;
}