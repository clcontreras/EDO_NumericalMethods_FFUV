#include "RungeKuta4.h" 

double RK4(int n,double x0,double xf,double y0,double z0)
//n es el numero de subintervalos a usar, x0, y0 y z0 corresponden a las condiciones iniciales del sistema de equaciones, xf es el valor final de x.
{
	double h, k1, k2, k3, k4, c1, c2, c3, c4; //se definen las constantes a usar para el metodo de RK de cuarto orden.
	h=(xf-x0)/n;
	for (int i=1;i<=n;i++){
		k1=f(x0,y0,z0);
		c1=g(x0,y0,z0);
		k2=f(x0+h/2,y0+h/2*k1,z0+h/2*c1);
		c2=g(x0+h/2,y0+h/2*k1,z0+h/2*c1);
		k3=f(x0+h/2,y0+h/2*k2,z0+h/2*c2);
		c3=g(x0+h/2,y0+h/2*k2,z0+h/2*c2);
		k4=f(x0+h,y0+h*k3,z0+h*c1);
		c4=g(x0+h,y0+h*k3,z0+h*c1);
		y0=y0+h/6*(k1+2*k2+2*k3+k4);
		z0=z0+h/6*(c1+2*c2+2*c3+c4);
		x0=x0+h;
	}
	//se calculan las constantes ki y ci y se actualizan las condiciones iniciales x0, y0 y z0. 
	return (y0,z0);
}

