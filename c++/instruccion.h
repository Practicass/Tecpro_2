/* ----------------------------------------------------------------------------
 * File:   instruccion.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Práctica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#pragma once
#include <iostream>
#include <stack>
 // ha dicho en clase que no pongamos esto en el .h, solo en el .cc, sino algo no esta muy bien hecho, no quiere decir q esta mal.

class Instruccion{
protected:
    std::string nombre;
    
public:
    Instruccion(std::string nombre);
    virtual std::string mostrar() const;
    virtual void comportamiento(std::stack<int>& pila, int& cont) const;
};


