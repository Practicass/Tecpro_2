#include <iostream>
#include "instruccion.h"
//#include "sumaDos.h"        //si incluyes los dos programas a la vez da error
#include "cuentaAtras.h"
using namespace std;


//vector instrucciones -> memoria dinamica

int main()
{

     
     Programa* prog[3];
     //cout<<"HOLA"<<endl;
     //prog[0]=new SumaDos();
     //Programa** prog;
     //prog[0] = new SumaDos();
     //cout<<"HOLA"<<endl;
     //prog[0]->listar();
     //cout<<"HOLA"<<endl;
     //prog[0]->ejecutar();
     cout<<"HOLA"<<endl;
     prog[1]=new CuentaAtras();
     prog[1]->listar();
     prog[1]->ejecutar();
}