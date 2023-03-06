/* ----------------------------------------------------------------------------
 * File:   instruccion.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */

#include "instruccion.h"
using namespace std;

Instruccion::Instruccion(string name){
    nombre = name;
}

Instruccion::~Instruccion(){

}

string Instruccion::mostrar() const{
   return nombre;
    
}
void Instruccion::comportamiento(stack<int>& pila, int& cont) const { }