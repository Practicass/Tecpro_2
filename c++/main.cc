#include <iostream>
#include "instruccion.h"
#include "sumaDos.h"
using namespace std;


//vector instrucciones -> memoria dinamica

int main()
{

     
     Programa* prog;
     prog=new SumaDos();
     //Programa** prog;
     cout<<"HOLA"<<endl;
     //prog[0] = new SumaDos();
     //cout<<"HOLA"<<endl;
     prog->listar();
     //cout<<"HOLA"<<endl;
     //prog[0]->ejecutar();
}