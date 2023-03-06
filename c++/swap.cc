/* ----------------------------------------------------------------------------
 * File:   swap.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "swap.h"
using namespace std;

Swap::Swap() : 
        Instruccion("swap") { 
            
        }
Swap::~Swap(){
    
}

void Swap::comportamiento(stack<int>& pila, int& cont) const  { 
    int a=pila.top();
    pila.pop();
    int b=pila.top();
    pila.pop();
    pila.push(a);
    pila.push(b);
    cont++;
}  