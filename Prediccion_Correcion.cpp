//Utilizando el metodo Predictor-Corrector o Euler-Modificado//

#include "prediccion_correccion.h"

// Se considera la ecuaci�n diferencial 
// para un x y un y dado, regresa a v

double f(double x, double y)
{
    double v = eq;
    return v;
}
 
// predice el siguiente valor para un dado (x, y)
// y tama�o de paso h usando el m�todo de Euler
double predict(double x, double y, double h)
{
    // se devuelve el valor del pr�ximo y (predicho)
    double y1p = y + h * f(x, y);
    return y1p;
}
 
// corrige el valor predicho
// usando el m�todo de Euler modificado
double correct(double x, double y,
               double x1, double y1,
               double h)
{
    // (x, y) son del paso anterior
     // y x1 es el aumento de x para el siguiente paso
     // y y1 se predice y para el siguiente paso
    double e = 0.00001;
    double y1c = y1;
 
    do {
        y1 = y1c;
        y1c = y + 0.5 * h * (f(x, y) + f(x1, y1));
    } while (fabs(y1c - y1) > e);
 
    // cada iteraci�n corrige el valor
     // de y usando la pendiente promedio
    return y1c;
}
 
void printFinalValues(double x, double xn,double y, double h)
{
 
    while (x < xn) {
        double x1 = x + h;
        double y1p = predict(x, y, h);
        double y1c = correct(x, y, x1, y1p, h);
        x = x1;
        y = y1c;
    }
 
   // en cada iteraci�n primero el valor
     // de para el siguiente paso se predice primero
     // y luego corregido.
    std::cout << "El valor final de y para x = "
         << x << " es : " << y ;
}


