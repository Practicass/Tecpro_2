/* ----------------------------------------------------------------------------
 * File:   write.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "write.h"

Write::Write() : 
        Instruccion("write") { }
        
void Write::comportamiento(stack<int>& pila, int& cont) const{
    int a = pila.top();
    pila.pop();
    cout<< a<<endl;
    cont--;

}