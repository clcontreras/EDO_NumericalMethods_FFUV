#include <conio.h>
#include <iostream> 
#include<math.h>
#include <stdio.h>
#include <stdlib.h>

double f(double xo, double yo) { 
    return 2 * xo + yo; 
}


int main(){
    double xo, xf, h, yo, ys;
    printf("\nIngrese valor de x inicial: ");
    scanf_s("%lf", &xo);
    printf("\nIngrese valor de y inicial: ");
    scanf_s("%lf", &yo);
    printf("\nIngrese valor de x final: ");
    scanf_s("%lf", &xf);
    printf("\nIngrese paso: ");
    scanf_s("%lf", &h);
    printf("\nTabla de valores: \n\tX\t\tY");
    while (xo <= xf){
        ys = yo + h * f(xo, yo);
        yo = yo + h / 2 * (f(xo, yo) + f(xo + h, ys));
        xo = xo + h;
        printf("\n %lf , \t %lf", xo, yo);
    }
    printf("\ny(k+1)= %lf",yo);
    return 0;
}
