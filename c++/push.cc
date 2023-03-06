/* ----------------------------------------------------------------------------
 * File:   push.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "push.h"
using namespace std;

Push::Push(int num) : 
        Instruccion("push") { 
            c=num;
        }

Push::~Push(){
    
}
string Push::mostrar() const{
   return nombre+" "+to_string(c);
}
void Push::comportamiento(stack<int>& pila, int& cont) const  { 
    pila.push(c);
    cont++;
}   