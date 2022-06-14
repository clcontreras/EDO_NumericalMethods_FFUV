#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>


using namespace std;

double funcion(float x)
{
	return (x * x) * exp(-x * x);
}

int main()
{
	int n;
	float i, a, b;
	double f1, f2, f3, dx, y;
	
	cout << "Ingresar el limite inferior" << endl;
	scanf_s("%f", &a);

	cout << "Ingresar limite superior" << endl;
	scanf_s("%f", &b);

	cout << "Ingresar el numero de particiones" << endl;
	scanf_s("%d", &n);

	f2 = 0.0;
	f1 = funcion(a);
	f3 = funcion(b);
	dx = (b - a) / (float)n;

	for (i = a; i < b; i = i+dx)
	{
		f2 += funcion(i);
	}

	y = (f2 + (f1 + f3) / 2) * dx;

	printf("%0.10f\n", y);

	return 0;
}
