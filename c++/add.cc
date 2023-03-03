/* ----------------------------------------------------------------------------
 * File:   add.cc
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#include "add.h"
using namespace std;
Add::Add() : 
        Instruccion("add") { }

Add::~Add(){
    
}


void Add::comportamiento(stack<int>& pila, int& cont) const { // es necesario override?
    int a=pila.top();
    pila.pop();
    int b=pila.top();
    pila.pop();
    pila.push(a+b);
    cont++;
}