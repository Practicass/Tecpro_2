/* ----------------------------------------------------------------------------
 * File:   dup.h
 * Author: Pablo Angusto Delgado 842255 y Miguel Aréjula Aisa 850068
 * Date:   marzo 2023
 * Coms:   Practica 2 de Tecpro 
 *         
 * -----------------------------------------------------------------------------
 */
#pragma once
#include "instruccion.h"
#include <stack>


class Dup : public Instruccion {

public:
    Dup();
    ~Dup();
    
    void comportamiento(std::stack<int>& pila, int& cont) const override;
};