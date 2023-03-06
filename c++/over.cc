/* ----------------------------------------------------------------------------
 * File:   over.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Arejulajula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "over.h"
using namespace std;

Over::Over() : 
        Instruccion("over") { 
            
        }
Over::~Over(){
    
}

void Over::comportamiento(stack<int>& pila, int& cont) const  { 
    int a=pila.top();
    pila.pop();
    int b=pila.top();
    pila.pop();
    pila.push(b);
    pila.push(a);
    pila.push(b);
    cont++;
}  