/* ----------------------------------------------------------------------------
 * File:   read.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "read.h"
using namespace std;

 Read::Read() : 
        Instruccion("read") { }

Read::~Read(){
    
}

void Read::comportamiento(stack<int>& pila, int& cont) const  { 
    cout << "?";
    int entrada;
    cin >> entrada;
    pila.push(entrada);
    cont++;
}   