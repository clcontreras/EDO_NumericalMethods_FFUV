#include<iostream> 
#include<math.h>

int X,Y,N,H,x,y,xn,h,eq,v;
void printFinalValues(double x, double xn,double y, double h);

int main()
{
	
	std::cout<<"introduzca la ecuacion : ";
	std::cin>>eq;
    // aquí las x e y iniciales
    std::cout<<"introduzca el valor inicial de x : ";
	std::cin>>X;
	std::cout<<"introduzca el valor inicial de y : ";
	std::cin>>Y;
    double x = X, y = Y;
 
    // valor final de x para el cual se necesita y
    std::cout<<"introduzca el valor final de x : ";
	std::cin>>N;
    double xn = N;
 
 	//tamaño de paso
 	std::cout<<"introduzca el tamano de paso para cada incremento : ";
	std::cin>>H;
    double h = H;
 
    printFinalValues(x, xn, y, h);
 
    return 0;
}
 

