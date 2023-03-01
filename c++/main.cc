#include <iostream>
#include "instruccion.h"
#include "sumaDos.h"
using namespace std;


//vector instrucciones -> memoria dinamica

int main()
{

     

     Programa** prog;
     prog[0] = new SumaDos();
     prog[0]->listar();
     prog[0]->ejecutar();
}