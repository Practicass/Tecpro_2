/* ----------------------------------------------------------------------------
 * File:   dup.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "dup.h"
using namespace std;

Dup::Dup() : 
        Instruccion("dup") { 
            
        }
Dup::~Dup(){
    
}

void Dup::comportamiento(stack<int>& pila, int& cont) const  { 
    int aux = pila.top();
    pila.pop();
    pila.push(aux);
    pila.push(aux);
    cont++;
}  