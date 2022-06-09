#include<stdio.h>
#include<math.h>
#include<iostream>
#define f(x,y,z) z 
#define g(x,y,z) (-1/x)*z+(1/(x*x)-1)*y  // Se definen las funciones a usar

double RK4(int n,double x0,double xf,double y0,double z0); // se define la funcion RK4 

