/* ----------------------------------------------------------------------------
 * File:   mul.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "mul.h"
using namespace std;

Mul::Mul() : 
        Instruccion("mul") { 
            
        }
Mul::~Mul(){
    
}

void Mul::comportamiento(stack<int>& pila, int& cont) const  { 
    int a=pila.top();
    pila.pop();
    int b=pila.top();
    pila.pop();
    pila.push(a*b);
    cont++;
}  