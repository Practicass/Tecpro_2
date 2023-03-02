#include <iostream>
#include "instruccion.h"
//#include "sumaDos.h"        //si incluyes los dos programas a la vez da error
//#include "cuentaAtras.h"
#include "factorial.h"
using namespace std;


//vector instrucciones -> memoria dinamica

int main()
{

     
     Programa* prog[3];
     //cout<<"HOLA"<<endl;
     //prog[0] = new SumaDos();
     //prog[0]->listar();
     //prog[0]->ejecutar();
     //cout<<"HOLA"<<endl;
     //prog[1]=new CuentaAtras();
     //prog[1]->listar();
     //prog[1]->ejecutar();
     cout<<"HOLA"<<endl;
     prog[2]=new Factorial();
     prog[2]->listar();
     prog[2]->ejecutar();
}