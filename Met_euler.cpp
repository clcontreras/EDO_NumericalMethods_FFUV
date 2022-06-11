/*Método de Euler: para aproximar yn a la solución  de un problema de valor inicial.
Proporcionar la función F(x,y), las condiciones inciales x0, y0, el valor xn donde se desea conocer el valor yn y el núm. de subintervalos N.
Por Ruth Paulina Aponte Trujillo
07/06/2022*/

#include "Met_euler.h"

float f(float x, float y){
	return x-y;
}

int main(){
	
	float x0, y0, xn, N, h;
	
	cout<<"Introduzca la condicion inicial, x0 = ";
	cin>>x0;
	cout<<"y0 = ";
	cin>>y0;
	cout<<"Digite el valor xn donde se desea conocer el valor de yn: ";
	cin>>xn;	
	cout<<"Digite el numero de subintervalos N: ";
	cin>>N;

	h=(xn-x0)/N;
	
	for(int i=1;i<=N-1;i++){
		y0+=h*f(x0,y0);
		x0+=h;
		}

	cout<<"El valor de yn es "<<y0;
	
	return(0);
	}
