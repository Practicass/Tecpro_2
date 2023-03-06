/* ----------------------------------------------------------------------------
 * File:   write.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "write.h"
using namespace std;
Write::Write() : 
        Instruccion("write") { }

Write::~Write(){
    
}
        
void Write::comportamiento(stack<int>& pila, int& cont) const{
    int a = pila.top();
    pila.pop();
    cout<< a<<endl;
    cont++;

}