/* ----------------------------------------------------------------------------
 * File:   jumpif.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "jumpif.h"
using namespace std;

Jumpif::Jumpif(int num) : 
        Instruccion("jumpif") { 
            l=num;
        }

string Jumpif::mostrar() const{
   return nombre+" "+to_string(l);
}
void Jumpif::comportamiento(stack<int>& pila, int& cont) const  { 
    int aux=pila.top();
    pila.pop();
    if(aux>=0){
        cont=l;
    }else{
        cont++;
    }
}   