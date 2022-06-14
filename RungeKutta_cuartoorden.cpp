//
// Created by Nadia Murrieta.
//
#include "RungeKutta_cuartoorden.h"
double f(double x, double y){
    double function;
    function=x-y;
    return(function);}
double RungeKutta_cuartoorden(double x0,  double xf, double y0, double N){
    double H,k1,k2,k3,k4;
    int i;
    H = (xf - x0) / N;
    for (i = 0; i<=N;i++) { //se buscan los valores de k1,k2,k3 y k4 para y (con forma de la serie de Taylor)
        k1 = f(x0, y0);
        k2 = f(x0 + H / 2, y0 + H * k1 / 2);
        k3 = f(x0 + H / 2, y0 + H * k2 / 2);
        k4 = f(x0 + H, y0 + H * k3);
        x0 = x0 + H;
        y0 = y0 + H / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
    }
    return(y0);
}
