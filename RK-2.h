//
// Created by Miguelll1117 on 09/06/2022.
//

#ifndef RK_2_RK_2_H
#define RK_2_RK_2_H

#include<iostream>
#include<cmath>
#include<clocale> //para tildes

#define F(x,y) x - y //definición de la funcion F(x,y)
using namespace std;

void metodo_RK2 (int Iteracion, int Numero, float H, float X_0, float Y_0, float K0, float K1); //se define RK-2

#endif //RK_2_RK_2_H
