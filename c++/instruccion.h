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
 

class Instruccion{
protected:
    std::string nombre;
    
public:
    //Constructor
    Instruccion(std::string nombre);
    //Deconstructor
    ~Instruccion();

    virtual std::string mostrar() const;
    virtual void comportamiento(std::stack<int>& pila, int& cont) const;
};


